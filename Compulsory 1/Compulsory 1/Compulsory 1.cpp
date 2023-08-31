
#include <iostream>
using namespace std;

double factorial_sum(int number)
{
	//Base condition
	if (number == 1)
	{
		return 1;
	}
	//Recursion
	else
	{
		return number * factorial_sum(number - 1);
	}
}

int fibonacci_sum(int value)
{
	//Base condition
	if (value <= 0)
	{
		return 0;
	}
	else if (value == 1)
	{
		return 1;
	}

	//Recursion
	else
	{
		return fibonacci_sum(value - 1) + fibonacci_sum(value - 2);
	}
}

int main()
{

	int number;
	cout << "Please enter a positive number: ";
	cin >> number;
	cout << "The Factorial of " << number << " = " << factorial_sum(number) << endl;
	
	cout << endl;

	int value;
	cout << "Enter a Fibonacci value: ";
	cin >> value;
	cout << "The Value of " << value << " = " << fibonacci_sum(value)<< endl;

	return 0;


}
