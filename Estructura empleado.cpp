#include <iostream>
#include <string.h>

using namespace std;

struct info_direccion {
    char direccion[30];
    char estado[20];
    char municipio[20];
};

struct empleado {
    char nombre[20];
    struct info_direccion dir_empleado;
    double salario;
} empleados[2];

int main() 
{
    for (int i = 0; i < 2; i++) {
        fflush(stdin); //Vaciar el buffer para poder digitar todos los valores.

        cout << "Digite el nombre del empleado: ";
        cin.getline(empleados[i].nombre, 20);

        cout << "Digite la direccion del empleado: ";
        cin.getline(empleados[i].dir_empleado.direccion, 30);

        cout << "Digite el estado donde vive el empleado: ";
        cin.getline(empleados[i].dir_empleado.estado, 20);

        cout << "Digite el municipio donde vive el empleado: ";
        cin.getline(empleados[i].dir_empleado.municipio, 20);

        cout << "Digite el salario del empleado: ";
        cin >> empleados[i].salario;
    }

    return 0;
}

