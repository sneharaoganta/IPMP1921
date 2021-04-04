#include <bits/stdc++.h>
#include <string.h>
using namespace std;

void bubbleSort(int array[], int size) {

 
  for (int step = 0; step < size - 1; ++step) {
    for (int i = 0; i < size - step - 1; ++i) {
       if (array[i] > array[i + 1]) {
        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
      }
    }
  }
}

void bubbleSortOptimized(int array[], int size) {
  for (int step = 0; step < size - 1; ++step) {
    
    int swapped = 0;
    for (int i = 0; i < size - step - 1; ++i) {
      
      if (array[i] > array[i + 1]) {

        int temp = array[i];
        array[i] = array[i + 1];
        array[i + 1] = temp;
        swapped = 1;
      }
    }

    
    if (swapped == 0)
      break;
  }
}

// function to swap the the position of two elements
void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void selectionSort(int array[], int size) {
  for (int step = 0; step < size - 1; step++) {
    int min_idx = step;
    for (int i = step + 1; i < size; i++) {

      
      if (array[i] < array[min_idx])
        min_idx = i;
    }

   
    swap(&array[min_idx], &array[step]);
  }
}

void insertionSort(int array[], int size) {
  for (int step = 1; step < size; step++) {
    int key = array[step];
    int j = step - 1;

    while (key < array[j] && j >= 0) {
      array[j + 1] = array[j];
      --j;
    }
    array[j + 1] = key;
  }
}

void merge(int array[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;
 
    int P1[n1], P2[n2];
 
    for (int i = 0; i < n1; i++)
        P1[i] = array[l + i];
    for (int j = 0; j < n2; j++)
        P2[j] = array[m + 1 + j];
 
    int i = 0;
    int j = 0;
    int k = l;
 
    while (i < n1 && j < n2) {
        if (P1[i] <= P2[j]) {
            array[k] = P1[i];
            i++;
        }
        else {
            array[k] = P2[j];
            j++;
        }
        k++;
    }
 
    
    while (i < n1) {
        array[k] = P1[i];
        i++;
        k++;
    }
 
    
    while (j < n2) {
        array[k] = P2[j];
        j++;
        k++;
    }
}
 

void mergeSort(int array[],int l,int r){
    if(l>=r){
        return;
    }
    int m =l+ (r-l)/2;
    mergeSort(array,l,m);
    mergeSort(array,m+1,r);
    merge(array,l,m,r);
}

int partition (int array[], int low, int high)
{   int pivot = array[high]; 
    int i = (low - 1); 
 
    for (int j = low; j <= high - 1; j++)
    {
        if (array[j] < pivot)
        {   i++; 
            swap(&array[i], &array[j]);
        }
    }
    swap(&array[i + 1], &array[high]);
    return (i + 1);
}
 
void quickSort(int array[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(array, low, high);
 
        quickSort(array, low, pi - 1);
        quickSort(array, pi + 1, high);
    }
}

void countSort(vector<int>& array)
{
    int max = *max_element(array.begin(), array.end());
    int min = *min_element(array.begin(), array.end());
    int range = max - min + 1;
 
    vector<int> count(range), output(array.size());
    for (int i = 0; i < array.size(); i++)
        count[array[i] - min]++;
 
    for (int i = 1; i < count.size(); i++)
        count[i] += count[i - 1];
 
    for (int i = array.size() - 1; i >= 0; i--) {
        output[count[array[i] - min] - 1] = array[i];
        count[array[i] - min]--;
    }
 
    for (int i = 0; i < array.size(); i++)
        array[i] = output[i];
}

void heapify(int array[], int n, int i)
{
    int largest = i; 
    int l = 2 * i + 1; 
    int r = 2 * i + 2; 
 
    if (l < n && array[l] > array[largest])
        largest = l;
 
    if (r < n && array[r] > array[largest])
        largest = r;
 
    if (largest != i) {
        swap(array[i], array[largest]);
        heapify(array, n, largest);
    }
}
 
void heapSort(int array[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(array, n, i);
 
    for (int i = n - 1; i > 0; i--) {
        
        swap(array[0], array[i]);
        heapify(array, i, 0);
    }
}

void printVector(vector<int>& array)
{
    for (int i = 0; i < array.size(); i++)
        cout << array[i] << " ";
    cout << "\n";
}

void printArray(int array[], int size) {
  for (int i = 0; i < size; ++i) {
    cout << "  " << array[i];
  }
  cout << "\n";
}

int main(){
    int a[11] = {10,11,1,2,4,212,0,5,31,90,57};
    int n = sizeof(a)/sizeof(a[0]);
    vector<int> b = {10,11,1,2,4,212,0,5,31,90,57};
    cout<<"bubble sort\n";
    bubbleSort(a,n);
    printArray(a,n);
    cout<<"bubble optimized sort\n";
    bubbleSortOptimized(a,n);
    printArray(a,n);
    cout<<"selection sort\n";
    selectionSort(a,n);
    printArray(a,n);
    cout<<"insertion sort\n";
    insertionSort(a,n);
    printArray(a,n);
    cout<<"merge sort\n";
    mergeSort(a,0,n-1);
    printArray(a,n);
    cout<<"quick sort\n";
    quickSort(a,0,n-1);
    printArray(a,n);
    cout<<"heap sort\n";
    heapSort(a,n);
    printArray(a,n);
    cout<<"counting sort\n";
    countSort(b);
    printVector(b);
}
