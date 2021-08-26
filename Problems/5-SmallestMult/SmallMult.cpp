#include <iostream>

using namespace std;

int main() {
    int i = 2520;
    bool even;
    while (1) {
        i++;
        even = true;
        for (int s = 1; s <= 20; s++) {
            if (i%s != 0) {
                even = false;
                break;
            }
        }
        if (even) {
            cout << "I made it" << endl;
            cout << i << endl;
            break;
        }
    }
    return 0;
}