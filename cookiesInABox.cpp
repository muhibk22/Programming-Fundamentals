#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  int totalCookies, boxedCookies, boxes;
  cout << "Enter the total number of cookies: ";
  cin >> totalCookies;
  cout << "Enter the number of cookies in 1 box: ";
  while (true)
  {

    cin >> boxedCookies;
    if (boxedCookies > 24)
    {
      cout << "A maximum of 24 cookies can fit in one box" << endl
           << "Enter again: ";
      continue;
    }
    cout << "Enter the number of cookie boxes in 1 container: ";
    cin >> boxes;
    if (boxes > 75)
    {
      cout << "A maximum of 75 boxes can fit in 1 container" << endl
           << "Enter again from beginning: ";
      continue;
    }
    int totalBoxes = totalCookies / boxedCookies;
    int containers = totalBoxes / boxes;
    int leftoverCookies = totalCookies % boxedCookies;
    int leftoverBoxes = totalBoxes % boxes;
    ofstream fout("shipping_results.txt");
    fout << "Number of boxes needed: " << totalBoxes << endl;
    fout << "Number of containers needed: " << containers << endl;
    fout << "Number of leftover cookies: " << leftoverCookies << endl;
    fout << "Number of leftover boxes: " << leftoverBoxes << endl;
    fout.close();
    break;
  }
  return 0;
}
