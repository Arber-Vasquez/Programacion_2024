#include <iostream>
using namespace std;

int factorial(int n) {
    int res = 1;
    for (int i = 1; i <= n; ++i)
        res *= i;
    return res;
}

int obtenerMayor(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num = 5;
    cout << "El factorial de " << num << " es: " << factorial(num) << endl;

    int x = 10, y = 25;
    cout << "El mayor entre " << x << " y " << y << " es: " << obtenerMayor(x, y) << endl;
    return 0;
}
