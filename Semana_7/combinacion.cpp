#include <iostream>
using namespace std;

void sumar(int a, int b) {
    cout << "La suma es: " << (a + b) << endl;
}

void intercambiar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

double areaCirculo(double radio) {
    return 3.14159 * radio * radio;
}

void mostrarArea(double area) {
    cout << "El área del círculo es: " << area << endl;
}

int main() {
    int x = 5, y = 10;

    sumar(x, y);

    cout << "Antes de intercambiar: x = " << x << ", y = " << y << endl;
    intercambiar(x, y);
    cout << "Después de intercambiar: x = " << x << ", y = " << y << endl;

    double radio = 3.0;
    double area = areaCirculo(radio);

    mostrarArea(area);

    return 0;
}
