#include <iostream>

using namespace std;

struct Persona
{
    char nombre[20];
    int edad;
} per1;

int main() 
{
    cout << "Digite el nombre: ";
    cin.getline(per1.nombre, 20);

    cout << "Digite la edad: ";
    cin >> per1.edad;

    cout << "Tu nombre es: " << per1.nombre << endl;
    cout << "Tu edad es: " << per1.edad;

    return 0;
}

