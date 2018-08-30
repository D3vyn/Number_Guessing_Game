#include <iostream>
using namespace std;

int main()
{
	const int max = 101;
	const int min = 1;

	int guess;
	int high = max;
	int low = min;
	char choice;

	cout << "Think about a number between " << min << " and " << max << ". \n\n";
	guess = (high - low) / 2;

	while (high > low)
	{
		cout << "Is your number less than or equal to " << guess << "? \n Enter y or n. \n\n";
		cin >> choice;

		if (choice == 'y' || choice == 'Y')
		{
			high = guess;
			if (high - low == 1)
			{
				guess = low;
			}
			else
			{
				guess -= (high - low) / 2;
			}
		}
		else if (choice == 'n' || choice == 'N')
		{
			low = guess;
			guess += (high - low) / 2;
		}
		else
		{
			cout << "Incorrect choice.\n";
		}
	}
	cout << "Your number is: " << high << ".\n";
	
	system("pause");
	return 0;
}
