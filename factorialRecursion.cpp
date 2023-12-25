#include <iostream>
using namespace std;
int factorial(int n);
int main()
{   
    int number;
    cout<<"What do u want the factorial for?"<<endl;
    cin>>number;
    cout<<"The factorial of "<<number<< " is "<< factorial(number) ;
}
int factorial (int n)
{
    if (n==1)
    {
        return 1;
    }
    else
    return n*factorial(n-1);
}