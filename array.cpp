#include <iostream>
#include <ctime>
#include<iomanip>
using namespace std;
void viewArray(int arr[], int size);

void linearSearch(int a[], int size)
{
    int value=0;
    bool exist=false;
    cout<<"Enter value you want to search in array: ";
    cin>>value;
    for (int i=1;i<size;i++)
    {
        if (value==a[i])
        {
            exist=true;
        }
    }
    if (true)
    {
        cout<<value<<" exists in array."<<endl;
    }
    else
    {
        cout<<"It does not exist"<<endl;
    }
}
void viewMode(int a[],int size)
{
    for (int i = 1; i < size; i++)
    {
        cout<<"\n"<< i <<" is "<< a[i]<<" times. \t\t" ;
        for (int j=0;j<a[i];j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
    cout << endl;

}

void modeArray(int a[], int size)
{
    int frequency[7]={0};
    for (int i=0; i<size; i++)
    {
        frequency[a[i]]++;

    }
        viewMode(frequency,7);
        int mode=0;
        for (int i=0; i<7;i++)
        {
            if (frequency[i]>frequency[mode])
            mode=i;
        }
        cout<<"Mode is: "<<mode<<endl;
}

void sortArray (int a[], int size)
{
    for (int i=0; i<size-1; i++)
    {
        for (int j=0; j<size-1; j++)
        {
            if (a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;

            }
        }
    }
}

void meanArray(int a[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += a[i];
    }
    cout << "Mean of array is: " << sum / size;
}

void populateArray(int a[], int size)
{
    srand(time(0));
    for (int i = 0; i < size; i++)
    {
        a[i] = rand() % 6+1;
    }
}

void viewArray(int arr[], int size)
{
    int check = 0;
    for (int i = 0; i < size; i++)
    {
        cout << "[" << i << "] : " << arr[i]<<" \t" ;
        check++;
        if (check % 10 == 0)
        {
            cout << endl;
        }
    }
    cout << endl;
}

int main()
{
    srand(time(0));
    const int size = 20;
    int array1[size] = {0};
    populateArray(array1, size);
    viewArray(array1, size);
    sortArray(array1, size);
    cout<<"\n"<<setw(85)<<"-------SORTED ARRAY--------\n"<<endl;
    viewArray(array1, size);
    cout<<"\nMedian is: "<<array1[size/2]<<endl;
    cout<<"\n"<<setw(85)<<"-------Mode of Array--------\n"<<endl;
    modeArray(array1,size);
    linearSearch(array1,size);
   // meanArray(array1, size);

    return 0;
}