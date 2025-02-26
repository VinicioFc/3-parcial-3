#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream Archivo_ESCRITURA_Vinicio ("Dato_Vinicio.txt");
        if (!Archivo_ESCRITURA_Vinicio)
        {

        cout << " ERROR AL ABRIR EL ARCHIVO PARA ESCRIBIR " <<endl;
        return 1;

        }

        getlin(cin,Archivo_ESCRITURA_Vinicio)

        //Archivo_ESCRITURA_Vinicio << " HOLA ESTO ES UN ARCHIVO DE TEXTO EN C++ "   << endl;
        //Archivo_ESCRITURA_Vinicio << " SE PUEDEN ESCRIBIR VARIAS LINEAS AQUI C++ " << endl;
        getlin(cin,Archivo_ESCRITURA_Vinicio)
        Archivo_ESCRITURA_Vinicio.close();

        ifstream Archivo_LECTURA_Vinicio ("Dato_Vinicio.txt");
        if (!Archivo_LECTURA_Vinicio)
        {
        cout << "ERROR AL ABRIR EL ARCHIVO PARA LEER " << endl;
        return 1;
        }
        string linea;
        cout << " CONTENIDO DEL ARCHIVO " << endl;
        while (getline (Archivo_LECTURA_Vinicio ,linea))
        {
        cout << " LINEA " <<endl;
        }
        Archivo_LECTURA_Vinicio.close();

        return 0;

}
