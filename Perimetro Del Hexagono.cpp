// Codigo en lenguaje C++ que solicite al usuario que ingrese el lado de un Hexagono, calcule el perimetro y muestre el resultado



#include <stdio.h>

int main() {
    float lado, perimetro;
    
    printf("PERIMETRO DEL HEXAGONO\n\n\n");
    
    // Solicitar al usuario que ingrese el lado del Hexagono
    printf("Ingrese El Lado del Hexagono: \n");
    scanf("%f", &lado);
    
    // Calcular el perimetro del Hexagono
    perimetro = lado * 6;
    
    printf("\n\n");
    
    // Mostrar el resultado
    printf("El Perimetro del Hexagono es: %.2f\n\n\n\n\n", perimetro);
    
    printf("25/06/2024\n");
    printf("David Salazar Gonzalez\n");
    printf("Willie Anthony");
    
    return 0;
}