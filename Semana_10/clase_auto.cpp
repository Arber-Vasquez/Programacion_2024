#include <iostream>
using namespace std;

class Auto
{

private:
    string marca;
    string modelo;
    string kilometraje;
    int precio;

public:
    Auto(string m, string mod, string k, int p)
    {
        this->marca = m;
        this->kilometraje = k;
        this->precio = p;
        this->modelo = mod;
    }

    void setMarca(string m) { marca = m; }
    void setKilometraje(string k) { kilometraje = k; }
    void setPrecio(int p) { precio = p; }
    string getMarca() { return marca; }
    string getKilometraje() { return kilometraje; }
    int getPrecio() { return precio; }
    void setModelo(string mod) { modelo = mod; }
    string getModelo() { return modelo; }
};

int main()
{

    Auto A1("TOYOTA", "Toyota Hilux", "400000", 31381);

    cout << "Marca: " << A1.getMarca() << endl;
    cout << "Modelo:" << A1.getModelo() << endl;
    cout << "Kilometraje: " << A1.getKilometraje() << " km" << endl;
    cout << "Precio: $ " << A1.getPrecio() << endl;

    return 0;
}