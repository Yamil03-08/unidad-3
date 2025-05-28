#include <stdio.h>
#include <string.h>

int main() {
    char cadena1[100], cadena2[100];
    int resultado;

    printf("Introduce la primera palabra: ");
    scanf("%s", cadena1);

    printf("Introduce la segunda palabra: ");
    scanf("%s", cadena2);

    resultado = strcmp(cadena1, cadena2);

    if (resultado == 0) {
        printf("Ambas palabras son iguales.\n");
    } else {
        printf("La palabra mayor es: '%s'\n", resultado > 0 ? cadena1 : cadena2);
        printf("La palabra menor es: '%s'\n", resultado < 0 ? cadena1 : cadena2);
    }

    printf("Valor de comparación: %d\n", resultado);
    return 0;
}
    
    
    
    