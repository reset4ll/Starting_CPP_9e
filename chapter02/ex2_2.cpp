// La división de ventas de la costa este genera el 58% del total de
// ventas. Basado en ese porcentaje, escribir y programa que prediga
// cuanto generará dicha división si la compañía obtiene $8.6 million
// de ventas este año. Mostrar el resultado en la pantalla.

#include <iostream>

int main()
{
    const float porcentaje = 58.0;
    float ventas = 8.6e+06; // $8600000
    float ventas_CE;

    ventas_CE = (ventas * porcentaje) / 100; // Cálculo de ventas_CE
    std::cout << "La division de la costa este ha generado: $";
    std::cout << ventas_CE << std::endl;

    return 0;
}

