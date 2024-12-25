#include <iostream>
using namespace std;

// Clase base Empleado
class Empleado {
protected:
    string nombre;
    double salarioBase;
public:
    Empleado(string n, double s) : nombre(n), salarioBase(s) {}
    virtual double calcularSalario() {
        return salarioBase;
    }
    virtual void mostrarInformacion() {
        cout << "Nombre: " << nombre << ", Salario: " << calcularSalario() << endl;
    }
};

// Clase derivada Gerente
class Gerente : public Empleado {
    double bono;
public:
    Gerente(string n, double s, double b) : Empleado(n, s), bono(b) {}
    double calcularSalario() override {
        return salarioBase + bono;
    }
    void mostrarInformacion() override {
        cout << "Gerente -> ";
        Empleado::mostrarInformacion();
    }
};

// Clase derivada Tecnico
class Tecnico : public Empleado {
    int horasExtras;
    double pagoPorHora;
public:
    Tecnico(string n, double s, int h, double p) : Empleado(n, s), horasExtras(h), pagoPorHora(p) {}
    double calcularSalario() override {
        return salarioBase + (horasExtras * pagoPorHora);
    }
    void mostrarInformacion() override {
        cout << "Tecnico -> ";
        Empleado::mostrarInformacion();
    }
};

int main() {
    Gerente g1("Carlos", 1500, 500);
    Tecnico t1("Luis", 1200, 10, 20);

    g1.mostrarInformacion();
    t1.mostrarInformacion();

    return 0;
}