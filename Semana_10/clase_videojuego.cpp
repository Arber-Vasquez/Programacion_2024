#include <iostream>
using namespace std;

class Videojuego
{

private:
    string titulo;
    string plataforma;
    double precio;

public:
    Videojuego(string t, string p, double pr)
    {

        this->titulo = t;
        this->plataforma = p;
        this->precio = pr;
    }

    void setTitulo(string t) { titulo = t; }
    void setPlataforma(string p) { plataforma = p; }
    void setPrecio(double pr) { precio = pr; }
    string getTitulo() { return titulo; }
    string getPlataforma() { return plataforma; }
    double getPrecio() { return precio; }
};

int main()
{

    Videojuego v1("The Legend of Zelda: Breath of the Wild", "Nintendo Switch", 59.99);

    cout << "Videojuego: " << v1.getTitulo() << endl;
    cout << "Plataforma: " << v1.getPlataforma() << endl;
    cout << "Precio: $" << v1.getPrecio() << endl;

    return 0;
}