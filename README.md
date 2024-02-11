### README

This project implements a stack data structure and provides various functionalities such as pushing elements onto the stack, popping elements from the stack, checking if the stack is empty or full, getting the topmost element of the stack, converting decimal numbers to binary, octal, and hexadecimal, and evaluating postfix expressions.

#### Stack Class

- The `Stack` class represents a stack data structure.
- It includes methods for:
  - `push(int value)`: Pushes an element onto the stack.
  - `pop()`: Pops the topmost element from the stack.
  - `IsEmpty()`: Checks if the stack is empty.
  - `IsFull()`: Checks if the stack is full.
  - `Top()`: Returns the topmost element of the stack.
- The constructor initializes the stack with a user-defined size.
- The destructor deallocates the memory allocated for the stack.

#### Conversion Functions

- `convertDecimalToBinary()`: Converts a decimal number to binary using the stack.
- `convertDecimalToOctal()`: Converts a decimal number to octal using the stack.
- `convertDecimalToHexadecimal()`: Converts a decimal number to hexadecimal using the stack.

#### Expression Evaluation

- `EvaluatePostfixExpression()`: Evaluates a postfix expression using the stack.

#### Main Function

- The `main()` function provides a menu-driven interface for interacting with the stack and performing various operations such as pushing, popping, converting numbers, and evaluating expressions.
- It repeatedly prompts the user for choices until the user chooses to exit.

#### Usage

- Run the program and follow the on-screen instructions to perform desired operations on the stack.
- You can input decimal numbers to convert to binary, octal, and hexadecimal, or input postfix expressions to evaluate.

#### Note

- Ensure to compile and run the program in an environment that supports C++.
- Make sure to handle input validation to prevent unexpected behavior.
- Feel free to extend the functionalities or modify the code as per your requirements.
