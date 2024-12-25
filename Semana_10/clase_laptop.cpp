#include <iostream>
using namespace std;

class Laptop
{
private:
    string marca;
    string color;
    string resolucion;
    int tamanio;
    int precio;

public:
    Laptop(string m, string c, string r, int t, int p)
    {
        this->marca = m;
        this->color = c;
        this->resolucion = r;
        this->tamanio = t;
        this->precio = p;
    }

    void setMarca(string m) { marca = m; }
    void setColor(string c) { color = c; }
    void setResolucion(string r) { resolucion = r; }
    void setTamanio(int t) { tamanio = t; }
    void setPrecio(int p) { precio = p; }
    string getMarca() { return marca; }
    string getColor() { return color; }
    string getResolucion() { return resolucion; }
    int getTamanio() { return tamanio; }
    int getPrecio() { return precio; }
};

int main()
{
    Laptop L1("Asus", "negro", "1920x1080", 15, 2600); // instancia de la clase laptop

    cout << "Marca: " << L1.getMarca() << endl;
    cout << "Color:" << L1.getColor() << endl;
    cout << "Resolucion: " << L1.getResolucion() << "p" << endl;
    cout << "Tamanio: " << L1.getTamanio() << "\"\ " << endl;
    cout << "Precio: $ " << L1.getPrecio();

    return 0;
}