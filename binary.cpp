#include <iostream>
using namespace std;




int main() {
    long long n;          
    long long a = 0;      
    long long b = 1;      
    cout << "Enter number: ";
    cin >> n;

    do {
        int r = n % 2;   
        
        a = a + (r * b); 
        
        n = n / 2;      
        b = b * 10;      
        
    } while (n > 0);

    cout << "Binary: " << b << endl;

    return 0;
}
