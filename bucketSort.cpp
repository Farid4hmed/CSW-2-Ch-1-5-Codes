//Bucket Sort
#include<bits/stdc++.h> 
using namespace std; 

void bucketSort(int arr[], int n, int k) 
{ 
    int maxx=arr[0];
    for(int i=1;i<n;i++)maxx=max(maxx,arr[i]);      //Find Max Value
        
    maxx++;     
    vector<int> bkt[k]; 
  
    for (int i = 0; i < n; i++) {           //Fill Bucket
        int bi = (k * arr[i])/maxx; 
        bkt[bi].push_back(arr[i]); 
    } 
  
    for (int i = 0; i < k; i++)           //Sort Bucket
        sort(bkt[i].begin(), bkt[i].end()); 
   
    int index = 0; 
    for (int i = 0; i < k; i++)            //Join Bucket
        for (int j = 0; j < bkt[i].size(); j++) 
            arr[index++] = bkt[i][j]; 
} 
 
 

int main() 
{ 
   int n, k;
   cin >> n >> k;
   int arr[n];
   for(int i=0; i<n; i++)cin >> arr[i];            //input

    bucketSort(arr, n, k);                         //Sorting


    for(int i = 0; i < n; i++)cout << arr[i] << " ";       //output
        cout << endl;
        
    return 0; 
} 