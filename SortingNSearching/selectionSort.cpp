#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> &arr) {
	int n = arr.size();
	for (int i=0; i<n-1; i++) {
		int mini = i;
		for (int j=i+1; j<n; j++) {
			if (arr[mini] > arr[j])
				mini = j;
		}
		swap(arr[i], arr[mini]);
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
	selectionSort(arr);
	for (int i=0; i<n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

