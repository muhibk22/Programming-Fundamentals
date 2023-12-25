#include <iostream>
#include<ctime>
using namespace std;

void populateArray(int *p, int size)
{
    srand(time(0));
    for (int i=0; i<size; i++)
    {
        p[i]=rand()%100+1;
    }

}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int *arr, int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (*(arr + j) > *(arr + j + 1))
            {
                swap(arr + j, arr + j + 1);
            }
        }
    }
}

void displayArray(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << *(arr + i) << " ";
    }
    cout << endl;
}

int highest(int *a, int *b)
{
    if (*a>*b)
    {
        return *a;
    }
    else
    {
        return *b;
    }
}
int main()
{
    const int size1 = 30;
    const int size2= 50;
    int Array1[size1];
    int Array2[size2];

    populateArray(Array1,size1);
    populateArray(Array2,size2);

    cout << "Original first array: "<<endl;
    displayArray(Array1, size1);
    bubbleSort(Array1, size1);
    cout << "Sorted first array: "<<endl;
    displayArray(Array1, size1);

    cout << "Original second array: "<<endl;
    displayArray(Array2, size2);
    bubbleSort(Array2, size2);
    cout << "Sorted first array: "<<endl;
    displayArray(Array2, size2);

   cout<<"The highest value is "<< highest(&Array1[size1-1], &Array2[size2-2]);

    return 0;
}
