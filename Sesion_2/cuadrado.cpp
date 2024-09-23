#include <stdio.h>
#include <math.h>

int main() {
    double lado;

    printf("Ingrese el lado del cuadrado: ");
    scanf("%lf", &lado);

    double area = lado * lado;

    double perimetro = 4 * lado;

    double diagonal = lado * sqrt(2);

    printf("Área del cuadrado: %f\n", area);
    printf("Perímetro del cuadrado: %f\n", perimetro);
    printf("Diagonal del cuadrado: %f\n", diagonal);

    return 0;
}