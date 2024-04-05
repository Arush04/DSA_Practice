#include <bits/stdc++.h>
using namespace std;

vector<int> arrayRotate(vector<int> &arr, int d) {
	vector<int> ans;
	for (int i=d; i<arr.size(); i++) {
		ans.push_back(arr[i]);
	}
	for (int i=0; i<d; i++) {
		ans.push_back(arr[i]);
	}
	return ans;
}

int main() {
	int n,a;
	cin >> n;
	vector<int> arr;
	for (int i=0; i<n; i++) {
		cin >> a;
		arr.push_back(a);
	}
	int d; cin >> d;
	vector<int> ans = arrayRotate(arr, d);
	for (int i=0; i<ans.size(); i++) {
		cout << ans[i] << " ";
	}
	cout << endl;
}

