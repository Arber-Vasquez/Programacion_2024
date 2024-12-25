#include <iostream>
using namespace std;

void intercambiar(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void incrementar(int &n) {
    n += 10;
}

int main() {
    int x = 10, y = 20;
    cout << "Antes de intercambiar: x = " << x << ", y = " << y << endl;
    intercambiar(x, y);
    cout << "Después de intercambiar: x = " << x << ", y = " << y << endl;

    incrementar(x);
    cout << "Después de incrementar x: " << x << endl;
    return 0;
}
