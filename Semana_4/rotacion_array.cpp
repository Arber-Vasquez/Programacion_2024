#include <iostream>
using namespace std;
int main()
{
    int n;

    cout << "Ingrese el tamaño del array: " << endl;
    cin >> n;

    int arr[n];

    cout << "Ingrese los elementos del array:" << endl;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    int k;
    cout << "Ingrese el numero de posiciones a rotar: " << endl;
    cin >> k;

    k = k % n;
    if (k == 0)
        return 0;

    int rotacion[n];
    for (int i = 0; i < k; ++i)
    {
        rotacion[i] = arr[n - k + i];
    }

    for (int i = k; i < n; ++i)
    {
        rotacion[i] = arr[i - k];
    }

    for (int i = 0; i < n; ++i)
    {
        arr[i] = rotacion[i];
    }

    cout << "Array rotado: " << endl;
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}