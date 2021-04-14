#include <bits/stdc++.h>
using namespace std;

bool find3Numbers(int A[], int arr_size, int sum)
{
    int l, r;
 
    for (int i = 0; i < arr_size - 2; i++)
    {
        for (int j = i + 1; j < arr_size - 1; j++)
        {

            for (int k = j + 1; k < arr_size; k++)
            {
                if (A[i] + A[j] + A[k] == sum)
                {
                    cout << "Triplet is " << A[i] <<
                        ", " << A[j] << ", " << A[k];
                    return true;
                }
            }
        }
    }
 
    return false;
}

void findFourElements(int arr[], int n, int X)
{
    unordered_map<int, pair<int, int> > mp;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            mp[arr[i] + arr[j]] = { i, j };
 

    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            int sum = arr[i] + arr[j];
 
            if (mp.find(X - sum) != mp.end()) {
 
                pair<int, int> p = mp[X - sum];
                if (p.first != i && p.first != j
                    && p.second != i && p.second != j) {
                    cout << arr[i] << ", " << arr[j] << ", "
                         << arr[p.first] << ", "
                         << arr[p.second];
                    return;
                }
            }
        }
    }
}

void swap(int* a, int* b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int segregate(int arr[], int size)
{
    int j = 0, i;
    for (i = 0; i < size; i++) {
        if (arr[i] <= 0) {
            swap(&arr[i], &arr[j]);
           
            // increment count of
            // non-positive integers
            j++;
        }
    }
 
    return j;
}

int findMissingPositive(int arr[], int size)
{
    int i;
 
    for (i = 0; i < size; i++) {
        if (abs(arr[i]) - 1 < size && arr[abs(arr[i]) - 1] > 0)
            arr[abs(arr[i]) - 1] = -arr[abs(arr[i]) - 1];
    }
 

    for (i = 0; i < size; i++)
        if (arr[i] > 0)
           
           
            return i + 1;
 
    return size + 1;
}

int findMissing(int arr[], int size)
{
    int shift = segregate(arr, size);
 
    return findMissingPositive(arr + shift,
                               size - shift);
}

int maxDiff(int arr[], int arr_size)
{    
  int max_diff = arr[1] - arr[0];
  for (int i = 0; i < arr_size; i++)
  {
    for (int j = i+1; j < arr_size; j++)
    {    
      if (arr[j] - arr[i] > max_diff)
        max_diff = arr[j] - arr[i];
    }
  }        
  return max_diff;
}

void minAbsSumPair(int arr[], int arr_size)
{
    int inv_count = 0;
    int l, r, min_sum, sum, min_l, min_r;
     
    /* Array should have at least
       two elements*/
    if(arr_size < 2)
    {
        cout << "Invalid Input";
        return;
    }
     
    /* Initialization of values */
    min_l = 0;
    min_r = 1;
    min_sum = arr[0] + arr[1];
     
    for(l = 0; l < arr_size - 1; l++)
    {
        for(r = l + 1; r < arr_size; r++)
        {
        sum = arr[l] + arr[r];
        if(abs(min_sum) > abs(sum))
        {
            min_sum = sum;
            min_l = l;
            min_r = r;
        }
        }
    }
     
    cout << "The two elements whose sum is minimum are "
         << arr[min_l] << " and " << arr[min_r];
}

void printLeaders(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int j;
        for (j = i+1; j < size; j++)
        {
            if (arr[i] < arr[j])
                break;
        }   
        if (j == size) // the loop didn't break
            cout << arr[i] << " ";
  }
}

bool compare(int x, int y)
{
    return abs(x) < abs(y);
}

void findMinSum(int arr[], int n)
{
    sort(arr, arr + n, compare);
    int min = INT_MAX, x, y;
    for (int i = 1; i < n; i++) {
 
        // Absolute value shows how close it is to zero
        if (abs(arr[i - 1] + arr[i]) <= min) {
 
            // if found an even close value
            // update min and store the index
            min = abs(arr[i - 1] + arr[i]);
            x = i - 1;
            y = i;
        }
    }
    cout << "The two elements whose sum is minimum are "
         << arr[x] << " and " << arr[y];
}
 
 

int main()
{
    int A[] = { 1, 4, 45, 6, 10, 8 };
    int sum = 22;
    int arr_size = sizeof(A) / sizeof(A[0]);
    find3Numbers(A, arr_size, sum);

    int arr[] = { 10, 20, 30, 40, 1, 2 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int X = 91;
    
    // Function call
    findFourElements(arr, n, X);

    int arr1[] = { 0, 10, 2, -10, -20 };
    int arr_size1 = sizeof(arr1) / sizeof(arr1[0]);
    int missing = findMissing(arr1, arr_size1);
    cout << "The smallest positive missing number is " << missing;

    cout << "Maximum difference is " << maxDiff(arr, n);


    int arr2[] = {1, 60, -10, 70, -80, 85};
    minAbsSumPair(arr2, 6);

    printLeaders(arr, n);
    findMinSum(arr, n);

    return 0;
}
 