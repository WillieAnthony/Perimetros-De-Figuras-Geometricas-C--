// Codigo en lenguaje C++ que solicite al usuario que ingrese el lado de un Cuadrado, calcule el perimetro y muestre el resultado



#include <stdio.h>

int main() {
    float lado, perimetro;
    
    printf("PERIMETRO DEL CUADRADO\n\n\n");
    
    // Solicitar al usuario que ingrese el lado del Cuadrado
    printf("Ingrese El Lado del Cuadrado: \n");
    scanf("%f", &lado);
    
    // Calcular el perimetro del Cuadrado
    perimetro = lado * 4;
    
    printf("\n\n");
    
    // Mostrar el resultado
    printf("El Perimetro del Cuadrado es: %.2f\n\n\n\n\n", perimetro);
    
    printf("25/06/2024\n");
    printf("David Salazar Gonzalez\n");
    printf("Willie Anthony");
    
    return 0;
}