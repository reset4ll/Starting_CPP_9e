// Escribir un programa que calcule el gasto en gasolina de un vehículo.
// El programa debe pedir al usuario la cantidad de galones de combustible
// que le caben al vehículo y el número de millas que éste puede recorrer
// con el tanque lleno. Se debería de calcular y mostrar el número de
// millas por galón que el coche gasta.


#include <iostream>
#include <iomanip>

int main()
{
    double deposito, trayecto, resultado;

    std::cout << "Introduzca el número de galones que le caben al vehículo: ";
    std::cin >> deposito;
    std::cout << '\n';
    std::cout << "Introduzca el trayecto con el depósito lleno: ";
    std::cin >> trayecto;

    resultado = (trayecto / deposito);  // millas x galón

    std::cout << '\n';
    std::cout << "El número de millas/galon es: " << std::setprecision(3) \
              << resultado << '\n';
    return 0;
}
