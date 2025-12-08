#include <iostream>
using namespace std;

int main() {
    
    short* a = new short[7];
    for (short i = 0; i < 7; i++) {
        cin >> a[i];
    }
    for (short i = 1; i < 7; i++) {
        short key = a[i]; 
        short j = i - 1;  

        while (j >= 0 && a[j] > key) {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;
    }

   
    for (short i = 0; i < 7; i++) {
        cout << a[i] << " ";
    }

    delete[] a;
    return 0;
}
