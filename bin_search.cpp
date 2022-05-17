//Binary Search
#include <bits/stdc++.h>
#define lli long long int 
using namespace std;

const int N = 0;

int binarySearch(int arr[], int n, int x){
	int low = 0;
	int high = n-1;
	while(low<=high){
		int mid = low + (high - low)/2;
		if(arr[mid] == x)return mid;
		else if(arr[mid] < x)low = mid + 1;
		else high = mid - 1;
	}
	return -1;
}

int main(){
	int n;
	int x;
	cin >> n >> x;
	int arr[n];
	for(int i=0; i<n; i++)cin >> arr[i];
	cout << binarySearch(arr, n, x) << '\n';
	return 0;
}