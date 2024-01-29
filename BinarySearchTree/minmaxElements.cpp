#include <bits/stdc++.h>
#include "BSTNode.cpp"
using namespace std;

// Iterative approach
int findMinItr(Node* root) {
	if (root == NULL) {
		return -1;
	}
	while(root->left != NULL) {
		root = root->left;
	}
	return root->data;
}

int findMaxItr(Node* root) {
	if (root == NULL)
		return -1;
	while(root->right != NULL) {
		root = root->right;
	}
	return root->data;
}

// Recursive approach

int findMinRec(Node* root) {
	if (root == NULL)
		return -1;
	else if (root->left == NULL)
		return root->data;
	return findMinRec(root->left);
}

int main() {
	Node* root = NULL;
	root = Insert(root, 15);
	root = Insert(root, 20);
	root = Insert(root, 10);
	root = Insert(root, 25);
	root = Insert(root, 8);
	root = Insert(root, 7);
	//cout << findMinItr(root);
	//cout << findMaxItr(root);
	cout << findMinRec(root);
	cout << endl;
}

