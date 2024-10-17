#include <stdio.h>
#include <math.h>

int main() {
    int  a, b, c;
    int limit = 20;

    for (a = 1; a <= limit; a++) {
        for (b = a; b <= limit; b++) {
            c = sqrt(a * a + b * b);

            if (c*c == a*a + b*b && a + b > c && a + c > b && b + c > a) {
                printf("Es un triple pitagorico: %d, %d, %d \n", a, b, c);
            }
        }
    }
    return 0;
}



