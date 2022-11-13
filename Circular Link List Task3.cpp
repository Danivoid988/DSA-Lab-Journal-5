#include <iostream>
using namespace std;
class Node
{
public:
	int data;
	Node *next;

	Node(int a)
	{
		this->data = a;
		this->next = NULL;
	}
};
class List
{
private:
	Node *Head;
public:
	List()
	{
		Head = NULL;
	}

	void insert(int a)
	{
		Node *newnode = new Node(a);
		if (Head == NULL)
		{
			Head = newnode;
			return;
		}
		else
		{
			Node *Temp = Head;
			while (Temp->next != NULL)
			{
				Temp = Temp->next;
			}
			Temp->next = newnode;
		}
	}

	void display()
	{
		Node *Temp = Head;
		while (Temp != NULL)
		{
			cout << "Link List->" << Temp->data << endl;
			Temp = Temp->next;
		}
	}

	void circular()
	{
		Node *Temp = Head;
		while (Head->next != NULL)
		{
			Head = Head->next;
		}
		Head->next = Temp;
	}

	void printcirular()
	{
		if (Head == NULL)
		{
			cout << "INVALID INPUT" << endl;
		}
		Node *Temp = Head;
		do
		{
			cout << "Circular Link List->" << Temp->data << endl;
			Temp = Temp->next;
		} while (Temp != Head);
	}
};
int main()
{
	Node *head = NULL;
	List ob1;
	ob1.insert(10);
	ob1.insert(20);
	ob1.insert(30);
	ob1.insert(40);
	
	cout << endl;
	ob1.circular();
	ob1.printcirular();
	system("pause");
	return 0;
}
