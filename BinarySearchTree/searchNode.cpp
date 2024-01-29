#include <bits/stdc++.h>
#include "BSTNode.cpp"
using namespace std;

// Searching if value is present in BST

bool Search(Node* root, int target) {
	if (root == NULL) return false;
	else if (root->data == target) return true;
	else if (target<=root->data) return Search(root->left, target);
	else return Search(root->right, target);
}

int main() {
	Node* root = NULL; // created an empty tree
	root = Insert(root, 15);
	root = Insert(root, 10);
	root = Insert(root, 20);
	root = Insert(root, 8);
	root = Insert(root, 25);
	int target; cin >> target;
	Search(root, target) ? cout << "True" : cout << "False";
	cout << endl;
}

