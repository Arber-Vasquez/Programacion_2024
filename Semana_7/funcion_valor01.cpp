#include <iostream>
using namespace std;

void sumar(int a, int b) {
    cout << "La suma es: " << (a + b) << endl;
}

void cuadrado(int n) {
    cout << "El cuadrado de " << n << " es: " << (n * n) << endl;
}

int main() {
    int num1 = 5, num2 = 7;
    sumar(num1, num2);
    cuadrado(num1);

    return 0;
}