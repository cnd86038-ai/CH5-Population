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

	// Get number of days
	cout << "Enter the number of days to simulate: ";
	cin >> days;

	while (days < 1)
	{
		cout << "Number of days must be at least 1. Please re-enter: ";
		cin >> days;
	}
}