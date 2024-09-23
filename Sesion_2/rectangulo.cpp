#include <stdio.h>
#include <math.h>

int main() {
    double base;
    double altura;

    printf("Ingrese la base del rectángulo: ");
    scanf("%lf", &base);
    printf("Ingrese la altura del rectángulo: ");
    scanf("%lf", &altura);

    double area = base * altura;

    double perimetro = 2 * (base + altura);

    double diagonal = sqrt(pow(base, 2) + pow(altura, 2));

    printf("Área del rectángulo: %f\n", area);
    printf("Perímetro del rectángulo: %f\n", perimetro);
    printf("Diagonal del rectángulo: %f\n", diagonal);

    return 0;
}