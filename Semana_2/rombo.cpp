#include <stdio.h>
#include <math.h>

int main() {
    float diagonal_mayor, diagonal_menor, area, lado, perimetro;

    diagonal_mayor = 8.0;
    diagonal_menor = 6.0;

    area = (diagonal_mayor * diagonal_menor) / 2.0;

    lado = sqrt(pow(diagonal_mayor / 2.0, 2) + pow(diagonal_menor / 2.0, 2));

    perimetro = 4.0 * lado;

    printf("Área del rombo: %.2f\n", area);
    printf("Lado del rombo: %.2f\n", lado);
    printf("Perímetro del rombo: %.2f\n", perimetro);

    return 0;
}