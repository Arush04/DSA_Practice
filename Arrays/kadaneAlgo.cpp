#include <bits/stdc++.h>
using namespace std;

int maxSum(vector<int> &arr) {
	int maxS = INT_MIN;
	int sum = 0;
	for (int i=0; i<arr.size(); i++) {
		sum += arr[i];
		if (sum > maxS)
			maxS = sum;
		if (sum < 0)
			sum = 0;
	}
	return sum;
}

int main() {
	int n,a;
	cin >> n;
	vector<int> arr;
	for (int i=0; i<n; i++) {
		cin >> a;
		arr.push_back(a);
	}
	cout << maxSum(arr);
	cout << endl;
}

