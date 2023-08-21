
#include <iostream>
using namespace std;

int recurive_sum()
{
	
}

int main()
{
	double number;
	cout << "Please enter a positive number:";
	cin >> number;

	int factorial = 1;
	for (int i = 1; i <= number; i++)
	{
		factorial = factorial * i;
	}

	cout << "The Factorial of " << number << " = " << factorial << endl;

}
