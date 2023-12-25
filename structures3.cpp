#include <iostream>
using namespace std;


struct Movies
{
    string title;
    int year;
};

int main()
{
    Movies amovie;
    Movies *pmovie=&amovie;
    cout<<"Enter title: ";
    cin>>pmovie->title;
    cout<<"Enter year: ";
    cin>>pmovie->year;
    cout<<"You have entered: \n"<<pmovie->title<<endl;
    cout<<pmovie->year<<endl;
    cout<<"\nAddresses are: "<<pmovie<<endl<<pmovie<<endl;



    return 0;

}
