// Escribir un programa que calcule cuanto gastó un pequeño equipo de
// baseball en bolas para el juego. El programa debería de preguntar
// al usuario cuantas bolas adquirió y el coste por unidad de las 
// mismas, computar y mostrar la cantidad total gastada en adquirirlas.

#include <iostream>

int main()
{
   int bolas;
   float precio, total;

   std::cout << "Introduzca el numero de bolas y el precio por unidad: ";
   std::cin >> bolas >> precio;
   total = bolas * precio; // Calcula el total

   // Muestra el total gastado
   std::cout << "El gasto total de bolas fue de: " << total << "€"<< std::endl;
   
   return 0;
}

