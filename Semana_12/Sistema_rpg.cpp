#include <iostream>
using namespace std;

class Arma {
protected:
    int dano;
public:
    Arma(int d) : dano(d) {}
};

class Armadura {
protected:
    int defensa;
public:
    Armadura(int def) : defensa(def) {}
};

class Personaje : public Arma, public Armadura {
    string nombre;
    int nivel;
public:
    Personaje(string n, int lvl, int d, int def) : Arma(d), Armadura(def), nombre(n), nivel(lvl) {}
    void mostrarInformacion() {
        cout << "Personaje -> Nombre: " << nombre 
             << ", Nivel: " << nivel 
             << ", Daño: " << dano 
             << ", Defensa: " << defensa << endl;
    }
};

int main() {
    Personaje guerrero("Arthas", 10, 50, 30);
    guerrero.mostrarInformacion();
    return 0;
}