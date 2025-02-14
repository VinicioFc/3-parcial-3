#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

struct carro{
string modelo,marca;
int anio;
float precio;
char color;
};
int main()
{
    vector<carro> carros;
    int ncarros;
    cout<<"Ingrese el numero de carros"<<endl;
    cin>>ncarros;

    for (int i=0;i<ncarros;i++){
            carro autos;

        cout<<"Ingrese el modelo"<<"["<<i<<"]"<<endl;
        cin>>autos.modelo;
        cout<<"Ingrese el marca"<<"["<<i<<"]"<<endl;
        cin>>autos.marca;
        cout<<"Ingrese el anio"<<"["<<i<<"]"<<endl;
        cin>>autos.anio;
        cout<<"Ingrese el precio"<<"["<<i<<"]"<<endl;
        cin>>autos.precio;
        cout<<"Ingrese el color"<<"["<<i<<"]"<<endl;
        cin>>autos.color;
        carros.push_back(autos);
        system("cls");

    }
    for (int i=0;i<carros.size();i++){

        cout<<"| MODELO: "<<carros[i].modelo<<" |"<<endl;
        cout<<"| MARCA: "<<carros[i].marca<<" |"<<endl;
        cout<<"| ANIO: "<<carros[i].anio<<" |"<<endl;
        cout<<"| PRECIO: "<<carros[i].precio<<" |"<<endl;
        cout<<"| COLOR: "<<carros[i].color<<" |"<<endl;
        cout<<"| SIGUIENTE CARRO| "<<endl;
        cout<<"        |||"<<endl;
        cout<<"        |||"<<endl;
        cout<<"        |||"<<endl;
        cout<<"        |||"<<endl;;
        cout<<"        ||"<<endl;
    }
    return 0;
}
