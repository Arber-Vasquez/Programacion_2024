#include <stdio.h>

int main() {
    float base_mayor, base_menor, altura, area;

    printf("Ingrese la base mayor del trapecio: ");
    scanf("%f", &base_mayor);
    printf("Ingrese la base menor del trapecio: ");
    scanf("%f", &base_menor);
    printf("Ingrese la altura del trapecio: ");
    scanf("%f", &altura);

    area = ((base_mayor + base_menor) * altura) / 2.0;

    printf("Área del trapecio: %.2f\n", area);

    return 0;
}