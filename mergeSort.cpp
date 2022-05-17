//Merge Sort
#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int m, int r){
	int lsize = m - l + 1;
	int rsize = r - m;
	int left[lsize], right[rsize];
	for(int i=0; i<lsize; i++)left[i] = arr[i+l];
	for(int i=0; i<rsize; i++)right[i] = arr[m + 1 + i];
	int i=0, j=0;
	int idx = l;
	while(i<lsize && j<rsize){
		if(left[i]<=right[j])arr[idx++] = left[i++];
		else arr[idx++] = right[j++];
	}
	while(i<lsize){
		arr[idx++] = left[i++];
	}
	while(j<rsize){
		arr[idx++] = right[j++];
	}

}


void mergeSort(int arr[], int l, int r){
	int m = l + (r-l)/2;
	if(l<r){
		mergeSort(arr, l, m);
		mergeSort(arr, m+1, r);
		merge(arr, l, m, r);
	}
}

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i=0; i<n; i++)cin >> arr[i];

	mergeSort(arr, 0, n-1);

	for(int i=0; i<n; i++)cout << arr[i] << " ";
	cout << '\n';
	return 0;
}