/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;

class Alumno {
public:
    string nombre;
    string apellidoP;
    string apellidoM;
    string fechaNaci;
    string matricula;
    int calificacion;
    int edad;

    // Constructor
    Alumno(string x, string y, string e, string c, string d) {
        nombre = x;
        apellidoP = y;
        apellidoM = e;
        fechaNaci = c;
        matricula = d;
    }

    // Metodo para calcular edad
    void calcularEdad(int anioNacimiento) {
        int anioActual = 2025; // AÃ±o actual
        edad = anioActual - anioNacimiento;
        cout << "Tu edad es " << edad << " añios." << endl;
    }

    // Metodo para establecer calificacion
    void setCalificacion(int calif) {
        calificacion = calif;
    }

    // Metodo para mostrar datos
    void mostrarDatos() {
        cout << "Nombre: " << nombre << " " << apellidoP << " " << apellidoM << endl;
        cout << "Fecha de Nacimiento: " << fechaNaci << endl;
        cout << "Matricula: " << matricula << endl;
        cout << "Calificacion: " << calificacion << endl;
    }
};

int main() {
    Alumno alumno("Joceline", "Manzo", "Jimenez", "22/11/2006", "A3456");
    alumno.setCalificacion(8);
    
    int anioNacimiento;
    cout << "Ingresa tu año de nacimiento: ";
    cin >> anioNacimiento;

    alumno.calcularEdad(anioNacimiento);
    alumno.mostrarDatos();

    return 0;
}