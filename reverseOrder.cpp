#include <iostream>
using namespace std;

int reverse(int number);
bool isPalindrome(int number);

int main()
{
    int number;
    cout << "Enter the number to see if it's a Palindrome" << endl;
    cin >> number;

    if (isPalindrome(number))
    {
        cout << "It is a palindrome" << endl;
    }
    else
    {
        cout << "It is not a palindrome" << endl;
    }

    return 0;
}

int reverse(int number)
{
    int reversed = 0;
    int temp;

    while (number != 0)
    {
        temp = number % 10;
        reversed = (reversed * 10) + temp;
        number /= 10;
    }

    return reversed;
}

bool isPalindrome(int number)
{

    return number==reverse(number);
}
