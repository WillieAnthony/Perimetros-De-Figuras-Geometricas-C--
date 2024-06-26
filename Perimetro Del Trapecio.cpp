// Codigo en lenguaje C++ que solicite al usuario que ingrese la base mayor, la base menor y la lado de un Trapecio, calcule el perimetro y muestre el resultado



#include <stdio.h>

int main() {
    float B, b, lado, perimetro;
    
    printf("PERIMETRO DEL TRAPECIO\n\n\n");
    
    // Solicitar al usuario que ingrese la base mayor del Trapecio
    printf("Ingrese La Base Mayor del Trapecio: \n");
    scanf("%f", &B);
    
    printf("\n");
    
    // Solicitar al usuario que ingrese la base menor del Trapecio
    printf("Ingrese La Base Menor del Trapecio: \n");
    scanf("%f", &b);
       
    printf("\n");
    
    // Solicitar al usuario que ingrese el lado del Trapecio
    printf("Ingrese El Lado del Trapecio: \n");
    scanf("%f", &lado);

    // Calcular el perimetro del Trapecio
    perimetro = (B + b) + (lado * 2);
    
    printf("\n\n");
    
    // Mostrar el resultado
    printf("El Perimetro del Trapecio es: %.2f\n\n\n\n\n", perimetro);
    
    printf("25/06/2024\n");
    printf("David Salazar Gonzalez\n");
    printf("Willie Anthony");
    
    return 0;
}