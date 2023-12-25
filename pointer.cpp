#include <iostream>
#include <ctime>
using namespace std;

void populateArray(int *a, int size)
{
    srand(time(0));
    for (int i = 0; i < size; i++)
    {
        a[i] = rand() % 50 + 1;
    }
}

void viewArray(int *a, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Value at index " << i << ": " << a[i] << endl;
    }
}

void viewArray(int a1[], int a2[], int size)
{
    int *p=0;

    if ((a1[0] <=50 && a1[0] >=1) && (a2[0] <=50 && a2[0] >=1) )
    {
        cout<<"Both are populated";
        return;
    }

    else if (a1[0] <=50 && a1[0] >=1)
    {
        p = a1;
        cout<<"\na1 is populated"<<endl;
    }
    else if (a2[0] <=50 && a2[0] >=1)
    {
        p = a2;
        cout<<"\na2 is populated"<<endl;
    }

    
    else{
        cout<<"Both are empty";
        return;
    }
    for (int i = 0; i < size; i++)
    {
        cout << "Value at index " << i << ": " << p[i] << endl;
    }
}
int main()
{
    int size = 10;
    int students[size];
    int myArray[size];
    populateArray(students, size);
    populateArray(myArray, size);
    //viewArray(students,size);
    viewArray(students, myArray, size);
}