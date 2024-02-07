#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int target) {
	int l=0, r=arr.size()-1;
	while(l<=r) {
		int mid = l+(r-l)/2;
		if (arr[mid] == target) return mid;
		else if (arr[mid] < target) l = mid+1;
		else r = mid-1;
	}
	return -1;
}

int main() {
	int n,a,x;
	cin >> n;
	vector<int> arr;
	for (int i=0; i<n; i++) {
		cin >> a;
		arr.push_back(a);
	}
	cin >> x;
	cout << binarySearch(arr, x);
	cout << endl;
}

