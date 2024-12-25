#include <iostream>
using namespace std;

// Clase base Figura
class Figura {
public:
    virtual double area() = 0; // Método puro
    virtual void mostrarArea() {
        cout << "El area es: " << area() << endl;
    }
};

// Clase Rectangulo
class Rectangulo : public Figura {
    double base, altura;
public:
    Rectangulo(double b, double a) : base(b), altura(a) {}
    double area() override {
        return base * altura;
    }
};

// Clase Triangulo
class Triangulo : public Figura {
    double base, altura;
public:
    Triangulo(double b, double a) : base(b), altura(a) {}
    double area() override {
        return (base * altura) / 2;
    }
};

int main() {
    Rectangulo r1(10, 5);
    Triangulo t1(10, 5);

    r1.mostrarArea();
    t1.mostrarArea();

    return 0;
}