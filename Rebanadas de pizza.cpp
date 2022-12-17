#include <iostream>

using namespace std;

int main() 
{
    int numPersonas, numPizzas;

    cout << "Introduzca el numero de personas: ";
    cin >> numPersonas;

    cout << "Introduzca el numero de pizzas encargadas: ";
    cin >> numPizzas;

    int numRebanadas = numPizzas * 8;

    cout << "Las rebanadas por persona son: " << numRebanadas / numPersonas << endl;

    int rebSobrantes = numRebanadas % numPersonas;

    if (rebSobrantes != 0)
        cout << "Numero de rebanadas sobrantes: " << rebSobrantes;

    return 0;
}

