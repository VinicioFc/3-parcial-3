#ifndef CONSULTAR_CODIGO_VINICIO_H_INCLUDED
#define CONSULTAR_CODIGO_VINICIO_H_INCLUDED

#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
using namespace std;

void consultarPorCodigo_vinicio( vector<Pago>& info) {
    int codigo;
    cout << "INGRESE EL CODIGO DEL USUARIO: " << endl;
    cin >> codigo;


    bool encontrado = false;
    for (size_t i = 0; i < info.size(); i++) {
        if (info[i].codigo == codigo) {
            cout << "MES: " << info[i].mes << "  VALOR: " << info[i].valor << endl;
            encontrado = true;
        }
    }
    if (!encontrado) {
        cout << "NO SE HA ENCONTRADO PAGOS PARA EL CODIGO INGRESADO" << endl;
    }
}

#endif // CONSULTAR_CODIGO_VINICIO_H_INCLUDED
