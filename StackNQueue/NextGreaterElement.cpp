#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int> &nums) {
	int n = nums.size();
	stack<int> st;
	vector<int> ans(n, -1);
	for (int i=2*n-1; i>=0; i--) {
		while (!st.empty() && st.top() <= nums[i%n])
			st.pop();
		if (i<n) {
			if (!st.empty()) ans[i] = st.top();
		}
		st.push(nums[i%n]);
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
	vector<int> ans = nextGreaterElement(arr);
	for (int i=0; i<n; i++) {
		cout << ans[i] << " ";
	}
	cout << endl;
}

