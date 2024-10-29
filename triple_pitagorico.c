#include <stdio.h>
#include <math.h>
/*
a = cateto 1
b = cateto 2
c = hipotenusa
 */

int main() {
    int  a, b, c; //Declaracion de variables a,b,c de tipo entero
    int limit = 17; // Declaramos un limite ya que los triples pitagoricos establecidos en el enunciado no pasan de 17.

    for (a = 1; a <= limit; a++) { //Primer buclle para que se compruebe el la condicion con cada posibilidad de "b" hasta el limite.
        for (b = a; b <= limit; b++) { //Segundo bucle que le va añadiendo uno a b para que se compruebe la condicion con cada posibilidad de "b" menor al limite.
            c = (int)sqrt(a * a + b * b); // sqrt(a * a + b * b) hace la raiz cuadrada de la suma de los cuadrados de a y b. Y le especificamos el tipo de dato que queremos que sea para que no nos de un error en un futuro.

            if (c*c == a*a + b*b && a + b > c && a + c > b && b + c > a && c <= limit) { // Establecemos la condicion para que se imprima el triple pitagorico.
                /*
                 Primera condición: que la suma de los cuadrados de a y b sea igual al cuadrado de c.
                 Segunda condición: que la suma de a y b sea mayor que c.
                 Tercera condición: que las suma de a y c es mayor que b.
                 Cuarta condición: que la suma de b y c sea mayor que a.
                 Quinta condición: que c sea menor o igual al limite.

                 */
                printf("Es un triple pitagorico: %d, %d, %d \n", a, b, c); //Imprimimos el triple pitagorico, utilizando el formato condicional %d.
            }
        }
    }
    return 0;
}



