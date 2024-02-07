#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &arr, int low, int mid, int high) {
	vector<int> t;
	int l = low;
	int j = mid+1;
	while(l<=mid and j<=high) {
		if (arr[l] <= arr[j]) {
			t.push_back(arr[l]);
			l++;
		}
		else{
			t.push_back(arr[j]);
			j++;
		}
	}
	while(l<=mid) {
		t.push_back(arr[l]);
		l++;
	}
	while(j<=high) {
		t.push_back(arr[j]);
		j++;
	}
	for (int i=low; i<=high; i++) {
		arr[i] = t[i-low];
	}
}

void mergeSort(vector<int> &arr, int low, int high) {
	if (low >= high) return;
	int mid = low+(high-low)/2;
	mergeSort(arr,low, mid);
	mergeSort(arr,mid+1, high);
	merge(arr,low, mid, high);
}

int main() {
	int n,a;
	cin >> n;
	vector<int> arr;
	for (int i=0; i<n; i++) {
		cin >> a;
		arr.push_back(a);
	}
	mergeSort(arr,0,n-1);
	for (int i=0; i<n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

