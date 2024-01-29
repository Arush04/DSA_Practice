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


void preOrderRec(Node* root, vector<int> &ans) {
	if (root == NULL)
		return;
	ans.push_back(root->data);
	preOrderRec(root->left, ans);
	preOrderRec(root->right, ans);
}

int main() {
    Node* root = NULL;
    root = Insert(root, 1);
    root = Insert(root, 2);
    root = Insert(root, 3);
    root = Insert(root, 4);
    root = Insert(root, 5);
    root = Insert(root, 6);
    root = Insert(root, 7);
    root = Insert(root, 8);
    root = Insert(root, 9);
    root = Insert(root, 10);
	vector<int> ans;
	preOrderRec(root,ans);
    for (int i=0; i<ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
}

