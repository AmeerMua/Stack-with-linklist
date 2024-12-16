#include "Stack.h"
#include<iostream>
using namespace std;

Stack::Stack()
	 {
	 //yeh top head kiy tharah work kare ga
	 	top = NULL;
	 }
bool Stack::isEmpty()
	 {
	 	if( top==NULL)
	 	{
	 		return true;
	 	}
	 	else
	 	{
	 		return false;
	 	}
	}
	 void Stack:: push(int value)
	 {
	 	if(isEmpty())
	 	{
	 		Node *temp=new Node(value);
	 		top= temp;
	 	}
	 	else
	 	{
	 	Node *temp= new Node(value);
	 	temp-> setNext(top);
	 	top = temp;
	 	}

	 }
	 void Stack :: pop()
	 {
	 	Node* temp =top;
	 	top= top->getNext();
	 	delete temp;
	 }
	 
	 
//	 int Stack::getTop()
//	 {
//
//	 }
	 void Stack::print()
	 {
	 	Node* temp=top;
	 	while(temp!= NULL)
	 	{
	 		cout<<temp->getData()<<endl;
	 		temp= temp->getNext();
	 	}
	 }