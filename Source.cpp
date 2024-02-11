#include "Stack.h"
#include<iostream>
#include<string>
using namespace std;

void convertDecimalToBinary()
{
		Stack s;
		int remainder, value;
		cout << "Enter the value which you want to convert to binary:" << endl;
		cin >> value;
		while (value != 0)
		{
			remainder = value % 2;
			value = value / 2;
			s.push(remainder);
		}
		while (!s.IsEmpty())
		{
			cout<<s.Top();
			s.pop();
		}	
}
void convertDecimalToOctal()
{
	Stack s;
	int remainder, value;
	cout << "Enter the value which you want to convert to octal:" << endl;
	cin >> value;
	while (value != 0)
	{
		remainder = value % 8;
		value = value / 8;
		s.push(remainder);
	}
	while (!s.IsEmpty())
	{
		cout << s.Top();
		s.pop();
	}
}
void convertDecimalToHexadecimal()
{
	Stack s;
	int remainder, value;
	cout << "Enter the value which you want to convert to Hexadecimal:" << endl;
	cin >> value;
	while (value != 0)
	{
		remainder = value % 16;
		value = value / 16;
		s.push(remainder);
	}
	while (!s.IsEmpty())
	{
		cout << s.Top();
		s.pop();
	}
}
void  EvaluatePostfixExpression()
{
	Stack s;
	char operation;
	int opr1, opr2, value, result;
	string expression;
	cout << "Enter the Expression: ";
	cin.ignore();
	getline(cin, expression);

	for (int i = 0; i < expression.length(); i++)
	{
		if ((expression[i] >= '0' && expression[i] <= '9')||( expression[i] >= 'A' && expression[i] <= 'Z') || (expression[i] >= 'a' && expression[i] <= 'z'))
		{
			cout << "Operand is: " << expression[i] << endl;
			value = expression[i] - '0';
			s.push(value);
		}
		else
		{
			cout << "Operator is " << expression[i] << endl;
			operation=expression[i];
			opr1 = s.Top();
			s.pop();
			opr2 = s.Top();
			s.pop();

			switch (operation)
			{
			case '+':
				result = opr2 + opr1;
				
				break;
			case '-':
				result = opr2 - opr1;
				
				break;
			case '*':
				result = opr2 * opr1;
				
				break;
			case '/':
				result = opr2 / opr1;
				
				break;
			}
			cout << "Result: " <<result<< endl;
			s.push(result);
		}

	}
	cout << "Result is: " << s.Top() << endl;
	s.pop();
}



int main()
{
	Stack stack;
	unsigned int choice;
	char choice1;
	int value1;
	cout << "1. Push an Item in stack" << endl;
	cout << "2. Remove an Item from stack" << endl;
	cout << "3. Get an Item from stack" << endl;
	cout << "4. Check if Stack is empty"<< endl;
	cout << "5. Check if Stack is full" << endl;
	cout << "6. Convert Decimal to Binary" << endl;
	cout << "7. Convert Decimal to Octal" << endl;
	cout << "8. Convert Decimal to Hexadecimal" << endl;
	cout << "9. Evaluate PostFix Expression" << endl;
	cout << "10. Exit" << endl;
	do 
	{
		cout << "Enter your choice" << endl;
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "Enter the value which you want to insert:";
			cin >> value1;
			stack.push(value1);
			break;
		case 2:
			stack.pop();
			break;
		case 3:
			cout << stack.Top() << endl;
			break;
		case 4:
			if (stack.IsEmpty())
				cout << "Stack is empty!!" << endl;
			else
				cout << "Stack is not empty!!" << endl;
			break;
		case 5:
			if (stack.IsFull())
				cout << "Stack is full!!" << endl;
			else
				cout << "Stack is not full!!" << endl;
			break;
		case 6:
			convertDecimalToBinary();
			break;
		case 7:
			convertDecimalToOctal();
			break;
		case 8:
			convertDecimalToHexadecimal();
		case 9:
			EvaluatePostfixExpression();
		case 10:
			exit(0);
		default:
			cout << "Invalid Choice" << endl;

		}
		cout << "\nDo you again want to enter any choice?(y/n)" << endl;
		cin >> choice1;

	} while (choice1 == 'y');
	
	cout<< "Program terminated!!"<<endl;

	return 0;
}

