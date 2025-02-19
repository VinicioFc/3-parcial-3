#include <iostream>
#include <string>

using namespace std;

class Motor {
private:
int potencia;
int velocidad;
string estado;
const int MAX_VELOCIDAD = 5000;

public:
Motor(int p) : potencia(p), velocidad(0), estado("Apagado") {}

void encender() {
    estado = "Encendido";
    cout << "Motor encendido " <<endl;
}

void apagar() {
    estado = "Apagado";
    velocidad = 0;
    cout << "Motor apagado " <<endl;
}

void ajustarVelocidad(int rpm)
{
    if (estado == "Encendido")
    {
    if (rpm > MAX_VELOCIDAD)
        {
            velocidad = MAX_VELOCIDAD;
            cout << "Velocidad limitada a " << MAX_VELOCIDAD << " rpm " <<endl;
        }
    else
        {
            velocidad = rpm;
            cout << "Velocidad ajustada a " << velocidad << " rpm  " <<endl;
        }
    }
    else {
        cout << "No se puede ajustar la velocidad. El motor está apagado " <<endl;
    }
}

void mostrarEstado()
{
    cout << "Estado: " << estado << ", Velocidad: " << velocidad << " rpm " <<endl;

    cout << " --------------------------------------------------------- " <<endl;
}

};

int main()
{
int potencia, rpm;
cout << "Ingrese la potencia del motor:  " <<endl;
cin >> potencia;

Motor motor(potencia);
motor.mostrarEstado();

cout << "¿Desea encender el motor? (s/n): " <<endl;
char opcion;
cin >> opcion;
if (opcion == 's' || opcion == 'S')
{
    motor.encender();
}

cout << "Ingrese la velocidad deseada (rpm):  " <<endl;
cin >> rpm;
motor.ajustarVelocidad(rpm);
motor.mostrarEstado();

cout << "¿ Desea apagar el motor? (s/n):  " <<endl;
cin >> opcion;
if (opcion == 's' || opcion == 'S')
{
    motor.apagar();
}
motor.mostrarEstado();

return 0;

}
