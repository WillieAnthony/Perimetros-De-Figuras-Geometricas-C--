// Codigo en lenguaje C++ que solicite al usuario que ingrese el radio de un Circulo, calcule el perimetro y muestre el resultado



#include <stdio.h>

int main() {
    float radio, perimetro;
    
    printf("PERIMETRO DEL CIRCULO\n\n\n");
    
    // Solicitar al usuario que ingrese el radio del Circulo
    printf("Ingrese El Radio del Circulo: \n");
    scanf("%f", &radio);
    
    printf("\n");
    
    // Calcular el perimetro del Circulo
    perimetro = (3.1416) * (radio + radio);
    
    printf("\n\n");
    
    // Mostrar el resultado
    printf("El Perimetro del Circulo es: %.2f \n\n\n\n\n", perimetro);
    
    printf("25/06/2024\n");
    printf("David Salazar Gonzalez\n");
    printf("Willie Anthony");
    
    return 0;
}