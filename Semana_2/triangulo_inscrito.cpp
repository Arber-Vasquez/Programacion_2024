#include <stdio.h>

int main() {
    float lado1, lado2, lado3, radio, area;

    printf("Ingrese el lado 1 del triángulo: ");
    scanf("%f", &lado1);
    printf("Ingrese el lado 2 del triángulo: ");
    scanf("%f", &lado2);
    printf("Ingrese el lado 3 del triángulo: ");
    scanf("%f", &lado3);
    printf("Ingrese el radio del triángulo: ");
    scanf("%f", &radio);

    area = (lado1 * lado2 * lado3) / (4 * radio);

    printf("Área del triángulo inscrito: %.2f\n", area);

    return 0;
}