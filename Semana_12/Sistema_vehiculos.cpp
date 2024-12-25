#include <iostream>
using namespace std;

// Clase base Vehiculo
class Vehiculo {
protected:
    string marca, modelo;
public:
    Vehiculo(string m, string mo) : marca(m), modelo(mo) {}
    virtual void mostrarInformacion() {
        cout << "Marca: " << marca << ", Modelo: " << modelo << endl;
    }
};

// Clase derivada Automovil
class Automovil : public Vehiculo {
    int numeroPuertas;
public:
    Automovil(string m, string mo, int p) : Vehiculo(m, mo), numeroPuertas(p) {}
    void mostrarInformacion() override {
        cout << "Automovil -> ";
        Vehiculo::mostrarInformacion();
        cout << "Numero de puertas: " << numeroPuertas << endl;
    }
};

// Clase derivada Camion
class Camion : public Vehiculo {
    int capacidadCarga;
public:
    Camion(string m, string mo, int c) : Vehiculo(m, mo), capacidadCarga(c) {}
    void mostrarInformacion() override {
        cout << "Camion -> ";
        Vehiculo::mostrarInformacion();
        cout << "Capacidad de carga: " << capacidadCarga << " toneladas" << endl;
    }
};

int main() {
    Automovil auto1("Toyota", "Corolla", 4);
    Camion camion1("Volvo", "FH16", 20);

    auto1.mostrarInformacion();
    camion1.mostrarInformacion();

    return 0;
}