#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

using namespace std;

int main() 
{	
	int veces, resultado, eleccion;
	float apuesta;
	int vecesGanadas = 0;
	int vecesPerdidas = 0;
	
	srand(time(NULL));
	
	cout << "Bienvenido al casino" << endl;
	cout << "Cuantas veces quiere jugar al doble o nada?" << endl;
	cin >> veces;
	
	for (int i = 0; i < veces; i++) {
		cout << "Cuanto apuestas?" << endl;
		cin >> apuesta;
		
		while (apuesta < 0) {
			cout << "Elija una cantidad valida" << endl;
			cin >> apuesta;
		}
		
		cout << "A que le apuestas?" << endl;
		cout << "1) Aguila" << endl;
		cout << "2) Sol" << endl;
		cin >> eleccion;
		
		while (eleccion < 1 || eleccion > 2) {
			cout << "Elija una opcion valida" << endl; 
			cin >> eleccion;
		}
		
		resultado = 1 + rand() % (2);
		
		if (eleccion == resultado) {
			apuesta *= 2;
			
			cout << "Felicidades, has ganado " << apuesta << " pesos" << endl;
			vecesGanadas++;
		} else {
			apuesta = 0;
			cout << "Perdio, siga participando" << endl;
			vecesPerdidas++;
		}
		
		cout << endl;
	}
	
	cout << endl;
	cout << "Veces ganadas: " << vecesGanadas << endl;
	cout << "Veces perdidas: " << vecesPerdidas << endl;
	getch();
	
	return 0;
}
