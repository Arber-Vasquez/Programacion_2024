#include <iostream>
using namespace std;

// 1. SuperClase: Persona
class Persona {
private:
    string nombre;
    string apellido;

public:
    // Constructor por defecto
    Persona() : nombre(""), apellido("") {}

    // Constructor parametrizado
    Persona(string nombre, string apellido) : nombre(nombre), apellido(apellido) {}

    string getNombre() const { return nombre;}
    string getApellido() const { return apellido;}

    void setNombre(string nombre) { this->nombre = nombre;}
    void setApellido(string apellido) { this->apellido = apellido;}

};

// 2. Clase Hija 1: Estudiante
class Estudiante : public Persona {
private:
    int matricula;

public:
    Estudiante(string nombre, string apellido, int matricula) 
        : Persona(nombre, apellido), matricula(matricula) {}

    int getMatricula() const { return matricula;}

    void setMatricula(int matricula) { this->matricula = matricula;}

};

// 3. Clase Hija 2: Profesor
class Profesor : public Persona {
private:
    double salario; // Salario del profesor

public:
    // Constructor
    Profesor(string nombre, string apellido, double salario) 
        : Persona(nombre, apellido), salario(salario) {}

    double getSalario() const { return salario;}

    void setSalario(double salario) { this->salario = salario;}

};

int main() {
    // Crear una instancia de Estudiante
    Estudiante estudiante1("Carlos", "Perez", 12345);
    
    // Crear una instancia de Profesor
    Profesor profesor1("Ana", "Gomez", 3500.50);

    return 0;
}