#include <iostream>
using namespace std;

class AplicacionMovil {
private:

string nombre;
string categoria;
double tamanio;

public:

AplicacionMovil(string n, string c, double t) {
this->nombre = n;
this->categoria = c;
this->tamanio = t;

}

void setNombre(string n) { nombre = n; }
void setCategoria(string c) { categoria = c; }
void setTamanio(double t) { tamanio = t; }
string getNombre() { return nombre; }
string getCategoria() { return categoria; }
double getTamanio() { return tamanio; }

};


int main() {

AplicacionMovil app1("WhatsApp", "Redes Sociales", 200.5);

cout << "Aplicacion: " << app1.getNombre() << endl;
cout << "Categoria: " << app1.getCategoria() << endl;
cout << "Tamanio: " << app1.getTamanio() << " MB" << endl;

return 0;

}