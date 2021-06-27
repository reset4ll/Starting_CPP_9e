// Escribir un programa que calcule el impuesto y propina para una comida
// con un coste de $44,50. El impuesto debería ser el 6,75% de dicho coste 
// y la propina debería ser del 15% sobre el total después de añadir el
// impuesto. Muestre en pantalla el coste de la comida, importe del 
// impuesto, importe de la propina y el total de la factura.

#include <iostream>

int main()
{
    const float meal_tax = 6.75; // Impuesto
    const float meat_tip = 15; // Propina


    float meal_cost = 44.50; // Coste inicial de la comida
    float taxed_meal, tax_amount, tip_amount, total_bill;

    // Calcula el impuesto de la comida sobre $44,50
    tax_amount = (meal_cost * meal_tax) / 100;

    // Calcula el precio de la comida con impuestos
    taxed_meal = meal_cost + tax_amount;

    // Calcula la propina
    tip_amount = (taxed_meal * 15) / 100;
    
    // Calcula la factura total
    total_bill = taxed_meal + tip_amount;

    // Muestra resultados
    std::cout << "El impuesto por la comida es: $" << tax_amount << std::endl;
    std::cout << "El coste de la comida es: $" << taxed_meal << std::endl;
    std::cout << "La propina de la comida es: $" << tip_amount << std::endl;
    std::cout << "El importe total de la factura es: $" << total_bill << std::endl;

    return 0;
}
