#include <iostream>
#include <string.h>

using namespace std;

struct Empleado {
    string nombre;
    float salario;
};

int main()
{
    int n;
    cout << "Digite la cantidad de empleados que quiere registar: "; 
    cin >> n;

    Empleado emp[n];
    float mayor = -1, menor = 999999;
    int posMayor, posMenor;

    for (int i = 0; i < n; i++) {
        cout << "Digite el nombre del empleado " << i+1 << ": ";
        getline(cin, emp[i].nombre);
        getline(cin, emp[i].nombre);

        cout << "Digite el salario del empleado " << i+1 << ": ";
        cin >> emp[i].salario;
        cout << endl;

        if (emp[i].salario > mayor) {
            mayor = emp[i].salario;
            posMayor = i;
        }

        if (emp[i].salario < menor) {
            menor = emp[i].salario;
            posMenor = i;
        }
    }

    cout << "\nDatos del empleado con menor salario: " << endl;
    cout << "Nombre: " << emp[posMenor].nombre << endl;
    cout << "Salario: " << emp[posMenor].salario << endl;

    cout << "\nDatos del empleado con mayor salario: " << endl;
    cout << "Nombre: " << emp[posMayor].nombre << endl;
    cout << "Salario: " << emp[posMayor].salario << endl;

    return 0;
}