#include <iostream>
using namespace std;

struct persona {
    string nombre;
    string apellido;
    int edad;
    float altura;
    string genero;

};
int main()
{

    persona P1;
    P1.nombre = "Jenny";
    P1.apellido = "Vallejo";
    P1.edad=19;
    P1.altura=1.47;
    P1.genero="Femenino";

    persona P2;
    P2.nombre = "Melani";
    P2.apellido = "Chasi";
    P2.edad=19;
    P2.altura=1.54;
    P2.genero="Femenino";

    cout << "NOMBRE : " <<P1.nombre << "APELLIDO : " <<  P1.apellido << " EDAD: " << " ALTURA: " << P1.edad << " Genero: "<<endl;
    cout << "NOMBRE : " <<P1.nombre << "APELLIDO : " <<  P1.apellido << " EDAD: " << " ALTURA: " << P1.edad << " Genero: "<<endl;


    return 0;
}
