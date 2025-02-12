#include <iostream>
#include <vector >
using namespace std;

int main()
{
    struct carro {
    string modelo;
    int anio;
    float precio;
    char color ;

    };

    vector <carro> carros ;
    int ncarros;
    cout << " NUMERO DE CARRO " << endl;
    cin >> ncarros;
    for (int i = 0 ; i < ncarros; i++ )
{
    carro automovil;
    cout <<" INGRESE EL MODELO " <<endl;
    cin >> automovil.modelo;
    cout <<" INGRESE EL AÑO DEL MODELO " <<endl;
    cin >> automovil.anio;
    cout <<" INGRESE LA INICIAL DEL COLOR DEL CARRO " <<endl;
    cin >> automovil.color;
    carros.push_back(automovil);

    for (int i=0 ;i < carros.size();i++)
    {
    cout<< " MODELO "<< carros [i].modelo<<endl;
    cout<< " MODELO "<< carros [i].anio<<endl;
    cout<< " MODELO "<< carros [i].precio<<endl;
    cout<< " MODELO "<< carros [i].color<<endl;

    }
}
}



