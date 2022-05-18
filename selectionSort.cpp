//Selection Sort
#include <bits/stdc++.h>
using namespace std;

void selectSort(int arr[], int n){
 	int minidx = 0;
 	for(int i=0; i<n-1; i++){
	int currMin = INT_MAX;
	int Idx;
	for(int j=0; j<n; j++){
	if(currMin > arr[j]){
	currMin = arr[j];
	Idx = j;
 	}
	}
	arr[minidx++] = currMin;
	arr[Idx] = INT_MAX;
	}
}



int main(){
int n;
cin >> n;
int arr[n];
for(int i=0; i<n; i++)cin >> arr[i];

selectSort(arr, n);

for(int i=0; i<n; i++)cout << arr[i] << " ";
cout << endl;
return 0;
}
