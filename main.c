#include <stdio.h>
#include <math.h>

int numero;
int respuesta;

int main(void) {

    printf("Bienvenido a la calculadora de suma de Gauss\n");
    printf("Por favor, inserte un numero entero\n");
    scanf("%d", &numero);
    if (numero > 0) {
        for (int i = 1; i <= numero; i++) {
            respuesta = respuesta + i;
        }
        printf("El resultado de la suma de Gauss realizada es: %d\n", respuesta);
    }

    if (numero<0)
    {
        printf("El numero insertado no es de caracter entero o entero positivo. Vuelvelo a intentarlo.");
    }
    
    return 0;
}

