// Basic factorial code

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int fact = 1;

    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    cout << "Factoral of " << n << " is " << fact;

    return 0;
}