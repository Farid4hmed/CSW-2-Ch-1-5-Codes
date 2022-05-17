//Bubble Sort
#include <bits/stdc++.h>
#define lli long long int 
using namespace std;

const int N = 0;

void bubbleSort(int arr[], int n){
	for(int i=0; i<n-1; i++){
		for(int j=1; j<n; j++){
			if(arr[j] < arr[j-1])swap(arr[j], arr[j-1]);
		}
	}
	
}

int main(){
	int n;
	cin >> n;
	int arr[n];
	for(int i=0; i<n; i++)cin >> arr[i];

	bubbleSort(arr, n);

	for(int i=0; i<n; i++){
		cout << arr[i] << " ";
	}
	cout << '\n';

	return 0;
}