#include <stdio.h>
#include <math.h>

int main() {
    float lado1, lado2, lado3, s, area;

    printf("Ingrese el lado 1 del triángulo: ");
    scanf("%f", &lado1);
    printf("Ingrese el lado 2 del triángulo: ");
    scanf("%f", &lado2);
    printf("Ingrese el lado 3 del triángulo: ");
    scanf("%f", &lado3);

    s = (lado1 + lado2 + lado3) / 2.0;

    area = sqrt(s * (s - lado1) * (s - lado2) * (s - lado3));

    printf("Semiperímetro (s): %.2f\n", s);
    printf("Área del triángulo: %.2f\n", area);

    return 0;
}