/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class Personaje {
public:
    string nombre;
    string rango;
    int salud;
    int ataque;
    int defensa;
    int vidas;

    Personaje(string n, string r, int s, int a, int d, int v) {
        nombre = n;
        rango = r;
        salud = s;
        ataque = a;
        defensa = d;
        vidas = v;
    }

    void atacar(Personaje &enemigo) {
        int danio = ataque - enemigo.defensa;
        if (danio < 0) danio = 0;
        enemigo.salud -= danio;
        cout << nombre << " ataca a " << enemigo.nombre << " y le causa " << danio << " de daño.\n";
    }

    void defender() {
        defensa += 5;
        cout << nombre << " se defiende y aumenta su defensa.\n";
    }

    void mostrarEstado() {
        cout << nombre << " (Rango: " << rango << ") - Salud: " << salud << ", Vidas: " << vidas << "\n";
    }

    bool estaVivo() {
        return salud > 0;
    }
};

int main() {
    srand(time(0));

    //  personajes Pikachu y Charizard con mas salud y vidas
    Personaje pikachu("Pikachu", "Electrico", 200, 30, 10, 5);
    Personaje charizard("Charizard", "Fuego", 250, 40, 15, 4);

    while (pikachu.estaVivo() && charizard.estaVivo()) {
        int turno = rand() % 2;
        if (turno == 0) {
            pikachu.atacar(charizard);
        } else {
            charizard.atacar(pikachu);
        }
        pikachu.mostrarEstado();
        charizard.mostrarEstado();

        if (!charizard.estaVivo()) {
            cout << "Pikachu es el vencedor!\n";
            break;
        }
        if (!pikachu.estaVivo()) {
            cout << "Charizard es el vencedor!\n";
            break;
        }
    }

    return 0;
}