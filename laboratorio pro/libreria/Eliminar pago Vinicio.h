#ifndef ELIMINAR_PAGO_VINICIO_H_INCLUDED
#define ELIMINAR_PAGO_VINICIO_H_INCLUDED

#include <iostream>
#include <vector>
#include <cstdlib>
#include "Crear_Vinicio.h"
using namespace std;

void eliminarPago(vector<Pago>& info) {
    int codigo;
    cout << "INGRESE EL CODIGO DEL PAGO QUE DESEA ELIMINAR: " << endl;
    cin >> codigo;

    for (auto it = info.begin(); it != info.end(); ++it) {
        if (it->codigo == codigo) {
            info.erase(it);
            cout << "PAGO ELIMINADO " << endl;
            return;
        }
    }
    cout << " PAGO NO ENCONTRADO " << endl;
}

#endif // ELIMINAR_PAGO_VINICIO_H_INCLUDED
