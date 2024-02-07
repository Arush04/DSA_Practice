#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &arr, int low, int high) {
	int pivot = arr[low];
	int i = low;
	int j = high;
	while(i<j) {
		while(i<=high and arr[i] <= pivot)
			i++;
		while(j>=low and arr[j] > pivot)
			j--;
		if (i<j)
			swap(arr[i], arr[j]);
	}
	swap(arr[low], arr[j]);
	return j;
}

void quickSort(vector<int> &arr, int low, int high) {
	if (low <= high) {
		int qI = partition(arr, low, high);
		quickSort(arr, low, qI-1);
		quickSort(arr, qI+1, high);
	}
}

int main() {
	int n,a;
	cin >> n;
	vector<int> arr;
	for (int i=0; i<n; i++) {
		cin >> a;
		arr.push_back(a);
	}
	quickSort(arr, 0, n-1);
	for (int i=0; i<n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

