//Quick Sort
#include <bits/stdc++.h>
#define lli long long int 
using namespace std;

const int N = 0;

int partition(int arr[], int l, int r){
	int pivot = arr[r];
	int j = l-1;
	for(int i=l; i<r; i++){
		if(arr[i] <= pivot){
			swap(arr[++j], arr[i]);
		}
	}

	swap(arr[j+1], arr[r]);
	return (j+1);
}



void quickSort(int arr[], int l, int r){
	if(l<r){
		int p = partition(arr, l, r);
		quickSort(arr, l, p-1);
		quickSort(arr, p+1, r);
	}
	
}

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i=0; i<n; i++)cin >> arr[i];

	quickSort(arr, 0, n-1);

	for(int i=0; i<n; i++)cout << arr[i] << " ";
	cout << '\n';
	return 0;
}