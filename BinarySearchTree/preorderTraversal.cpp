#include <bits/stdc++.h>
#include "BSTNode.cpp"
using namespace std;

// Iterative Approach
vector<int> preOrder(Node* root) {
    vector<int> ans;
    stack<Node*> s;
    if (root == NULL) return ans;
    s.push(root);

    while(!s.empty()) {
        Node* topNode = s.top();
        ans.push_back(topNode->data);
        s.pop();
        if (topNode->right != NULL)
            s.push(topNode->right);
        if (topNode->left != NULL)
            s.push(topNode->left);
    }
    return ans;
}

// Recusrsive Approach
void preOrderRec(Node* root, vector<int> &ans) {
	if (root == NULL)
		return;
	ans.push_back(root->data);
	preOrderRec(root->left, ans);
	preOrderRec(root->right, ans);
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
	vector<int> ans = preOrder(root);
    for (int i=0; i<ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}

