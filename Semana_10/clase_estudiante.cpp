#include <iostream>
using namespace std;

class Estudiante
{

private:
    string nombre;
    int edad;
    string carrera;

public:
    Estudiante(string n, int e, string c)
    {

        this->nombre = n;
        this->edad = e;
        this->carrera = c;
    }

    void setNombre(string n) { nombre = n; }
    void setEdad(int e) { edad = e; }
    void setCarrera(string c) { carrera = c; }
    string getNombre() { return nombre; }
    int getEdad() { return edad; }
    string getCarrera() { return carrera; }
};

int main()
{

    Estudiante e1("Carlos Gomez", 20, "Ingenieria");

    cout << "Nombre: " << e1.getNombre() << endl;
    cout << "Edad: " << e1.getEdad() << endl;
    cout << "Carrera: " << e1.getCarrera() << endl;

    return 0;
}