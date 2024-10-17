#include <stdio.h>
#include <math.h>

int main() {
    int a, b, c;

    // Limite superior para los lados a y b
    int limit = 20;

    // Iteramos sobre posibles valores de a y b
    for (a = 1; a <= limit; a++) {
        for (b = a; b <= limit; b++) { // Comenzamos b desde a para evitar duplicados
            // Calculamos c usando la fórmula de la hipotenusa
            c = sqrt(a * a + b * b);

            // Verificamos si c es un entero y si forma un triángulo
            if (c * c == a * a + b * b && a + b > c && a + c > b && b + c > a) {
                printf("Triple pitagórico encontrado: %d - %d - %d\n", a, b, c);
            }
        }
    }

    return 0;
}