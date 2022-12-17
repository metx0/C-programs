    #include <iostream>

    using namespace std;

    int main()
    {
        int numeros[] = {1, 3, 7, 9, 12, 20, 36};
        int dato;

        cout << "Digite el numero a buscar en el arreglo: ";
        cin >> dato;

        int inf, mitad, sup;
        bool cond = false;
        
        inf = 0;
        sup = 7;
        int i = 0;

        while (inf <= sup && i < 7) {
            mitad = (inf + sup) / 2;

            if (numeros[mitad] == dato) {
                cond = true;
                break;
            }

            if (dato < numeros[mitad]) {
                sup = mitad;
                mitad = (inf + sup) / 2;
            }

            if (dato > numeros[mitad]) {
                inf = mitad;
                mitad = (inf + sup) / 2;
            }

            i++;
        }

        if (cond)
            cout << "El valor se encuentra en el arreglo en el indice " << mitad;
        else {
            cout << "El valor no se encuentra en el arreglo";
        }

        return 0;
    }