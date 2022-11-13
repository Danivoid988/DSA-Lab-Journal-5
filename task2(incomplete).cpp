#include <iostream>>
using namespace std;
class Node
{
public:
	int data;
	int size;
	int count;
	Node* next;
	
	Node()
	{
		data = 0;
		size = 0;
		count = 0;
		next = NULL;
	}
	Node(int d)
	{
		this->size = NULL;
		this->count = NULL;
		this->data = d;
		this->next = NULL;
	}
};
class Stack
{
private:
	Node * top;
	
public:
	Stack()
	{
		top = NULL;
	}
	Stack(int size)
	{
		
		top->size = size;
	}
	bool isfull()
	{
		int count;
		if (top->size == count)
		{
			return true;
		}
		else
		{
			count++;
		}
	}
	bool isEmpty()
	{
		if (top == NULL)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	void Push(int val)
	{
		Node *newnode = new Node(val);
		if (top == NULL)
		{
			top = newnode;
			cout << "Node Pushed Successfully" << endl;
		}
		Node * temp = top;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;
	}

	void Pop()
	{
		Node * temp = NULL;
		if (isEmpty())
		{
			cout << "Stack underflow" << endl;
			return;
		}
		else
		{
			temp = top;
			top = top->next;
			return;
		}
		
	}
};
