// Una sala de cine solo obtiene el 80% de sus beneficios de sus ventas de
// billetes mientras que el 20% restante va al distribuidor. Escribir un programa
// que calcule el beneficio bruto del cine y sus ganacias en una noche.
// El programa debe pedir a usuario el nombre de la película y cuantos
// billetes de adultos y niños fueron vendidos. (El precio de un billete
// de adulto cuesta $10 y de niños $6.

#include <iostream>
#include <string>
#include <iomanip>

int main()
{
    const double precio_adultos = 10.00;
    const double precio_menores = 6.00;
    const int porcentaje_distribuidor = 20;
    float beneficio_bruto, ganancias_netas, distribuidor;
    int billete_adultos, billete_menores;
    float total_adultos, total_menores;

    // Introducción de datos
    std::cout << "\nIntroduzca número de billetes de adultos vendidos: ";
    std::cin >> billete_adultos;
    total_adultos = billete_adultos * precio_adultos;

    std::cout << "\nIntroduzca número de billetes de menores vendidos: ";
    std::cin >> billete_menores;
    total_menores = billete_menores * precio_menores;

    // Cálculos requeridos
    beneficio_bruto = total_adultos + total_menores;
    distribuidor = (beneficio_bruto * porcentaje_distribuidor) / 100;
    ganancias_netas = beneficio_bruto - distribuidor;

    // Muestra resultado en pantalla
    std::string pelicula = "\"Wheels of Fury\"";
    std::cout << "\n*** Desglose:" << '\n' << '\n';

    std::cout << "Nombre de la película: " << std::setw(30) \
              << pelicula << std::setw(28) << '\n';
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Billetes de adultos vendidos: " << std::setw(10) \
              << billete_adultos << std::setw(4) << '\n';
    std::cout << "Billetes de menores vendidos: " << std::setw(10) \
              << billete_menores << std::setw(4) << '\n';
    std::cout << "Beneficios brutos del cine: " << std::setw(10) \
              << "$" << beneficio_bruto << std::setw(7) << '\n';
    std::cout << "Cantidad abonada al distribuidor: " << std::setw(5) \
              << "-$ " << distribuidor << std::setw(7) << '\n';
    std::cout << "Ganancias netas del cine: " << std::setw(12) \
              << "$" << ganancias_netas << std::setw(7) << '\n';

    return 0;
}
