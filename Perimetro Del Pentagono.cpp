// Codigo en lenguaje C++ que solicite al usuario que ingrese el lado de un Pentagono, calcule el perimetro y muestre el resultado



#include <stdio.h>

int main() {
    float lado, perimetro;
    
    printf("PERIMETRO DEL PENTAGONO\n\n\n");
    
    // Solicitar al usuario que ingrese el lado del Pentagono
    printf("Ingrese El Lado del Pentagono: \n");
    scanf("%f", &lado);
    
    // Calcular el perimetro del Pentagono
    perimetro = lado * 5;
    
    printf("\n\n");
    
    // Mostrar el resultado
    printf("El Perimetro del Pentagono es: %.2f\n\n\n\n\n", perimetro);
    
    printf("25/06/2024\n");
    printf("David Salazar Gonzalez\n");
    printf("Willie Anthony");
    
    return 0;
}