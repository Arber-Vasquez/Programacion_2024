#include <iostream>
using namespace std;

// Clase base SensorTemperatura
class SensorTemperatura {
protected:
    double temperatura;
public:
    SensorTemperatura(double t) : temperatura(t) {}
    void mostrarTemperatura() {
        cout << "Temperatura actual: " << temperatura << " °C" << endl;
    }
};

// Clase base SensorHumedad
class SensorHumedad {
protected:
    double humedad;
public:
    SensorHumedad(double h) : humedad(h) {}
    void mostrarHumedad() {
        cout << "Humedad actual: " << humedad << " %" << endl;
    }
};

// Clase derivada DispositivoInteligente
class DispositivoInteligente : public SensorTemperatura, public SensorHumedad {
    string nombre;
public:
    DispositivoInteligente(string n, double t, double h) 
        : SensorTemperatura(t), SensorHumedad(h), nombre(n) {}
    
    void mostrarInformacion() {
        cout << "Dispositivo: " << nombre << endl;
        mostrarTemperatura();
        mostrarHumedad();
    }
};

int main() {
    DispositivoInteligente termometro("Termometro-X", 25.5, 60.0);
    termometro.mostrarInformacion();
    return 0;
}