#include <iostream>
#include <string>
using namespace std;
class Node
{
public:
	int data;
	Node * next;

	Node(int s)
	{
		data = s;
		this->next = NULL;
	}
};
class List
{
private:
	Node * Head;
public:

	List()
	{
		Head = NULL;
	}

	void insert(int d)
	{
		Node *newnode = new Node(d);

		if (Head == NULL)
		{
			Head = newnode;
			return;
		}

		Node * Temp = Head;
		while (Temp->next != NULL)
		{
			Temp = Temp->next;
		}
		Temp->next= newnode;

	}
	
	void display()
	{
		Node * Temp = Head;
		while (Temp != NULL)
		{
			cout << Temp->data << endl;
			Temp = Temp->next;
		}
	}

	int getLen()
	{
		int len = 0;
	    Node* temp = Head;
		while (temp) {
			len++;
			temp = temp->next;
		}
		return len;
	}
	void printMiddle()
	{

		if (Head) {
			// find length
			int len = getLen();
			class Node* temp = Head;

			// trvaers till we reached half of length
			int midIdx = len / 2;
			while (midIdx--) {
				temp = temp->next;
			}
			// temp will be storing middle element
			cout << "The middle element is [" << temp->data
				<< "]" << endl;
		}
	}
};
int main()
{
	List obj1;
	obj1.insert(10);
	obj1.insert(20);
	obj1.insert(30);
	obj1.insert(40);
	obj1.insert(50);
	obj1.insert(60);
	obj1.insert(70);
	obj1.insert(80);
	obj1.getLen();
	cout << obj1.getLen();
	obj1.printMiddle();
	system("pause");
	return 0;
}
