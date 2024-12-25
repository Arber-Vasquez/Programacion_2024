#include <iostream>
using namespace std;

class Libro
{
private:
    string titulo;
    string autor;
    int anioPublicado;

public:
    Libro(string t, string a, int anio)
    {
        this->titulo = t;
        this->autor = a;
        this->anioPublicado = anio;
    }

    void setTitulo(string t) { titulo = t; }
    void setAutor(string a) { autor = a; }
    void setAnioPublicado(int anio) { anioPublicado = anio; }
    string getTitulo() { return titulo; }
    string getAutor() { return autor; }
    int getAnioPublicado() { return anioPublicado; }
};

int main()
{
    Libro L1("Las 48 leyes del poder", "Robert Greene", 1998);

    cout << "Titulo: " << L1.getTitulo() << endl;
    cout << "Autor: " << L1.getAutor() << endl;
    cout << "Fecha de pubicacion: " << L1.getAnioPublicado() << endl;

    return 0;
}