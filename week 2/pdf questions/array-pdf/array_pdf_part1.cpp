#include <bits/stdc++.h>
using namespace std;
  
int printUnion(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n) {
        if (arr1[i] < arr2[j])
            cout << arr1[i++] << " ";
  
        else if (arr2[j] < arr1[i])
            cout << arr2[j++] << " ";
  
        else {
            cout << arr2[j++] << " ";
            i++;
        }
    }
  
    
    while (i < m)
        cout << arr1[i++] << " ";
  
    while (j < n)
        cout << arr2[j++] << " ";
}

int getOddOccurrence(int arr[], int arr_size)
{
    for (int i = 0; i < arr_size; i++) {
         
        int count = 0;
         
        for (int j = 0; j < arr_size; j++)
        {
            if (arr[i] == arr[j])
                count++;
        }
        if (count % 2 != 0)
            return arr[i];
    }
    return -1;
}

int getMissingNo(int a[], int n)
{
 
    int total = (n + 1) * (n + 2) / 2;
    for (int i = 0; i < n; i++)
        total -= a[i];
    return total;
}


void get2NonRepeatingNos(int arr[], int n,
                                int *x, int *y)
{
    
    int Xor = arr[0];
   
   
    int set_bit_no;
    int i;
    *x = 0;
    *y = 0;
     
    
    for(i = 1; i < n; i++)
    Xor ^= arr[i];
     
    
    set_bit_no = Xor & ~(Xor-1);
     
    
    for(i = 0; i < n; i++)
    { 
         
      
      if(arr[i] & set_bit_no)
        *x = *x ^ arr[i];
     
      else
      {
        *y = *y ^ arr[i];
      }
    }
}

void printTwoOdd(int arr[], int size) 
{ 
    int xor2 = arr[0]; 
    int set_bit_no; 
    int i; 
    int n = size - 2; 
    int x = 0, y = 0; 
      
    
    for(i = 1; i < size; i++) 
        xor2 = xor2 ^ arr[i]; 
      
    
    set_bit_no = xor2 & ~(xor2-1); 
      
    
    for(i = 0; i < size; i++) 
    { 
        
        if(arr[i] & set_bit_no) 
        x = x ^ arr[i]; 
      
        
        else
        y = y ^ arr[i]; 
    } 
  
    cout << "The two ODD elements are " << x << " & " << y; 
} 

bool hasArrayTwoCandidates(int A[], int arr_size,
                           int sum)
{
    int l, r;
    sort(A, A + arr_size);
    l = 0;
    r = arr_size - 1;
    while (l < r) {
        if (A[l] + A[r] == sum)
            return 1;
        else if (A[l] + A[r] < sum)
            l++;
        else 
            r--;
    }
    return 0;
}
 
  
  

int main()
{
    int arr1[] = { 1, 2, 4, 5, 6 };
    int arr2[] = { 2, 3, 5, 7 };
  
    int m = sizeof(arr1) / sizeof(arr1[0]);
    int n = sizeof(arr2) / sizeof(arr2[0]);
  
   
    printUnion(arr1, arr2, m, n);

    int arr[] = { 2, 3, 5, 4, 5, 2,
                      4, 3, 5, 2, 4, 4, 2 };
         int p = sizeof(arr) / sizeof(arr[0]);             

     cout << getOddOccurrence(arr, p);

     int miss = getMissingNo(arr, p);
    cout << miss;

    int *x = new int[(sizeof(int))];
    int *y = new int[(sizeof(int))];
    get2NonRepeatingNos(arr, p, x, y);
    cout<<"The non-repeating elements are "<<*x<<" and "<<*y;

    printTwoOdd(arr, p); 
    
    int A[] = { 1, 4, 45, 6, 10, -8 };
    int r = 16;
    int arr_size = sizeof(A) / sizeof(A[0]);
 
    // Function calling
    if (hasArrayTwoCandidates(A, arr_size, r))
        cout << "Array has two elements"
                " with given sum";
    else
        cout << "Array doesn't have two"
                " elements with given sum";
 
  
    return 0;
}