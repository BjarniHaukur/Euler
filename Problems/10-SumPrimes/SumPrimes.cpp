#include <iostream>

using namespace std;
 

long sumPrimes(int max) {
    long sum = 2;
    bool isPrime;
    for (int i = 3; i < max; i += 2) {
        isPrime = true;
        for (int j = 2; j*j <= i; j++) {
            if (i%j == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            sum += i;
        }  
    }
    return sum;
}

int main() {
    cout << sumPrimes(2000000) << endl;
    return 0;
}