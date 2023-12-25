#include <iostream>
using namespace std;

int sumDigits(int n);
int main()
{
    int num;
    cout << "Enter the number to find the sum of its digits" << endl;
    cin >> num;
    cout << "The sum of integers in " << num << " is " << sumDigits(num) << endl;
    return 0;
}
int sumDigits(int n)
{
    int sum=0;
    int lastDigit;
    while (n!=0)
    {
        lastDigit= n%10;
        n= n/10;
        sum+=lastDigit;
    }
    return sum;
}