#include <bits/stdc++.h>
using namespace std;

#define n 1000

class Queue {
	int* arr;
	int front;
	int back;
	
	public:
	Queue() {
		arr = new int[n];
		front = -1;
		back = -1;
	}

	void push(int x) {
		if (back == n-1) {
			// Queue is full 
			return;
		}
		back++;
		arr[back] = x;
		if (front == -1) {
			// if first element is being added in the queue.
			front++;
		}
	}

	int pop() {
		if (front == -1 || front > back) {
			// condition to check is Queue is empty;
			return -1;
		}
		int x = arr[front];
		front++;
		return x;
	}

	int peek() {
		if (front == -1 || front > back)
			return -1;
		return arr[front];
	}

};

int main() {
	Queue q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);
	q.push(5);
	cout << "Top element of Queue is:\n" << q.peek() << endl;
	cout << "Popped element is:\n" << q.pop() << endl;
	cout << "Top element of Queue is:\n" << q.peek() << endl;
	cout << endl;
}

