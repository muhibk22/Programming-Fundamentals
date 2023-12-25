#include <iostream>
using namespace std;


struct Movies
{
    string title;
    int year;
};
void printmovie(Movies hoho);
int main()
{
    Movies mine, yours;
    mine.title="Harry Potter";
    mine.year=2001;
    cout<<"Enter your movie title: ";
    cin>>yours.title;
    cout<<"Enter your movie year: ";
    cin>>yours.year;

    cout<<"My favorite movie is:\n";
    printmovie(mine);
    cout<<"Your favorite movie is:\n";
    printmovie(yours);
    return 0;

}
void printmovie(Movies hoho)
{
    cout<<"Movie title: "<<hoho.title<<endl;
    cout<<"Movie year: "<<hoho.year<<endl;;
}