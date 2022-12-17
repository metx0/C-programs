#include <iostream>
#include <string.h>

using namespace std;

struct Corredor {
    string nombre;
    int edad;
    string sexo;
    string club;
    string categoria;
} c1;

int main()
{
    cout << "Digite el nombre del corredor: ";
    getline(cin, c1.nombre);

    cout << "Digite la edad: ";
    cin >> c1.edad;

    cout << "Digite el sexo: ";
    getline(cin, c1.sexo);
    getline(cin, c1.sexo);

    cout << "Digite el club: ";
    getline(cin, c1.club);

    int edad = c1.edad;

    if (edad <= 18)
        c1.categoria = "Juvenil";
    else if (edad <= 40)
        c1.categoria = "Senior";
    else
        c1.categoria = "Veterano";

    cout << "\nDatos del corredor: ";
    cout << "Nombre: " << c1.nombre;
    cout << "Edad: " << c1.edad;
    cout << "Sexo: " << c1.sexo;
    cout << "Club: " << c1.club;
    cout << "Categoria: " << c1.categoria;

    return 0;
}