#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int> &arr) {
	int n = arr.size();
	for (int i=0; i<n-1; i++) {
		for (int j=0; j<n; j++) {
			if (arr[j] > arr[j+1])
				swap(arr[j], arr[j+1]);
		}
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
	bubbleSort(arr);
	for (int i=0; i<n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

