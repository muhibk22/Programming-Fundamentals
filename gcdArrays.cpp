#include <iostream>
#include<ctime>
using namespace std;

void populateArray(int a[],int size)
{
    srand(time(0));
    for (int i=0;i<size;i++)
    {
        a[i]=rand()%100+1;
    }

}
void viewArray(int a[],int size)
{
    for (int i=0; i<size; i++)
    {
        cout<<a[i]<<endl;
    }
}

int find_gcd(int a, int b)
{
    while (b!=0)
    {
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
int gcd(int a[], int size)
{
    int gcd_result=a[0];
    for (int i=1;i<size; i++)
    {
        gcd_result = find_gcd(gcd_result, a[i]);
    }
    return gcd_result;
}

int main()
{
    const int size=10;
    int arr[size]={0};
    populateArray(arr, size);
    viewArray(arr,size);
    int greatestcd=gcd(arr,size);
    cout<<"GCD: "<<greatestcd;

    
}