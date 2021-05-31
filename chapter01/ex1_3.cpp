// Escribir un programa que calcule cuanto gastó un centro comercial de
// jardines para fabricar una parcela de jardín. El programa debería de
// pedir al usuario que introduzca el coste del terreno, las semillas y
// el vallado para su computación y visualización de la cantidad total
// gastada.


#include <iostream>

int main()
{
    float terreno, semillas, vallado, total;

    std::cout << "Introduzca el coste del terreno, coste de las semillas " << std::endl;
    std::cout << "asi como el coste del vallado: ";

    // Introduce datos pedidos
    std::cin >> terreno >> semillas >> vallado;
    total = terreno + semillas + vallado;

    // Muestra el coste total
    std::cout << "El coste total de la parcela es de: " << total << "€" << std::endl;

    return 0;
}
