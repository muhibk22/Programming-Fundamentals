#include<iostream>
using namespace std;

int power(int number, int base)
{
    if (base==0)
    {
        return 1;
    }
     else
    {
        return number * power(number, base - 1);
    }
}

int main()
{
    int number,base;
    cout<<"Enter the number" <<endl;
    cin>>number;
    cout<<"Enter the base"<<endl;
    cin>>base;
    int pow= power(number, base);
    cout<<number<<" raised to power "<<base<<" is "<<pow<<endl;

}