#include "iostream"
#include "iomanip"

using namespace std;

 enum Day { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY};


int main()
{
	const int numDays = 5;
	double sale[numDays];
	double total = 0.0;

	for (int i = MONDAY; i < FRIDAY; i++)
	{
		cout << "Enter the sale for the day " << i << " : ";
		cin >> sale[i];
	}

	// Calculating the total sales

	for (int i = MONDAY; i < FRIDAY; i++)
	{
		total += sale[i];
	}
	// Displaying the total
	cout << "The total sales are: $ " << total << endl;

	return 0;
}