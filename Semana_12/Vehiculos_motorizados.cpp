#include <iostream>
using namespace std;

class Motor {
protected:
    string tipoMotor;
public:
    Motor(string tipo) : tipoMotor(tipo) {}
};

class Vehiculo {
protected:
    int ruedas;
public:
    Vehiculo(int r) : ruedas(r) {}
};

class Automovil : public Motor, public Vehiculo {
    string marca;
public:
    Automovil(string t, int r, string m) : Motor(t), Vehiculo(r), marca(m) {}
    void mostrarInformacion() {
        cout << "Automovil -> Marca: " << marca 
             << ", Motor: " << tipoMotor 
             << ", Ruedas: " << ruedas << endl;
    }
};

int main() {
    Automovil auto1("Gasolina", 4, "Honda");
    auto1.mostrarInformacion();
    return 0;
}