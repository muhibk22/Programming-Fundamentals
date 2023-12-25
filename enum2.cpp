#include "iostream"
#include "iomanip"

using namespace std;

union paySource
{
	int hours;
	float sales;
};



int main()
{
	paySource Employee1;
	char payType;
	float payRate;
	float grosspay;

	cout << fixed << showpoint << setprecision(2) << endl;
	cout << "This program calculate either \n-> Hourly Rate \n";
	cout << "-> Sales Commision.\n";

	cout << "Enter H for hourly wages or C for commision!" << endl;
	cin >> payType;

	if (payType == 'H' || payType == 'h')
	{
		cout << "What is the hourly Pay Rate?";
		cin >> payRate;
		cout << "How many hours were wokred?";
		cin >> Employee1.hours;

		grosspay = Employee1.hours * payRate;
        cout<<"Gross Pay is $"<<grosspay<<endl;
	}
    else if (payType =='c' || payType== 'C')
    {
        cout<<"What are the total sales for this employee?"<<endl;
        cin>>Employee1.sales;
        grosspay=Employee1.sales * 0.10;
        cout<<"Gross Pay is $"<<grosspay<<endl;
    }
    else
    {
        cout<<payType<<" is not a valid selection \n";
    }
    return 0;
	
}