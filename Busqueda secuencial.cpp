//Busqueda secuencial en un arreglo.

#include <iostream>

using namespace std;

int main() 
{
    int numeros[] = {2, 10, 23, 8, 0};
    int num;

    cout << "Digite el numero a buscar en el arreglo: "; 
    cin >> num;

    //Comprobar si "num" está en el arreglo "números" y, de ser así, calcular el índice en el que se encuentra.

    int i = 0;
    bool cond = false;

    while (cond == false && i < 5) {
        if (numeros[i] == num) {
            cond = true;
        }

        i++;
    }

    if (cond)
        cout << "El dato se encuentra en el arreglo, en el indice " << i-1;
    else 
        cout << "El dato no se encuentra en el arreglo";

    return 0;
}