/*Programa que lee el valor del radio y calcula la longitud de la circunferencia, 
el área del círculo y el volumen de la esfera correspondiente a ese radio.*/

#include <iostream>
#include <cmath>

using namespace std;

double pi = M_PI;

double longitudCirc(double);
double areaCirc(double);
double volEsfera(double);

int main() 
{
    double radio;
    cout << "Digite el valor del radio: "; 
    cin >> radio;

    if (radio <= 0) {
        cout << "El valor introducido no es valido" << endl;
        main();
    }

    cout << "La longitud de la circunferencia es: " << longitudCirc(radio) << " unidades" << endl;
    cout << "El area del circulo es: " << areaCirc(radio) << " unidades cuadradas" << endl;
    cout << "El volumen de la esfera es: " << volEsfera(radio) << " unidades cubicas" << endl;

    return 0;
}

double longitudCirc(double radio) {
    double longitud = 2 * radio * pi;
    return longitud;
}

double areaCirc(double radio) {
    double area = (pow(radio, 2)) * pi;
    return area;
}

double volEsfera(double radio) {
    double vol = (4.0/3) * (pi) * (pow(radio, 3));
    return vol;
}

