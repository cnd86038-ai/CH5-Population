#include <iostream>
using namespace std;

int main()
{
	int startingpopulation;
	int days;
	double population;
	double dailyincrease;

	// Get starting population #
	cout << "Enter the starting population: ";
	cin >> startingpopulation;

	while (startingpopulation < 2)
	{
		cout << "Starting population must be at least 2. Please re-enter: ";
		cin >> startingpopulation;
	}

	// Get daily increase %
	cout << "Enter the daily population increase (as a percentage): ";
	cin >> dailyincrease;

	while (dailyincrease <= 0)
	{
		cout << "Daily increase must be a positive number. Please re-enter: ";
		cin >> dailyincrease;
	}
}