#include <iostream>
#include <string>
using namespace std;

int main() {
    long long n;
    string binary = "";

    cout << "Enter number: ";
    cin >> n;

    do {
        int r = n % 2;


        if (r == 0) {
            binary = "0" + binary;
        } else {
            binary = "1" + binary;
        }

        n /= 2;
    } while (n > 0);

    cout << "Binary is: " << binary << endl;

    return 0;
}
