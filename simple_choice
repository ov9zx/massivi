#include <iostream>
using namespace std;

int main() {

    short* a = new short[7]; 
    for (unsigned char i = 0; i < 7; i++) {
        cin >> a[i];
    }

    
    for (unsigned char i = 0; i < 7; i++) {

        unsigned char minIndex = i; 

        for (unsigned char j = i + 1; j < 7; j++) {
            if (a[j] < a[minIndex]) {
                minIndex = j;
            }
        }

       
     
        if (minIndex != i) { 
            short box = a[i];
            a[i] = a[minIndex];
            a[minIndex] = box;
        }
    }


    for (unsigned char i = 0; i < 7; i++) {
        cout << a[i] << " ";
    }

    delete[] a;
    return 0;
}
