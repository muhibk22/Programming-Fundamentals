#include <iostream>
#include <array>
#include <ctime>
using namespace std;

void arraypoulate(int *a, int size)
{
    srand(time(0));
    for (int i = 0; i < size; i++)
    {
        a[i] = rand() % 50 + 1;
    }
    int num = 10;
    a = &num;
    *a = 20;
}
void arrayview(int *a, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << "Value at index " << i << " : " << a[i] << endl;
    }
}
void arrayview1(int a1[], int a2[], int size)
{
    int *p = 0;
    if (a1[0] <= 50 && a1[0] >= 1)
    {
        p = a1;
    }

    if (a2[0] <= 50 && a2[0] >= 1)
    {
        p = a2;
    }

    for (int i = 0; i < size; i++)
    {
        cout << "Value at index " << i << " : " << p[i] << endl;
    }
}
int main()
{
    int size;
    cout << "Enter size of array : ";
    cin >> size;
    int *students = new int(size);

    arraypoulate(students, size);
    arrayview(students, size);

    
    return 0;
}