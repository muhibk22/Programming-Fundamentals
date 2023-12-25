#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the length of three sides to find out weather your triangle is a right triangle or not: "<<endl;
    cin>>a>>b>>c;
    if ( ((a*a)==(b*b)+(c*c)) || ((b*b)==(a*a)+(c*c)) || ((c*c)==(b*b)+(a*a)) )
    {
        cout<<"It is a right triangle"<<endl;
    }
    else
    {
        cout<<"It is not a right triangle";
    }
    return 0;
}