// Escribir un programa que almacene los enteros 50 y 100 en variables
// y almacene su suma en una variable llamada 'total'. Mostrar dicho
// valor en la pantalla.

#include <iostream>

int main()
{
    int integer1 = 50;
    int integer2 = 100;
    int total;
    
    total = integer1 + integer2; // Computa la suma de los enteros
    std::cout << "La suma total es: " << total << std::endl;
    return 0;
}
