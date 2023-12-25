#include<iostream>
using namespace std;

void towerOfHanoi(int n, int peg1, int peg2, int peg3);
int main()
{
    int rings;
    cout<<"Enter the number of rings the tower has"<<endl;
    cin>>rings;
    towerOfHanoi(rings, 1,2,3);
    return 0;

}

void towerOfHanoi(int n, int peg1, int peg2, int peg3)
{
    if (n==1)
    {
        cout<<"Move disk# "<<n<<" from "<<peg1<<" to "<<peg3<<endl;
        return;
    }
    towerOfHanoi(n-1, peg1, peg3, peg2);
    cout<<"Move disk# "<<n<<" from "<<peg1<<" to "<<peg3<<endl;
    towerOfHanoi(n-1, peg2, peg1, peg3);

}