// Codigo en lenguaje C++ que solicite al usuario que ingrese el lado de un Triangulo, calcule el perimetro y muestre el resultado



#include <stdio.h>

int main() {
    float lado, perimetro;
    
    printf("PERIMETRO DEL TRIANGULO\n\n\n");
    
    // Solicitar al usuario que ingrese el lado del Triangulo
    printf("Ingrese El Lado del Triangulo: \n");
    scanf("%f", &lado);
    
    // Calcular el perimetro del Triangulo
    perimetro = lado * 3;
    
    printf("\n\n");
    
    // Mostrar el resultado
    printf("El Perimetro del Triangulo es: %.2f\n\n\n\n\n", perimetro);
    
    printf("25/06/2024\n");
    printf("David Salazar Gonzalez\n");
    printf("Willie Anthony");
    
    return 0;
}