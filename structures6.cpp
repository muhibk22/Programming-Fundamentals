#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

struct employee
{
    string employeeName;
    int employeeID, salary;
};

void DisplayEmployeesRecord(employee a[], int s);
void storeToFile(employee a[], ofstream &f, int s);
void storeToArray(employee a[], ifstream &f, int s);

int main()
{
    const int size = 10;
     employee arr[size];
    // // employee arr[size] = {
    //     {"Muhib", 19, 300000},
    //     {"Faizan", 19, 103000},
    //     {"Aziz", 19, 100500},
    //     {"Saad", 19, 100000},
    //     {"Azan", 19, 103000},
    //     {"Ali", 19, 120000},
    //     {"Abdullah", 19, 90000},
    //     {"Ahmed", 19, 100000},
    //     {"Haris", 19, 100000},
    //     {"Hashir", 19, 100000}};

    ofstream f;
    ifstream f2;
    storeToArray(arr,f2,size);
    DisplayEmployeesRecord(arr, size);
    storeToFile(arr, f, size);
}

void DisplayEmployeesRecord(employee a[], int s)
{
    cout << left << setw(10) << "Name" << left << setw(10) << "ID" << left << setw(10) << "Salary" << endl;
    for (int i = 0; i < s; i++)
    {
        cout << left << setw(10) << a[i].employeeName << left << setw(10) << a[i].employeeID << left << setw(10) << a[i].salary << endl;
    }
}

void storeToFile(employee a[], ofstream &f, int s)
{
    f.open("employee_records.txt");
    try
    {
        if (!f.is_open())
        {
            throw runtime_error("Error opening file.");
        }
    }
    catch (runtime_error &e)
    {
        cout << e.what();
        return;
    }

    for (int i = 0; i < s; i++)
    {
        f << a[i].employeeName << " " << a[i].employeeID << " " << a[i].salary << " ";
    }

    f.close();
    cout << "Employee records stored in file successfully." << endl;
}

void storeToArray(employee a[], ifstream &f, int s)
{
    f.open("employee_records.txt");
    try
    {
        if (!f.is_open())
        {
            throw runtime_error("Error opening file.");
        }
    }
    catch (runtime_error &e)
    {
        cout << e.what();
        return;
    }

    for (int i = 0; i < s; i++)
    {
        f >> a[i].employeeName >> a[i].employeeID >> a[i].salary;
    }

    f.close();
}
