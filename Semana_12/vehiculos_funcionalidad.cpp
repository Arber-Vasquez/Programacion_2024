#include <iostream>
using namespace std;

// Clase Motor
class Motor {
protected:
    int potencia;
public:
    Motor(int p) : potencia(p) {}
    void mostrarPotencia() {
        cout << "Potencia del motor: " << potencia << " HP" << endl;
    }
};

// Clase SistemaElectrico
class SistemaElectrico {
protected:
    int voltaje;
public:
    SistemaElectrico(int v) : voltaje(v) {}
    void mostrarVoltaje() {
        cout << "Voltaje del sistema: " << voltaje << " V" << endl;
    }
};

// Clase derivada VehiculoElectrico
class VehiculoElectrico : public Motor, public SistemaElectrico {
    string modelo;
public:
    VehiculoElectrico(string m, int p, int v) 
        : Motor(p), SistemaElectrico(v), modelo(m) {}
    
    void mostrarInformacion() {
        cout << "Vehiculo Electrico -> Modelo: " << modelo << endl;
        mostrarPotencia();
        mostrarVoltaje();
    }
};

int main() {
    VehiculoElectrico tesla("Tesla Model S", 762, 400);
    tesla.mostrarInformacion();
    return 0;
}