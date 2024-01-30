#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	Node* left;
	Node* right;
};

Node* newNode (int data) {
	Node* newN = new Node();
	newN->data = data;
	newN->left = NULL;
	newN->right = NULL;

	return newN;
}
