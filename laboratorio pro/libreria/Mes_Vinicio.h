#ifndef MES_VINICIO_H_INCLUDED
#define MES_VINICIO_H_INCLUDED

#include <iostream>
#include <vector>
#include <cstdlib>
#include "Crear_Vinicio.h"
using namespace std;

void consultarPorMes(const vector<Pago>& info)
{
    string mes;
    cout << "INGRESE EL MES A CONSULTAR: " <<endl;
    getline(cin, mes);

    double total = 0;
    for (size_t i = 0; i < info.size(); i++) {
        if (info[i].mes == mes) {
            total = total + info[i].valor;
        }
    }
    cout << "PAGO TOTAL EN " << mes << ": " << total << endl;
}

#endif // MES_VINICIO_H_INCLUDED
