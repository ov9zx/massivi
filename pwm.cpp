#include <iostream>
#include <ctime>
#include <cstdlib>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleOutputCP(65001);

    short * a = new short[10];
    srand(time(0));

    cout << "Исходный массив А: ";
    for(short i = 0; i < 10; i++) {
        a[i] = rand() % 101 - 50;
        cout << a[i] << " ";
    }
    cout << endl << endl;

    short minIndex = 0;

    for(short i = 1; i < 10; i++) {
        if(a[i] < a[minIndex]) {
            minIndex = i;
        }
    }
    cout << "Минимальный элемент: " << a[minIndex] << " (индекс " << minIndex << ")" << endl;

    short * b = new short[9];
    short j = 0;

    for (short i = 0; i < 10; i++) {
        if (i != minIndex) {
            b[j] = a[i];
            j++;
        }
    }

    cout << "Массив B (после удаления): ";
    for(short j = 0; j < 9; j++) {
        cout << b[j] << " ";
    }
    cout << endl << endl;

    unsigned short M;
    cout << "Введите M (сколько элементов добавить): ";
    cin >> M;

    short * c = new short[9 + M];

    memmove(c, b, 9 * sizeof(short));

    for (int i = 9; i < 9 + M; i++) {
        c[i] = rand() % 101 - 50;
    }

    cout << "Массив C (после вставки): ";
    for (int i = 0; i < 9 + M; i++) {
        cout << c[i] << " ";
    }
    cout << endl << endl;

    unsigned short K;
    cout << "Введите K (на сколько сдвинуть вправо): ";
    cin >> K;

    for (unsigned short j = 0; j < K; j++) {
        short temp = a[9];
        for (short i = 9; i > 0; i--) {
            a[i] = a[i - 1];
        }
        a[0] = temp;
    }

    cout << "Массив А (после сдвига): ";
    for(short j = 0; j < 10; j++){
        cout << a[j] << "  ";
    }
    cout << endl << endl;

    short indexFound = -1;

    for (short i = 0; i < 10; i++) {
        if (a[i] < 0) {
            indexFound = i;
            break;
        }
    }

    if (indexFound != -1) {
        cout << "Первый отрицательный элемент: " << a[indexFound]
             << " (индекс " << indexFound << ")" << endl;
    } else {
        cout << "Отрицательных элементов нет" << endl;
    }

    delete[] a;
    delete[] b;
    delete[] c;

    return 0;
}
