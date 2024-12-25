#include <iostream>
using namespace std;

class Pelicula
{

private:
    string titulo;
    string director;
    int anioEstreno;

public:
    Pelicula(string t, string d, int anio)
    {

        this->titulo = t;
        this->director = d;
        this->anioEstreno = anio;
    }

    void setTitulo(string t) { titulo = t; }
    void setDirector(string d) { director = d; }
    void setAnioEstreno(int anio) { anioEstreno = anio; }
    string getTitulo() { return titulo; }
    string getDirector() { return director; }
    int getAnioEstreno() { return anioEstreno; }
};

int main()
{

    Pelicula p1("Inception", "Christopher Nolan", 2010);

    cout << "Pelicula: " << p1.getTitulo() << endl;
    cout << "Director: " << p1.getDirector() << endl;
    cout << "Anio de estreno: " << p1.getAnioEstreno() << endl;

    return 0;
}