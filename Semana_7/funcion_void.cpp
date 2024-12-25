#include <iostream>
using namespace std;

void saludo() {
    cout << "¡Hola, bienvenido!" << endl;
}

void mostrarError() {
    cout << "¡Ha ocurrido un error!" << endl;
}

int main() {
    saludo();
    mostrarError();
    return 0;
}
