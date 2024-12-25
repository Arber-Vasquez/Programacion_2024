#include <iostream>
using namespace std;

class Dispositivo {
protected:
    string marca;
public:
    Dispositivo(string m) : marca(m) {}
};

class Energia {
protected:
    double consumo;
public:
    Energia(double c) : consumo(c) {}
};

class Refrigerador : public Dispositivo, public Energia {
    int capacidad;
public:
    Refrigerador(string m, double c, int cap) : Dispositivo(m), Energia(c), capacidad(cap) {}
    void mostrarInformacion() {
        cout << "Refrigerador -> Marca: " << marca 
             << ", Consumo: " << consumo << " kWh"
             << ", Capacidad: " << capacidad << " litros" << endl;
    }
};

int main() {
    Refrigerador refri1("Samsung", 200, 350);
    refri1.mostrarInformacion();
    return 0;
}