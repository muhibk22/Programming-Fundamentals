#include <iostream>
#include <algorithm>
using namespace std;

void displaySortedNumbers(int num1, int num2, int num3);

int main() {
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    displaySortedNumbers(num1, num2, num3);
    return 0;
}

void displaySortedNumbers(int num1, int num2, int num3) {
    int minNum = min(min(num1, num2), num3);
    int maxNum = max(max(num1, num2), num3);
    int midNum = num1 + num2 + num3 - minNum - maxNum;
    cout << "Sorted numbers are: " << minNum << ", " << midNum << ", " << maxNum;
}
