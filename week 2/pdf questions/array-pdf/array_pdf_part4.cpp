#include <bits/stdc++.h>
using namespace std;

#define R 3
#define C 6

void swap(int *a, int *b);

void segregateEvenOdd(int arr[], int size)
{

    int left = 0, right = size-1;
    while (left < right)
    {
       
        while (arr[left] % 2 == 0 && left < right)
            left++;
 
       
        while (arr[right] % 2 == 1 && left < right)
            right--;
 
        if (left < right)
        {
           
            swap(&arr[left], &arr[right]);
            left++;
            right--;
        }
    }
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

bool fcompare(pair<int, pair<int, int> > p,
              pair<int, pair<int, int> > p1)
{
    if (p.second.second != p1.second.second)
        return (p.second.second > p1.second.second);
    else
        return (p.second.first < p1.second.first);
}
void sortByFrequency(int arr[], int n)
{
    unordered_map<int, pair<int, int> > hash; // hash map
    for (int i = 0; i < n; i++) {
        if (hash.find(arr[i]) != hash.end())
            hash[arr[i]].second++;
        else
            hash[arr[i]] = make_pair(i, 1);
    } // store the count of all the elements in the hashmap
 
    // Iterator to Traverse the Hashmap
    auto it = hash.begin();
 
    // Vector to store the Final Sortted order
    vector<pair<int, pair<int, int> > > b;
    for (it; it != hash.end(); ++it)
        b.push_back(make_pair(it->first, it->second));
 
    sort(b.begin(), b.end(), fcompare);
 
    // Printing the Sorted sequence
    for (int i = 0; i < b.size(); i++) {
        int count = b[i].second.second;
        while (count--)
            cout << b[i].first << " ";
    }
}

void segregate0and1(int arr[], int size)
{
    int left = 0, right = size-1;
 
    while (left < right)
    {
        while (arr[left] == 0 && left < right)
            left++;
 
        while (arr[right] == 1 && left < right)
            right--;
 
        if (left < right)
        {
            arr[left] = 0;
            arr[right] = 1;
            left++;
            right--;
        }
    }
}

void printArray (int arr[], int n) 
{ 
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " "; 
    cout << "\n"; 
} 

void randomize (int arr[], int n) 
{ 
    srand (time(NULL)); 
   
    for (int i = n - 1; i > 0; i--) 
    { 
        int j = rand() % (i + 1); 
        swap(&arr[i], &arr[j]); 
    } 
} 

void spiralPrint(int m, int n, int a[R][C])
{
    int i, k = 0, l = 0;
 
   
    while (k < m && l < n) {
        
        for (i = l; i < n; ++i) {
            cout << a[k][i] << " ";
        }
        k++;
 
        for (i = k; i < m; ++i) {
            cout << a[i][n - 1] << " ";
        }
        n--;

        if (k < m) {
            for (i = n - 1; i >= l; --i) {
                cout << a[m - 1][i] << " ";
            }
            m--;
        }
 
       
        if (l < n) {
            for (i = m - 1; i >= k; --i) {
                cout << a[i][l] << " ";
            }
            l++;
        }
    }
}

void productArray(int arr[], int n)
{
    if (n == 1) {
        cout << 0;
        return;
    }
    
    int* left = new int[sizeof(int) * n];
    int* right = new int[sizeof(int) * n];
 
    int* prod = new int[sizeof(int) * n];
 
    int i, j;
 
    left[0] = 1;
 
    right[n - 1] = 1;
 
  
    for (i = 1; i < n; i++)
        left[i] = arr[i - 1] * left[i - 1];
 
    
    for (j = n - 2; j >= 0; j--)
        right[j] = arr[j + 1] * right[j + 1];
 
   
    for (i = 0; i < n; i++)
        prod[i] = left[i] * right[i];
 
    
    for (i = 0; i < n; i++)
        cout << prod[i] << " ";
 
    return;
}

void pushZerosToEnd(int arr[], int n)
{
    int count = 0;  
    for (int i = 0; i < n; i++)
        if (arr[i] != 0)
            arr[count++] = arr[i]; 
 
    while (count < n)
        arr[count++] = 0;
}

int getInvCount(int arr[], int n)
{
    int inv_count = 0;
    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++)
            if (arr[i] > arr[j])
                inv_count++;
 
    return inv_count;
}

void kLargest(int arr[], int n, int k)
{
    sort(arr, arr + n, greater<int>());
 
    for (int i = 0; i < k; i++)
        cout << arr[i] << " ";
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
        if (j == size) 
            cout << arr[i] << " ";
  }
}
 

int main()
{
    int arr[] = {12, 34, 45, 9, 8, 90, 3};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    int i = 0;
 
    segregateEvenOdd(arr, arr_size);
 
    cout <<"Array after segregation ";
    for (i = 0; i < arr_size; i++)
        cout << arr[i] << " ";


        int arr1[] = { 2, 5, 2, 6, -1, 9999999, 5, 8, 8, 8 };
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
 
    sortByFrequency(arr1, n1); 

    randomize (arr, arr_size); 
    printArray(arr, arr_size); 

    int a[R][C] = { { 1, 2, 3, 4, 5, 6 },
                    { 7, 8, 9, 10, 11, 12 },
                    { 13, 14, 15, 16, 17, 18 } };
         spiralPrint(R, C, a);

         cout << "The product array is: \n";
    productArray(arr, arr_size);

    segregate0and1(arr, arr_size);
    cout << "Array after segregation ";
    printArray(arr, arr_size); 

    int arr2[] = {1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    pushZerosToEnd(arr2, n2);
    cout << "Array after pushing all zeros to end of array :\n";
     printArray(arr, arr_size);
 
 cout << " Number of inversions are "
         << getInvCount(arr, arr_size);


int k = 3;
    kLargest(arr, arr_size, k);

      printLeaders(arr, arr_size);

    return 0;
}