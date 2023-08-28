
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

int fibonacci_sum()
{
	
}

int main()
{

	//if(Recursion)
	//{
		int number;
		cout << "Please enter a positive number: ";
		cin >> number;
		cout << "The Recursive of " << number << " = " << recursion_sum(number) << endl;
	//}

	//if(Fibonacci)
	//{ 
	//	int number;
	//	cout << "Enter a number: ";
	//	cin >> number;
	//	cout << "
	//}

}
