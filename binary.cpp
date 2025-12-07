#include <iostream>
using namespace std;




int main() {
    long long n;          
    long long b = 0;      
    long long p = 1;      
    cout << "Enter number: ";
    cin >> n;

    do {
        int r = n % 2;   
        
        b = b + (r * p); 
        
        n = n / 2;      
        p = p * 10;      
        
    } while (n > 0);

    cout << "Binary: " << b << endl;

    return 0;
}
