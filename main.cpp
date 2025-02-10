#include <iostream>
using namespace std;

struct nombre {
    string nombre;
    int edad;


    void mostrarDatos() {
        cout << "NOMBRE : " << nombre << " EDAD : " << edad << " AÑOS" << endl;
    }
};

int main() {

    // Declarar un objeto de tipo 'nombre'

    nombre P1;

    // Asignar valores al objeto

    P1.nombre = "Vinicio";
    P1.edad = 21;

    // Mostrar los datos

    P1.mostrarDatos();

    return 0;
}
