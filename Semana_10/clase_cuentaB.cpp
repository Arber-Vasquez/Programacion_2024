#include <iostream>
using namespace std;

class CuentaBancaria {

private:

string titular;
double saldo;
string tipoCuenta;

public:

CuentaBancaria(string t, double s, string tipo) {

this->titular = t;
this->saldo = s;
this->tipoCuenta = tipo;

}

void setTitular(string t) { titular = t; }
void setSaldo(double s) { saldo = s; }
void setTipoCuenta(string tipo) { tipoCuenta = tipo; }
string getTitular() { return titular; }
double getSaldo() { return saldo; }
string getTipoCuenta() { return tipoCuenta; }

};

int main() {

CuentaBancaria cuenta1("Maria Lopez", 1500.50, "Ahorros");

cout << "Titular: " << cuenta1.getTitular() << endl;
cout << "Saldo: $" << cuenta1.getSaldo() << endl;
cout << "Tipo de cuenta: " << cuenta1.getTipoCuenta() << endl;

return 0;

}