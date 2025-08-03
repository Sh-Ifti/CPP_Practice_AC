// Sum of all numbers from 1 to N which are divisible by 3

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a range: ";
    cin >> n;
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            sum += i;
        }
    }
    cout << "Sum of all numbers from 1 to " << n << " which are divisible by 3 is: " << sum;

    return 0;
}