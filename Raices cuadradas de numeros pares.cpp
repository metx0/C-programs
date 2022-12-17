//Programa que calcule las raíces cuadradas de los números pares comprendido entre 1 y 40.

#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
    for (int i = 1; i <= 40; i++) {
        if (i % 2 == 0) {
            double raiz = sqrt(i);
            cout << raiz << endl;
        }
    }

    return 0;
}

