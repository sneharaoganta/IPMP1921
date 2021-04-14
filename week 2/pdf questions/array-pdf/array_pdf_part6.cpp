#include <bits/stdc++.h>
using namespace std;
 

void leftRotatebyOne(int arr[], int n)
{
    int temp = arr[0], i;
    for (i = 0; i < n - 1; i++)
        arr[i] = arr[i + 1];
 
    arr[n-1] = temp;
}
 

void leftRotate(int arr[], int d, int n)
{
    for (int i = 0; i < d; i++)
        leftRotatebyOne(arr, n);
}
 

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int maxSubArraySum(int a[], int size)
{
    int max_so_far = INT_MIN, max_ending_here = 0;
 
    for (int i = 0; i < size; i++)
    {
        max_ending_here = max_ending_here + a[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}
 
 int subArraySum(int arr[], int n, int sum)
{
    int curr_sum, i, j;
 
    for (i = 0; i < n; i++) {
        curr_sum = arr[i];
 
        for (j = i + 1; j <= n; j++) {
            if (curr_sum == sum) {
                cout << "Sum found between indexes "
                     << i << " and " << j - 1;
                return 1;
            }
            if (curr_sum > sum || j == n)
                break;
            curr_sum = curr_sum + arr[j];
        }
    }
 
    cout << "No subarray found";
    return 0;
}

int FindMaxSum(int arr[], int n)
{
  int incl = arr[0];
  int excl = 0;
  int excl_new;
  int i;
  
  for (i = 1; i < n; i++)
  {
     excl_new = (incl > excl)? incl: excl;
  
     incl = excl + arr[i];
     excl = excl_new;
  }
  
   return ((incl > excl)? incl : excl);
}

void findMajority(int arr[], int n)
{
    int maxCount = 0;
    int index = -1; 
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j])
                count++;
        }
 
        if (count > maxCount) {
            maxCount = count;
            index = i;
        }
    }
 
    if (maxCount > n / 2)
        cout << arr[index] << endl;
 
    else
        cout << "No Majority Element" << endl;
}

int maxRepeating(int* arr, int n, int k)
{
    for (int i = 0; i< n; i++)
        arr[arr[i]%k] += k;
 
    int max = arr[0], result = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            result = i;
        }
    }
 
    return result;
}
  
 
int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6, 7 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    leftRotate(arr, 2, n);
    printArray(arr, n);

    int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
    int n1 = sizeof(a)/sizeof(a[0]);
    int max_sum = maxSubArraySum(a, n1);
    cout << "Maximum contiguous sum is " << max_sum;

     int sum = 23;
    subArraySum(arr, n, sum);

    cout<<FindMaxSum(arr,n);

    findMajority(arr, n);

    int k = 8;
 
    cout << "The maximum repeating number is " <<
         maxRepeating(arr, n, k) << endl;
 
    return 0;
}