#include <bits/stdc++.h>
#include "BSTNode.cpp"
using namespace std;

int heightBST (Node* root) {
	if (root == NULL)
		return -1;
	int leftHeight = heightBST(root->left);
	int rightHeight = heightBST(root->right);
	return max(rightHeight, leftHeight)+1;
}

int main() {
	Node* root = NULL;
	root = Insert(root, 15);
	root = Insert(root, 10);
	root = Insert(root, 25);
	root = Insert(root, 8);
	root = Insert(root, 20);
	root = Insert(root, 6);
	root = Insert(root, 5);
	cout << heightBST(root);
	cout << endl;
}

