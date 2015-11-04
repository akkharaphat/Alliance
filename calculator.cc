#include<iostream>

class Calculator 
{
	protected:
		int num1;
		int num2;
                char oper;
		int result;
		char choice;
	public:
		int calculate();
};

int Calculator::calculate() 
{
 	std::cout << "Enter first number : \n";
	std::cin >> num1;
        std::cout << "Enter operator (+,-,*,/) : \n";
        std::cin >> oper;  
	std::cout << "Enter second number : \n";
	std::cin >> num2;
	
	switch(oper) 
	{
		case '+' : result = num1 + num2;
			   std::cout << "result : " << result << "\n";
		break;
		case '-' : result = num1 - num2;
			   std::cout << "result : " << result << "\n";
		break;
		case '*' : result = num1 * num2;
			   std::cout << "result : " << result << "\n";
		break;
		case '/' : result = num1 / num2;
			   std::cout << "result : " << result << "\n";
		break;
		default: std::cout << "Error : Operator is not correct. \n";
	}
	return 0;
}

class NerdyCalculator: public Calculator 
{
	public:
		void ncalculator();
		void loop();
};

void NerdyCalculator::ncalculator() 
{
	std::cout << "Nerdy result : " << result + 1 << " \n ";
}


void NerdyCalculator::loop() 
{
	do 
	{
	       	calculate();
		ncalculator();
		std::cout << "Do you want to calculate more ? [y/n] \n";
		std::cin >> choice;
	}
	while(choice == 'y');
}	

int main () 
{
	NerdyCalculator Latest;
	Latest.loop();
	return 0;
}
