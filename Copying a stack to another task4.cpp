#include <iostream>
using namespace std;
#define stack_size 5
class Stack {
public:
	int top = -1;
	int arr[stack_size];
	//Stack();
	//Stack(int size);
	void push(int);
	int pop();
	bool isEmpty();
	bool isFull();
	int getTop();
};

void Stack::push(int val) {
	if (top >= stack_size) {
		cout << "Stack is full already!" << endl;
	}
	else {
		arr[++top] = val;
	}
}
int Stack::pop() {
	int el = 0;
	if (top < 0) {
		cout << "no elements to remove!" << endl;
	}
	else {
		el = arr[top--];
	}
	return el;
}
bool Stack::isEmpty() {
	if (top < 0)
		return true;
	else
		return false;
}

bool Stack::isFull() {
	if (top == 4)
		return true;
	else
		return false;
}
int Stack::getTop() {
	return arr[top];
}
int main() {
	Stack st, st2, st3;
	st.push(20);
	st.push(10);
	st2.push(st.pop());
	st2.push(st.getTop());
	st3.push(st2.pop());
	st3.push(st2.getTop());
	cout << "Copied to second stack: ";
	cout << st3.pop();
	cout << st3.getTop();
	system("pause");
	return 0;

}
