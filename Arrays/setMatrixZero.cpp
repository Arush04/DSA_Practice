#include <bits/stdc++.h>
using namespace std;

void setMatrix(vector<vector<int>> &arr) {
	int n = arr.size();
	int m = arr[0].size();
	int row[n] = {0};
	int col[m] = {0};
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			if (arr[i][j] == 0) {
				row[i] = 1;
				col[j] = 1;
			}
		}
	}
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			if (row[i] || col[j]) {
				arr[i][j] = 0;
			}
		}
	}
}

int main() {
	int n,m,a;
	cin >> n >> m;
	vector<vector<int>> arr;
	for (int i=0; i<n; i++) {
		vector<int> t;
		for (int j=0; j<m; j++) {
			cin >> a;
			t.push_back(a);
		}
		arr.push_back(t);
	}
	setMatrix(arr);
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

