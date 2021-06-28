//    :: Una compañía de ventas debe registrar mensualmente el listado de sus
// impuestos sobre ventas y que refleje la cantidad total de dichos impuestos.
// Escribir un programa que pida el mes, el año y la cantidad total de dinero
// registrada, es decir, ventas más impuestos sobre ventas. Asumir que el
// impuesto sobre ventas es del 6% en total. ::

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string month, year;
    const double k = 1.06;
    double total_recogido, ventas;
    double impuesto_regional;
    double impuesto_estatal;
    double impuesto_total;

    cout << "Introduzca el mes y el año: ";
    cin >> month >> year;

    cout << "\nIntroduzca la cantidad total de dinero recogido: ";
    cin >> total_recogido;

    // Cálculo de las ventas sobre el 6% => ventas = total / 1.06
    ventas = total_recogido / k;

    // Cálculo del impuesto regional al 2%
    impuesto_regional = (ventas * 2) / 100;

    // Cálculo del impuesto estatal al 6%
    impuesto_estatal = (ventas * 4) / 100;

    // Cáculo del total de impuestos
    impuesto_total = impuesto_regional + impuesto_estatal;

    // Saca los resultados en pantalla:
    cout << "\nMonth: " << month << " " << year << left << '\n';
    cout << "------------------";

    cout << fixed << setprecision(2);
    cout << "\nTotal recogido: " << setw(7) << "      $ " \
         << total_recogido << right << '\n';
    cout << "Ventas: " << setw(16) << "$ " << setw(4) \
         << ventas << right << '\n';
    cout << "Impuesto regional: " << setw(5) <<"$ " << "  " \
         << impuesto_regional << right << '\n';
    cout << "Impuesto estatal: " << setw(6) << "$ " << " " \
         << impuesto_estatal << right << '\n';
    cout << "Impuesto total: " << setw(8) << "$ " << " " \
         << impuesto_total << right << '\n';

    return 0;
}
