/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string> // Incluir la biblioteca para usar std::string

class MyClass {       // La clase
  public:             // Especificador de acceso
    int myNum;        // Atributo (variable int)
    std::string myString;  // Atributo (variable std::string)
};

int main() {
  MyClass myObj;  // Crear un objeto de MyClass

  // Acceder a los atributos y asignar valores
  myObj.myNum = 18; 
  myObj.myString = "Some text";

  // Imprimir los valores de los atributos
  std::cout << myObj.myNum << "\n";
  std::cout << myObj.myString;
  return 0;
}