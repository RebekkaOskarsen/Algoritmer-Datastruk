
#include <iostream>
using namespace std;

double recursion_sum(int number)
{
	if (number == 1)
	{
		return 1;
	}
	else
	{
		return number * recursion_sum(number - 1);
	}
}

int fibonacci_sum(int value)
{
	if (value <= 0)
	{
		return 0;
	}
	else if (value == 1)
	{
		return 1;
	}
	else
	{
		return fibonacci_sum(value - 1) + fibonacci_sum(value - 2);
	}
}

int main()
{

	//if(Recursion)
	//{
		double number;
		cout << "Please enter a positive number: ";
		cin >> number;
		cout << "The Recursive of " << number << " = " << recursion_sum(number) << endl;
		
	//}

	//if(Fibonacci)
	//{ 
		int value;
		cout << "Enter a number: ";
		cin >> value;
		cout << "The Value of " << value << " = " << fibonacci_sum(value)<< endl;
		return 0;
	//}

}
