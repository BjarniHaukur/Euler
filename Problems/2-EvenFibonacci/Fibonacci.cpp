#include <iostream>

using namespace std;

int main() {
    int sum;
    int fib1 = 1;    
    int fib2 = 1;
    int fib3;
    while (fib2 < 4000000) {
        fib3 = fib2 + fib1;
        fib1 = fib2;
        fib2 = fib3;
        if (fib2%2 == 0) sum += fib2;
    }
    cout << sum << endl;
    return 0;
}