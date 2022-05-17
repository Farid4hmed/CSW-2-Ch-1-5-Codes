//Radix Sort
#include<bits/stdc++.h> 
using namespace std; 

void countingSort(int arr[], int n, int exp) 
{ 
    int ans[n];  
    int count[10] = {0}; 
    for (int i = 0; i < n; i++) 
        count[(arr[i] / exp) % 10]++; 
  
    for (int i = 1; i < 10; i++) 
        count[i] += count[i - 1]; 
  
    for (int i = n - 1; i >= 0; i--) { 
        ans[count[(arr[i] / exp) % 10] - 1] = arr[i]; 
        count[(arr[i] / exp) % 10]--; 
    } 
  
    for (int i = 0; i < n; i++) 
        arr[i] = ans[i]; 
}  
 
void radixsort(int arr[], int n) 
{ 
    int max = arr[0]; 
    for (int i = 1; i < n; i++)if(arr[i] > max)max = arr[i]; 
  
    for (int exp = 1; max / exp > 0; exp *= 10) 
        countingSort(arr, n, exp); 
} 

int main() 
{ 
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)cin >> arr[i];
    
    radixsort(arr, n); 
   
    for(int i = 0; i < n; i++)cout << arr[i] << " ";
    cout << endl;
    return 0; 
} 