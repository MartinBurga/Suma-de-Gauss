#include <stdio.h>
#include <math.h>

int numero;
int respuesta;

int main(void) {

    printf("Bienvenido a la calculadora de suma de Gauss\n");
    printf("Por favor, inserte un número entero\n");
    scanf("%d", &numero);
    if (numero > 0) {
        for (int i = 1; i <= numero; i++) {
            respuesta = respuesta + i;
        }
        printf("El resultado de la suma de Gauss realizada es: %d\n", respuesta);
    }

    return 0;
}
