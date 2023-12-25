#include <iostream>
using namespace std;

string convertMillis(int millis);

int main()
{
    int millisecs;
    cout<<"Enter milliseconds to convert to Hours:Mins:Secs"<<endl;
    cin>>millisecs;
    cout<<convertMillis(millisecs)<<endl;
    return 0;
}

string convertMillis(int millis)
{
    int hours,mins,secs;
    string result;
    hours=millis/3600000;
    mins=(millis%3600000)/60000;
    secs= (millis%60000)/1000;
    result= to_string(hours) + ":" + to_string(mins) + ":" + to_string(secs);
    return result;

}
