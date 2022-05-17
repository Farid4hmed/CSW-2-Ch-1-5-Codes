//Counting Sort
#include <bits/stdc++.h>
using namespace std; 

void countSort(int arr[], int n, int k) 
{ 
    int count[k];
    for(int i=0; i<k; i++)count[i]=0;
    for(int i=0; i<n; i++)count[arr[i]]++;
        
    for(int i=1; i<k; i++)count[i]=count[i-1]+count[i];
    
    int ans[n];
    for(int i=n-1; i>=0; i--){
        ans[count[arr[i]]-1]=arr[i];
        count[arr[i]]--;
    }
    for(int i=0; i<n; i++)arr[i]=ans[i];
    
} 
  
int main() 
{ 
    int n;
    cin >> n;
    int arr[n];
    int maxele = INT_MIN;
    for(int i=0; i<n; i++){
        cin >> arr[i];
        maxele = max(arr[i], maxele);
    }

    countSort(arr, n, maxele+1);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0; 
} 