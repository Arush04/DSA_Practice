#include <bits/stdc++.h>
#include "BSTNode.cpp"
using namespace std;


// Iterative Approach
vector<int> inorderTrav(Node* root) {
	vector<int> ans;
	stack<Node*> s;
	while(true) {
		if (root != NULL) {
			s.push(root);
			root = root->left;
		} else {
			if (s.empty()) break;
			root = s.top();
			ans.push_back(root->data);
			s.pop();
			root = root->right;
		}
	}
	return ans;
}

// Recursive Approach
void inorderTravRec(Node* root, vector<int> &ans) {
	if (root == NULL) return;
	inorderTravRec(root->left, ans);
	ans.push_back(root->data);
	inorderTravRec(root->right, ans);
}

int main() {
	struct Node * root = newNode(1);
	root -> left = newNode(2);
	root -> right = newNode(3);
	root -> left -> left = newNode(4);
	root -> left -> right = newNode(5);
	root -> left -> right -> left = newNode(8);
	root -> right -> left = newNode(6);
	root -> right -> right = newNode(7);
	root -> right -> right -> left = newNode(9);
	root -> right -> right -> right = newNode(10);
	vector<int> ans; 
	inorderTravRec(root, ans);
	for (int i=0; i<ans.size(); i++) {
		cout << ans[i] << " ";
	}
	cout << endl;
}

