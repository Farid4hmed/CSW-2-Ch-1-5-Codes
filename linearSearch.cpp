//Linear Search
#include <bits/stdc++.h>
#define lli long long int 
using namespace std;

const int N = 0;

int linearSearch(int arr[], int n, int x){
	for(int i=0; i<n; i++)if(arr[i] == x)return i;
	return -1;
}

int main(){
	int n;
	int x;
	cin >> n >> x;
	int arr[n];
	for(int i=0; i<n; i++)cin >> arr[i];

	cout << linearSearch(arr, n, x) << '\n';

	return 0;
}