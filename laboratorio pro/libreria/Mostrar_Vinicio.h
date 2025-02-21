#ifndef MOSTRAR_VINICIO_H_INCLUDED
#define MOSTRAR_VINICIO_H_INCLUDED

#include <iostream>
#include <vector>
#include <cstdlib>
#include "Crear_Vinicio.h"
using namespace std;

void mostrarPagos_vinicio(const vector<Pago>& info)
{
    cout << "LISTADO DE PAGOS:" << endl;
    for (size_t i = 0; i < info.size(); i++) {
        cout << "CODIGO: " << info[i].codigo
             << "  NOMBRE: " << info[i].nombre
             << "  MES: " << info[i].mes
             << "  VALOR: " << info[i].valor
             << "  CUENTA: " << info[i].numeroCuenta << endl;
    }
}

#endif // MOSTRAR_VINICIO_H_INCLUDED
