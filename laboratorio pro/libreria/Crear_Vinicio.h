
#ifndef CREAR_VINICIO_H_INCLUDED
#define CREAR_VINICIO_H_INCLUDED

#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

struct Pago {
    int codigo;
    string nombre;
    string mes;
    double valor;
    string numeroCuenta;
};

void agregarPago_vinicio(vector<Pago>& info)
{
    int n;
    cout << "INGRESE EL NUMERO DE PERSONAS: ";
    cin >> n;
   cin.ignore();
    for (int i = 0; i < n; i++) {
        Pago nuevoPago;
        cout << "INGRESE UN CODIGO: " <<endl;
        cin >> nuevoPago.codigo;

        cout << "INGRESE NOMBRE: " <<endl;
        cin >> nuevoPago.nombre ;

        cout << "INGRESE MES: " <<endl;
        cin  >> nuevoPago.mes ;

        cout << "INGRESE VALOR DE PAGO: " <<endl;
        cin >> nuevoPago.valor ;


        cout << "INGRESE NUMERO DE CUENTA: " <<endl;
        cin >> nuevoPago.numeroCuenta ;

         system ("cls");
        info.push_back(nuevoPago);
    }
}
#endif // CREAR_VINICIO_H_INCLUDED
