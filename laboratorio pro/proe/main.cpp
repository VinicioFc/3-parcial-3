#include <iostream>
#include <vector>
#include <string>
//////////////////////////////////////////////////////
#include "C:\Users\pc\OneDrive\clara\OneDrive\Escritorio\laboratorio pro\libreria\Actualizar pago _vinicio.h"
#include "C:\Users\pc\OneDrive\clara\OneDrive\Escritorio\laboratorio pro\libreria\Cosultar_codigo_Vinicio.h"
#include "C:\Users\pc\OneDrive\clara\OneDrive\Escritorio\laboratorio pro\libreria\Crear_Vinicio.h"
#include "C:\Users\pc\OneDrive\clara\OneDrive\Escritorio\laboratorio pro\libreria\Eliminar pago Vinicio.h"
#include "C:\Users\pc\OneDrive\clara\OneDrive\Escritorio\laboratorio pro\libreria\Mes_Vinicio.h"
#include "C:\Users\pc\OneDrive\clara\OneDrive\Escritorio\laboratorio pro\libreria\Mostrar_Vinicio.h"

/////////////////////////////////////////////////////

using namespace std;

int main() {
    vector<Pago> info;
    int opcion;

    do {
        cout << "MENU:" << endl;
        cout << "1. REGISTRAR UN PAGO" << endl;
        cout << "2. CONSULTAR PAGO POR MES" << endl;
        cout << "3. CONSULTAR PAGO POR CODIGO" << endl;
        cout << "4. LISTA DE PAGOS" << endl;
        cout << "5. ACTUALIZAR UN PAGO" << endl;
        cout << "6. ELIMINAR PAGO" << endl;
        cout << "7. SALIR" << endl;
        cout << "INGRESE LA OPCION DESEADA: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                agregarPago_vinicio(info);
                break;
            case 2:
                consultarPorMes(info);
                break;
            case 3:
                consultarPorCodigo_vinicio(info);
                break;
            case 4:
                mostrarPagos_vinicio(info);
                break;
            case 5:
                actualizarPago(info);
                break;
            case 6:
                eliminarPago(info);
                break;
            case 7:
                cout << "SALIENDO..." << endl;
                break;
            default:
                cout << "OPCION NO VALIDA. INGRESE UN VALOR VALIDO." << endl;
        }
    } while (opcion != 7);

    return 0;
}
