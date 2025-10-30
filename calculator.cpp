#include <iostream>
using namespace std;

// Toplama
int toplama(int a, int b) {
    return a + b;
}

// Çıkarma
int cikarma(int a, int b) {
    return a - b;
}

// Çarpma
int carpma(int a, int b) {
    return a * b;
}

// Bölme
double bolme(double a, double b) {
    if(b != 0)
        return a / b;
    else {
        cout << "Sıfıra bölünemez!" << endl;
        return 0;
    }
}

int main() {
    int a = 10, b = 5;

    cout << "Toplama: " << toplama(a, b) << endl;
    cout << "Çıkarma: " << cikarma(a, b) << endl;
    cout << "Çarpma: " << carpma(a, b) << endl;
    cout << "Bölme: " << bolme(a, b) << endl;

    return 0;
}
