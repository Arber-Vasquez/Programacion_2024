#include <iostream>
using namespace std;
int main()
{
    int n, num;
    int positivos = 0, negativos = 0, ceros = 0;

    cout << "Ingrese la cantidad de numeros a evaluar: " << endl;
    cin >> n;

    int contador = 0;
    do
    {
        cout << "Ingrese los numeros" << endl;
        cin >> num;

        if (num < 0)
            negativos++;
        if (num > 0)
            positivos++;
        if (num == 0)
            ceros++;

        contador++;
    } while (contador < n);
    cout << "Negativos: " << negativos << endl;
    cout << "Positivos: " << positivos << endl;
    cout << "Ceros: " << ceros << endl;

    return 0;
}