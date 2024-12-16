#include <iostream>
using namespace std;
class Node
{
private:
		int data;
		Node *next;

public:
	Node()
	{
		data = 0;
		next = NULL;
	}
	Node (int value)
	{
		data = value;
		next = NULL;

	}
	void setData (int value)
	{
		data= value;
	}
	void setNext (Node *link)
	{
		next =link;
	}
	int getData()
	{
		return data;
	}
	Node* getNext()
	{
		return next;
	}
};