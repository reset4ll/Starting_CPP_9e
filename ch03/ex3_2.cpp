// En un estadio existen tres categorías asientos: la clase A cuesta $15, la clase B $12
// y la clase C $9. Escribir un programa que pida cuántos billetes de cada clase fueron
// vendidos y muestre la cantidad de ingresos generados por dichas ventas.

#include <iostream>
#include <iomanip>

int main()
{
    const double costA = 15.00;
    const double costB = 12.00;
    const double costC = 9.00;
    double total_claseA, total_claseB, total_claseC, ingresos;
    int claseA, claseB, claseC;

    std::cout << "Introduzca la cantidad de billetes de la clase A vendidos: ";
    std::cin >> claseA;
    total_claseA = claseA * costA;

    std::cout << "Introduzca la cantidad de billetes de la clase B vendidos: ";
    std::cin >> claseB;
    total_claseB = claseB * costB;

    std::cout << "Introduzca la cantidad de billetes de la clase C vendidos: ";
    std::cin >> claseC;
    total_claseC = claseC * costC;

    std::cout << '\n';
    ingresos = total_claseA + total_claseB + total_claseC;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "El total de ingresos fueron de: $" << ingresos << '\n';

    std::cout << "Desglose: \n";
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Clase A: " << std::setw(3) \
              << "Ingresos: $" << total_claseA << std::setw(7) << '\n';
    std::cout << "Clase B: " << std::setw(3) \
              << "Ingresos: $" << total_claseB << std::setw(7) << '\n';
    std::cout << "Clase C: " << std::setw(3) \
              << "Ingresos: $" << total_claseC << std::setw(7) << '\n';

    return 0;
}

