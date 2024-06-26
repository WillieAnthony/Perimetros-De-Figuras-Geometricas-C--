// Codigo en lenguaje C++ que solicite al usuario que ingrese el lado de un Rombo, calcule el perimetro y muestre el resultado



#include <stdio.h>

int main() {
    float lado, perimetro;
    
    printf("PERIMETRO DEL ROMBO\n\n\n");
    
    // Solicitar al usuario que ingrese el lado del Rombo
    printf("Ingrese El Lado del Rombo: \n");
    scanf("%f", &lado);
    
    // Calcular el perimetro del Rombo
    perimetro = lado * 4;
    
    printf("\n\n");
    
    // Mostrar el resultado
    printf("El Perimetro del Rombo es: %.2f\n\n\n\n\n", perimetro);
    
    printf("25/06/2024\n");
    printf("David Salazar Gonzalez\n");
    printf("Willie Anthony");
    
    return 0;
}