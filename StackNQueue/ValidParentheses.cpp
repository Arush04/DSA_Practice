#include <bits/stdc++.h>
using namespace std;

bool validParentheses(string s) {
	stack<char> st;
	for (int i=0; i<s.length(); i++) {
		if (s[i] == '(' or s[i] == '{' or s[i] == '[') {
			st.push(s[i]);
		}
		else {
			if (st.size() == 0) return false;
			char c = st.top();
			st.pop();
			if ((c=='[' and s[i]==']') or (c=='{' and s[i]=='}') or (c=='(' and s[i]==')'))
				continue;
			else return false;
		}
	}
	return st.empty();
}

int main() {
	string s; cin >> s;
	validParentheses(s) ? cout << "True" : cout << "False";
	cout << endl;
}

