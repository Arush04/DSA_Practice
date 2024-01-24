#include <bits/stdc++.h>
using namespace std;

class LRUCache {
	public:
		class Node {
			public:
				int key;
				int val;
				Node* next;
				Node* prev;
				Node(int _key, int _val) {
					key = _key;
					val = _val;
				}
		};

		Node* head = new Node(-1,-1);
		Node* tail = new Node(-1,-1);

		int cap;
		unordered_map<int, Node*> mp; // we are using unordered map because we want to execute the function in O(1) time.
		LRUCache(int capacity) {
			cap = capacity;
			head->next = tail;
			head->prev = head;
		}

		void addNode(Node* newNode) {
			Node* t = head->next;
			newNode->next = t;
			newNode->prev = head;
			head->next = newNode;
			t->prev = newNode;
		}

		void deleteNode(Node* delNode) {
			Node* delPrev = delNode->prev;
			Node* delNext = delNode->next;
			delPrev->next = delNext;
			delNext->prev = delPrev;
		}

		int get(int key_) {
			if (mp.find(key_) != mp.end()) {
				Node* resNode = mp[key_];
				int res = resNode->val;
				mp.erase(key_);
				deleteNode(resNode);
				addNode(resNode);
				mp[key_] = head->next;
				return res;
			}
			return -1;
		}

		void put(int key_, int value) {
			if (mp.find(key_) != mp.end()) {
				Node* existingNode = mp[key_];
				mp.erase(key_);
				deleteNode(existingNode);
			}
			if (mp.size() == cap) {
				mp.erase(tail->prev->key);
				deleteNode(tail->prev);
			}
			addNode(new Node(key_, value));
			mp[key_] = head->next;
		}
};

int main() {
	LRUCache l;
	l.LRUCache(2);
	l.addNode(1,1);
	l.addNode(2,2);
	l.get(1);
	cout << endl;
}

