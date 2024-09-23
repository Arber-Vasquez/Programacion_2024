#include <stdio.h>

int main() {
    float lado1, lado2, lado3, radio, semiperimetro, area;

    printf("Ingrese el lado 1 del triángulo: ");
    scanf("%f", &lado1);
    printf("Ingrese el lado 2 del triángulo: ");
    scanf("%f", &lado2);
    printf("Ingrese el lado 3 del triángulo: ");
    scanf("%f", &lado3);
    printf("Ingrese el radio del triángulo: ");
    scanf("%f", &radio);

    semiperimetro = (lado1 + lado2 + lado3) / 2.0;

    area = radio * semiperimetro;

    printf("Semiperímetro del triángulo: %.2f\n", semiperimetro);
    printf("Área del triángulo circunscrito: %.2f\n", area);

    return 0;
}