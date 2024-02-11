#include "Stack.h"
#include <iostream>
using namespace std;
Stack::Stack()
{
	cout << "Enter the size of the stack: " << endl;
	cin >> size;
	A = new unsigned int[size];
	topMost = -1;
}

bool Stack::IsFull()
{
	if (topMost == size-1)
		return true;
	else
		return false;
}

void Stack::push(int value)
{
	if (IsFull())
		cout << "Sorry!! Stack is full" << endl;
	else
	{
		A[topMost + 1] = value;
		topMost++;
	}
		
}

bool Stack::IsEmpty()
{
	if (topMost == -1)
		return true;
	else
		return false;
}

void Stack::pop()
{
	if (IsEmpty())
		cout << "Stack is empty!!" << endl;
	else
		topMost--;
}

int Stack::Top()
{
	if (IsEmpty())
		cout << "Stack is empty!!" << endl;
	else
		return A[topMost];

}
Stack::~Stack()
{
	delete []A;
}
