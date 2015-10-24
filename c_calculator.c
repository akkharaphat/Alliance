// Program which performs addition, subtraction, multiplication and subtraction.

#include <iostream>
using namespace std;

// input function
void Input (float &x, float &y);

float a=1.0, b=1.0, result;
char operation;


int main ()
{
	cout << "Program which performs addition, subtraction, multiplication and subtraction. \n\n";
	
	cout << "Please input calculation operation (eg. 1 + 2): \n";
	cin >> a >> operation >> b;
	
	Input (a,b);

	cout << "The answer is: " << result << endl;
	system ("pause");
	return 0;
}


void Input (float &x, float &y)
{
	a = x;
	b = y;

	switch (operation)
	{
		case '+':
			result = x + y;
			break;

		case '-':
			result = x - y;
			break;

		case '*':
			result = x * y;
			break;

		case '/':
			result = x / y;
			break;

		default:
			cout << "Improper operation. Please input a correct calculation operation: \n";
			cin >> a >> operation >> b;
			Input (a, b);
	}
}




























