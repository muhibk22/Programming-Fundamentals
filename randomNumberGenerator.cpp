#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <conio.h>

using namespace std;

int main()
{
    ofstream fout("random.txt");


    int num1, limit;
    cout << "How many random numbers do you want? ";
    cin >> limit;
    int range1,range2;
    cout<<"What range?\nEnter minimum value:";
    cin>>range1;
    cout<<"Enter maximum value:";
    cin>>range2;

    srand(time(0));

    cout << "Your random numbers are:\n";
    for (int i = 0; i < limit; i++)
    {
        num1 = rand() % (range2 - range1 + 1) + range1;
        cout << num1 << endl;
        fout << num1 << endl;
    }
    fout.close();

    ifstream finn;
    finn.open("random.txt");

    try
    {
        if (!finn.is_open())
            throw 101;
    }
    catch (int a)
    {
        cout << "Error opening the file!\nError number: " << a << endl;
        return 1; 
    }

    int count = 0;
    int sum = 0;
    int a;


    while (finn >> a)
    {
        sum += a;
        count++;
    }

    cout << "Total numbers stored in the file are: " << count << endl;

    if (count > 0)
    {
        int avg = sum / count;
        cout << "Average number is: " << avg << endl;
    }

    finn.close();
    getch();
}