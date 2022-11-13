#include <iostream>
using namespace std;
class Stack
{
private:
	int size;
	int top;
	int *arr;
public:
	Stack(int s)
	{
		size = s;
		top = -1;
		arr = new int[s];
	}
	bool isfull()
	{
		if (top == (size - 1))
		{
			return true;
		}
		else
		return false;
	}
	bool isEmpty()
	{
		if (top == -1)
		{
			return true;
		}
		else
			return false;
		
	}
	void push(int d)
	{
		if (!isfull())
		{
			++top;
			arr[top] = d;
		}
		else
		{
			cout << "Stack is Full" << endl;
		}
	}
	int pop()
	{
		if (!isEmpty())
		{
			int temp = arr[top];
		    top--;
			return temp;
		}
		else
			return 0;
	}
	int gettop()
	{
		return arr[top];
	}
};
int main()
{
	Stack s(5);
	for (int i = 0; i < 5; i++)
	{
		s.push(i);
	}
	//cout << s.gettop() << endl;
	//cout << s.pop() << endl;
	//cout << s.gettop() << endl;
	//cout << s.pop() << endl;
	//cout << s.gettop() << endl;
	//cout << s.pop() << endl;
	for (int i = 5; i >= 1; i--)
	{
		cout << s.gettop() << endl;
		cout << s.pop() << endl;
	}
	system("pause");
	return 0;
}
