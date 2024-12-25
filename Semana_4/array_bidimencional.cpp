#include <iostream>
using namespace std;
int main()
{
    int n = 3, m = 3;
    int arr[n][m];

    cout << "Ingrese los elementos de la matriz 3x3:" << endl;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cout << "Elemento [" << i << "]" << "[" << j << "] \t";
            cin >> arr[i][j];
        }
    }

    int minimo = arr[0][0];
    int maximo = arr[0][0];

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            if (arr[i][j] < minimo)
                minimo = arr[i][j];
            if (arr[i][j] > maximo)
                maximo = arr[i][j];
        }
    }

    cout << "Minimo: " << minimo << " Maximo: " << maximo << endl;

    return 0;
}