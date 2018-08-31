#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	const int max = 101;
	const int min = 0;
	int secret;
	srand(time(NULL));
	secret = rand() % 100 + 1;

	int guess = secret;
	int high = max;
	int low = min;
	char choice;
	char choice1;

	cout << "Think of a number between 1 and 100.\nGot a Number? (y) \n\n";
	cin >> choice1;
	if (choice1 == 'y' || 'Y')
	{
		while (true)
		{
			cout << "\nIs your number less than/equal to " << guess << "? or greater? \nEnter < or >. \n\n";
			cin >> choice;

			if (choice == '<')
			{
				high = guess;
				if (high - low == 1)
				{
					guess = low;
					break;
				}
				else
				{
					guess -= (high - low) / 2;
				}
			}
			else if (choice == '>')
			{
				low = guess;
				if (high - low == 1)
				{
					guess = low;
					break;
				}
				else
				{
					guess += (high - low) / 2;
				}
			}
			else
			{
				cout << "Incorrect choice.\n\n";
			}
		}
		cout << "Your number is " << high << "!\n\n";
	}
	system("pause");
	return 0;
}
