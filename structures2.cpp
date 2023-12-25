#include <iostream>
using namespace std;


struct info
{
    string name;
    int age;
};
int main()
{
    info muhib, farlan;
    muhib.name="Muhib Khan";
    muhib.age= 19;
    cout<<"Enter Name: ";
    cin>>farlan.name;
    cout<<"Enter age: ";
    cin>>farlan.age;

    cout<<"Hard info:\n";
    cout<<muhib.name<<endl<<muhib.age<<endl;
    cout<<"Runtime info:\n";
    cout<<farlan.name<<endl<<farlan.age<<endl;
    return 0;

}
