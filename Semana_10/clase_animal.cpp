#include <iostream>
using namespace std;

class Animal{
    private:
       string especie, habitat;
       int edad;
    public:
       Animal(string e, int ed, string h){
        this->especie = e;
        this->edad = ed;
        this->habitat = h;
       }

       void setEspecie(string e){ especie = e;}
       void setEdad(int ed){ edad = ed;}
       void setHabitat(string h){ habitat = h;}
       string getEspecie() { return especie;}
       int getEdad() { return edad;}
       string getHabitat() { return habitat;}
};
int main(){
    Animal a1("Tigre", 5, "selva");
    cout << "Especie: "<<a1.getEspecie() << endl;
    cout << "Edad: "<< a1.getEdad() << endl;
    cout << "Habitat: "<< a1.getHabitat() << endl;

    return 0;
}