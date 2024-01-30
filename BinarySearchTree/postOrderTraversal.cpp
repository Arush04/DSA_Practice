#include <bits/stdc++.h>
#include "BSTNode.cpp"
using namespace std;

// Iterative Approach
vector<int> postorderTrav(Node* root) {
	vector<int> ans;
	if (root == NULL) return ans;
	stack<Node*> s;
	while(root != NULL || !s.empty()) {
		if (root != NULL) {
			s.push(root);
			root = root->left;
		} else {
			Node* t = s.top()->right;
			if (t == NULL) {
				t = s.top();
				s.pop();
				ans.push_back(t->data);
				while(!s.empty() and t == s.top() ->right) {
					t = s.top();
					s.pop();
					ans.push_back(t->data);
				}
			} else root = t;
		}
	}
	return ans;
}

// Recursive Approach
void postOrderRec(Node* root, vector<int> &ans) {
	if (root == NULL)
		return;
	postOrderRec(root->left, ans);
	postOrderRec(root->right, ans);
	ans.push_back(root->data);
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

  vector < int > postOrder;
  postOrder = postorderTrav(root);

  for (int i = 0; i < postOrder.size(); i++) {
    cout << postOrder[i] << " ";
  }
	cout << endl;
}

