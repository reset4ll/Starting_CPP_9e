// Escribir un programa que calcule las ganancias de una organización
// de estudiantes con sus ventas de barritas de caramelo. 
// El programa debería de pedir al usuario que introduzca el número 
// de barritas de caramelo asi como su precio, computar y mostrar las
// ganancias totales.

#include <iostream>

int main()
{
    
    float caramelo, precio_caramelo, ganancias;

    // Entrada de datos
    std::cout << "Introduzca el número de caramelos y su precio: ";
    std::cin >> caramelo >> precio_caramelo;
    ganancias = caramelo * precio_caramelo; // Computa las ganancias

    // Muestra las ganancias totales
    std::cout << "Las ganancias por ventas de caramelos son: " << ganancias << std::endl;

    return 0;
}
