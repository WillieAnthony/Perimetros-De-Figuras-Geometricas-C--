// Codigo en lenguaje C++ que solicite al usuario que ingrese la base y la lado de un Romboide, calcule el perimetro y muestre el resultado



#include <stdio.h>

int main() {
    float base, lado, perimetro;
    
    printf("PERIMETRO DEL ROMBOIDE\n\n\n");
    
    // Solicitar al usuario que ingrese la base del Romboide
    printf("Ingrese La Base del Romboide: \n");
    scanf("%f", &base);
    
    printf("\n");
    
    // Solicitar al usuario que ingrese la lado del Romboide
    printf("Ingrese La Lado del Romboide: \n");
    scanf("%f", &lado);
    
    // Calcular el perimetro del Romboide
    perimetro = (base + lado) * 2;
    
    printf("\n\n");
    
    // Mostrar el resultado
    printf("El Perimetro del Romboide es: %.2f\n\n\n\n\n", perimetro);
    
    printf("25/06/2024\n");
    printf("David Salazar Gonzalez\n");
    printf("Willie Anthony");
    
    return 0;
}
