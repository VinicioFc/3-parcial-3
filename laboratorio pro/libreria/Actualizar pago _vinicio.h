#ifndef ACTUALIZAR_PAGO_VINICIO_H_INCLUDED
#define ACTUALIZAR_PAGO_VINICIO_H_INCLUDED

#include <iostream>
#include <vector>
#include <cstdlib>
#include "Crear_Vinicio.h"

using namespace std;

void actualizarPago(vector<Pago>& info) {
    int codigo;
    cout << "INGRESE EL CODIGO DEL PAGO PARA ACTUALIZAR: " << endl;
    cin >> codigo;
    cin.ignore();

    bool encontrado = false;
    for (size_t i = 0; i < info.size(); i++) {
        if (info[i].codigo == codigo)
            {
            cout << "NUEVO NOMBRE: " <<endl;
            getline(cin, info[i].nombre);
            cout << "NUEVO MES: " <<endl;
            getline(cin, info[i].mes);
            cout << "NUEVO VALOR: " <<endl;
            cin >> info[i].valor;
            cout << "NUEVO NUMERO DE CUENTA: " <<endl;
            getline(cin, info[i].numeroCuenta);

            cout << "같같 PAGO ACTUALIZADO 같같" << endl;
            encontrado = true;
            break;
        }
    }
    if (!encontrado) {
        cout << "PAGO NO ENCONTRADO" << endl;
    }
}

#endif // ACTUALIZAR_PAGO_VINICIO_H_INCLUDED
