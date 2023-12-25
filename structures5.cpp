// Write C++ Program to Store Information of a Student in a Structure.
// It stores the information (name, roll and marks entered by the user) of a student in a structure and displays it on the screen.

#include <iostream>
using namespace std;

struct student
{
    string name;
    int rollno, marks;
};
void print (student stud1);

int main()
{
    student stud1;
    cout << "Enter the name of student: \n";
    cin>>stud1.name;
    cout << "Enter the roll no of student: \n";
    cin>>stud1.rollno;
    cout << "Enter the marks of student: \n";
    cin>>stud1.marks;
    print (stud1);

}
void print(student stud1)
{
    cout<<"Name: "<<stud1.name<<endl;
    cout<<"Roll no: "<<stud1.rollno<<endl;
    cout<<"Marks: "<<stud1.marks<<endl;
    
}