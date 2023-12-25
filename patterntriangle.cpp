#include <iostream>
using namespace std;
int main()
{
    int i;
    char ch = 'A';
    for (i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {

            cout <<ch++;
        }
        cout << "\n";
    }
}