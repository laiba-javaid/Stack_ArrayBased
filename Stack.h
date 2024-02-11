#pragma once
class Stack
{
	int topMost;
	unsigned int size;
	unsigned int* A;
public:
	Stack();
	void push(int);
	void pop();
	bool IsEmpty();
	bool IsFull();
	int Top();
	~Stack();

};

