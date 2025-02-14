#include <iostream>
#include <vector>

using namespace std;

struct Computadora   {
  string  Grafica ;
  int Ram;
  string Marca;
  int Almacenamiento;
  char Procesador;
};
int main()
{
    vector <Computadora> datos;
    int numero;
    cout << " INGRESE EL NUMERO DE COMPUTADORA " << endl;
    cin >> numero;
    for ( int i=0 ; i < numero ;i++)
    {
        Computadora Al ;
        cout << " INGRESE LA MARCA DE LA COMPUTADORA "<<endl;
        cin  >> Al.Marca;
        cout << " INGRESE EL PROCESADOR "  <<endl;
        cin  >> Al.Procesador;
        cout << " INGRESE EL ALMACENAMIENTO"  <<endl;
        cin  >> Al.Almacenamiento;
        cout << " INGRESE LA RAM " <<endl;
        cin  >> Al.Ram;
        cout << " INGRESE LA GRAFICA " <<endl;
        cin  >> Al.Grafica;

    datos.push_back(Al);
    system ("cls");
    }
    cout << "-----------------------------------------------------";
    for ( int i=0 ; i < datos.size() ;i++)
    {
    cout << " MARCA : " <<datos[i].Marca << endl;
    cout << " PROCESADOR: " <<datos[i].Procesador << endl;
    cout << " ALMACENAMIENTO : " <<datos[i].Almacenamiento << endl;
    cout << " RAM : " <<datos[i].Ram << endl;
    cout << " GRAFICA : " <<datos[i].Grafica << endl;
    }

    for ( int i=0 ; i < datos.size() ;i++)
    {
    if (datos[i].Grafica == " Acer ")
    {
        cout << " SE ENCONTRO :" << endl;
    }
    else
    {
        cout << " NO SE ENCONTRO :" << endl;
    }
    }
}
