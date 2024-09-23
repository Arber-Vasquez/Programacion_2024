#include <stdio.h>

int main() {
    float base, altura, lado1, lado2, lado3, area, perimetro;

    printf("Ingrese la base del triángulo: ");
    scanf("%f", &base);
    printf("Ingrese la altura del triángulo: ");
    scanf("%f", &altura);
    printf("Ingrese el lado 1 del triángulo: ");
    scanf("%f", &lado1);
    printf("Ingrese el lado 2 del triángulo: ");
    scanf("%f", &lado2);
    printf("Ingrese el lado 3 del triángulo: ");
    scanf("%f", &lado3);

    area = (base * altura) / 2.0;

    perimetro = lado1 + lado2 + lado3;

    printf("Área del triángulo: %.2f\n", area);
    printf("Perímetro del triángulo: %.2f\n", perimetro);

    return 0;
}