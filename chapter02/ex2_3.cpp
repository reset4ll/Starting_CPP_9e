// Escribir un programa que calcule el impuesto total sobre una venta
// de $95. Asumir que el impuesto estatal es del 6,5% y el de la 
// ciudad es del 2%. Mostrar el precio de la venta, el impuesto estatal
// asi como el impuesto de la ciudad y el total de impuestos en la 
// pantalla.

#include <iostream>

int main()
{
    const float state_tax = 6.5; // Impuesto estatal
    const float county_tax = 2.0; // Impuesto local
    float purchase = 95.0; // Precio adquisición
    float purchase_price, total_tax, amount_tax;
    
    // Impuestos locales
    total_tax = state_tax + county_tax; 

    // Cantidad en impuestos
    amount_tax = (purchase * total_tax) / 100;

    // Precio venta
    purchase_price = amount_tax + purchase;

    std::cout << "El impuesto estatal es: " << state_tax << "%";
    std::cout << std:: endl;
    std::cout << "El impuesto local es: " << county_tax << "%";
    std::cout << std:: endl;
    std::cout << "La cantidad en impuestos es: $" << amount_tax << std::endl;
    std::cout << "El precio final de la adquisición es: $" << purchase_price;
    std::cout << std::endl;

    return 0;
}
