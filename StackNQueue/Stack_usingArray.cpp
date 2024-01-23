#include <bits/stdc++.h>
using namespace std;

class Stack {
	int size;
	int* arr;
	int top;
	public:
	Stack() {
		top = -1;
		size = 1000;
		arr = new int[size];
	}

	void push(int x) {
		top++;
		arr[top] = x;
	}

	int pop() { // we will be returning the popped element as well.
		int x = arr[top];
		top--;
		return x;
	}

	int Top() {
		return arr[top];
	}

	int Size() {
		return top+1;
	}
};

int main() {
	Stack s;
	int i;
	// terminate the loop when input is equal to -1.
	while(true) {
		cin >> i;
		if (i == -1)
			break;
		s.push(i);
	}
	cout << "Top element of Stack is:\n" << s.Top() << endl;
	cout << "Size of Stack is:\n" << s.Size() << endl;
	cout << "Popped element is:\n" << s.pop() << endl;
	cout << "Size of Stack is:\n" << s.Size() << endl;
	cout << endl;
}

