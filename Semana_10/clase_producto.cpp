#include <iostream>
using namespace std;

class Producto
{

private:
    string nombre;
    double precio;
    int cantidad;

public:
    Producto(string n, double p, int c)
    {

        this->nombre = n;
        this->precio = p;
        this->cantidad = c;
    }

    void setNombre(string n) { nombre = n; }
    void setPrecio(double p) { precio = p; }
    void setCantidad(int c) { cantidad = c; }
    string getNombre() { return nombre; }
    double getPrecio() { return precio; }
    int getCantidad() { return cantidad; }
};

int main()
{

    Producto prod1("Laptop", 999.99, 10);

    cout << "Producto: " << prod1.getNombre() << endl;
    cout << "Precio: $" << prod1.getPrecio() << endl;
    cout << "Cantidad: " << prod1.getCantidad() << endl;

    return 0;
}