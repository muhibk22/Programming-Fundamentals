#include <iostream>
using namespace std;

struct movies
{
    string tittle;
    int year;
};

struct bio
{
    int age, weight;
    string name;
    movies movie;
};

void printdata(bio person)
{
    cout << "Name is : " << person.name << endl;
    cout << "Age is : " << person.age << endl;
    cout << "Weight is : " << person.weight << "Kg's" << endl;
    cout << "Name of favourite movie is : " << person.movie.tittle << endl;
    cout << "Year movie was released : " << person.movie.year << endl;
    cout << endl;
}

int main()
{
    bio a, b;
    bio *ptr;
    ptr = &a;
    cout << "Enter name of person A : ";
    cin >> ptr->name;
    cout << "Enter age of person A : ";
    cin >> ptr->age;
    cout << "Enter weight of person A : ";
    cin >> ptr->weight;
    cout << "Enter name of favourite movie : ";
    cin >> ptr->movie.tittle;
    cout << "Enter year movie was released : ";
    cin >> ptr->movie.year;
    cout << "-------"
         << "Biodata of person A"
         << "-------" << endl;
    printdata(a);
}