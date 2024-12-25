#include <iostream>
using namespace std;

// Clase base Animal
class Animal {
protected:
    string nombre;
public:
    Animal(string n) : nombre(n) {}
    virtual void sonido() = 0; // Método puro
    void mostrarNombre() {
        cout << "Nombre del animal: " << nombre << endl;
    }
};

// Clase derivada Perro
class Perro : public Animal {
public:
    Perro(string n) : Animal(n) {}
    void sonido() override {
        cout << nombre << " hace: Guau Guau!" << endl;
    }
};

// Clase derivada Gato
class Gato : public Animal {
public:
    Gato(string n) : Animal(n) {}
    void sonido() override {
        cout << nombre << " hace: Miau Miau!" << endl;
    }
};

int main() {
    Animal* animales[2];  // Arreglo de punteros a la clase base
    animales[0] = new Perro("Bobby");
    animales[1] = new Gato("Michi");

    for (int i = 0; i < 2; i++) {
        animales[i]->mostrarNombre();
        animales[i]->sonido();
    }

    // Liberar memoria
    for (int i = 0; i < 2; i++) {
        delete animales[i];
    }

    return 0;
}