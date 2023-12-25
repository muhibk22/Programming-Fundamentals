#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    while (true)
    {
        int a, b, c;
        cout << "Enter the value of 'a': ";
        cin >> a;
        try
        {
            if (a == 0 )
            {
                throw 70;
            }
        }
        catch (int num)
        {
            cout << "Error number: " << num << endl;
            if (num == 70)
            {
                cout << "the value of 'a' should be greater or less than zero. \n";
                continue;
            }
        }
        cout << "Enter the value of 'b': ";
        cin >> b;
        cout << "Enter the value of 'c': ";
        cin >> c;

        int disc, x1, x2;
        disc = (b * b) - 4 * a * c;
        x1 = (-b + sqrt(disc)) / (2 * a);
        x2 = (-b - sqrt(disc)) / (2 * a);
        if (disc == 0)
        {
            cout << "The equation has a single root: " << x1 << endl;
        }
        else if (disc > 0)
        {
            cout << "The equation has two real roots: " << x1 << " and " << x2 << endl;
        }
        else
        {
            cout << "The equation has two complex roots. ";
        }
        break;
    }
    return 0;
}