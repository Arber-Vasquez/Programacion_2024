#include <iostream>
using namespace std;

// Clase base Trabajador
class Trabajador {
protected:
    string puesto;
public:
    Trabajador(string p) : puesto(p) {}
    void mostrarPuesto() {
        cout << "Puesto: " << puesto << endl;
    }
};

// Clase base Deportista
class Deportista {
protected:
    string deporte;
public:
    Deportista(string d) : deporte(d) {}
    void mostrarDeporte() {
        cout << "Deporte: " << deporte << endl;
    }
};

// Clase derivada PersonaMixta
class PersonaMixta : public Trabajador, public Deportista {
    string nombre;
public:
    PersonaMixta(string n, string p, string d) 
        : Trabajador(p), Deportista(d), nombre(n) {}
    
    void mostrarInformacion() {
        cout << "Nombre: " << nombre << endl;
        mostrarPuesto();
        mostrarDeporte();
    }
};

int main() {
    PersonaMixta persona1("Carlos", "Ingeniero", "Futbol");
    persona1.mostrarInformacion();
    return 0;
}