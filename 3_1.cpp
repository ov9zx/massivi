/*
где x1 и x2  – корни уравнения a1х2+b1x+c1=0,  y1 и y2  – корни  уравнения  а2y2+b2y+c2=0. Корни уравнения определяются с помощью функции*/


#include <iostream>
#include <cmath>
#include <windows.h>

using namespace std; 

void root(double a, double b, double c, double &x1, double &x2) {
   
    double d = b * b - 4 * a * c;

    
    x1 = (-b + sqrt(d)) / (2 * a);
    x2 = (-b - sqrt(d)) / (2 * a);
}

int main() {
    SetConsoleOutputCP(65001);

    double a1, b1, c1, x1, x2;
    double a2, b2, c2, y1, y2;
    double Z;

    
    cout << "Введите a1, b1, c1: ";
    cin >> a1 >> b1 >> c1;

    root(a1, b1, c1, x1, x2); 

   
    cout << "Корни 1: " << x1 << " и " << x2 << endl;

   
    cout << "Введите a2, b2, c2: ";
    cin >> a2 >> b2 >> c2;

    root(a2, b2, c2, y1, y2); 

    cout << "Корни 2: " << y1 << " и " << y2 << endl;

    Z = (x1 + y1) / (x2 - y2);

    cout << "Z = " << Z << endl;

    return 0;
}
