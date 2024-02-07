#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int> &arr) {
	int n = arr.size();
	for (int i=0; i<n; i++) {
		int curr = arr[i];
		int j = i-1;
		for (; j>=0; j--) {
			if (curr < arr[j])
				arr[j+1] = arr[j];
			else
				break;
		}
		arr[j+1] = curr;
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
	insertionSort(arr);
	for (int i=0; i<n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

