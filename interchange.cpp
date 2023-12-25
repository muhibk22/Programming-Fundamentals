#include <iostream>
#include <cmath>
    using namespace std;
     
int main() {
int min, max;
int num;
   bool isPerfectNumber=false;
   if (!isPerfectNumber)
   {
        int sum = 1;
        for (int i = 2; i <= num/2; i++) {
            if (num % i == 0) {
                if ( i != num/2) {
                    sum = sum + i + num / i;
                } else {
                    sum = sum + i;
                }
            }
        }
       sum == num && num != 1;
       isPerfectNumber=true;
       break;
    }

    

    cout << "Enter the minimum number: ";
    cin >> min;

    cout << "Enter the maximum number: ";
    cin >> max;

    cout << "Perfect numbers between " << min << " and " << max << " are: " << endl;

    for (int num = min; num <= max; num++) {
        if (isPerfectNumber(num)) {
            cout << num << " ";
        }
    }

    cout << endl;

    return 0;
}
