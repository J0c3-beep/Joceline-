/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string> // Incluir la biblioteca para usar std::string

// Crear una clase Car con algunos atributos
class Car {
  public:
    std::string brand;   // Usar std::string
    std::string model;   // Usar std::string
    int year;
};

int main() {
  // Crear un objeto de Car
  Car carObj1;
  carObj1.brand = "BMW";
  carObj1.model = "X5";
  carObj1.year = 1999;

  // Crear otro objeto de Car
  Car carObj2;
  carObj2.brand = "Ford";
  carObj2.model = "Mustang";
  carObj2.year = 1969;

  // Imprimir los valores de los atributos
  std::cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  std::cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";

  return 0;
}