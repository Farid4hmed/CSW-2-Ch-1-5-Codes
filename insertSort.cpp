//Insertion Sort
#include <bits/stdc++.h>
#define lli long long int 
using namespace std;

const int N = 0;

void insertionSort(int arr[], int n){

	int j;
	for(int i=1; i<n; i++){
		
		j = i-1;
		
		if(arr[i]<arr[i-1]){
			swap(arr[i], arr[i-1]);
			
			while((j-1)>=0 && arr[j]<arr[j-1]){
				swap(arr[j], arr[j-1]);
				j--;
			}
		}
	}
}

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i=0; i<n; i++)cin >> arr[i];

	insertionSort(arr, n);

	for(int i=0; i<n; i++)cout << arr[i] << " ";
	cout << '\n';
	return 0;
}