#include <iostream>
#include <cmath>
using namespace std;

struct cords
{
    int x,y;
};

int main()
{
    cords point1,point2;
    cout<<"Enter coordinates of point 1"<<endl;
    cin>>point1.x>>point1.y;
    cout<<"Enter coordinates of point 2"<<endl;
    cin>>point2.x>>point2.y;

    cout<<"The distance between the two points is "<<sqrt(pow(point1.x-point2.x,2)+pow(point1.y-point2.y,2));

}
