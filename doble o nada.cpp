#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

using namespace std;

int main() 
{	
	// Declaración de variables enteras y flotantes
	int veces, resultado, eleccion;
	float apuesta;
	int vecesGanadas = 0; // Contador de veces ganadas
	int vecesPerdidas = 0; // Contador de veces perdidas
	
	srand(time(NULL));
	
	cout << "Bienvenido al casino" << endl;
	cout << "Cuantas veces quiere jugar al doble o nada?" << endl;
	cin >> veces;
	
	for (int i = 0; i < veces; i++) {
		cout << "Cuanto apuestas?" << endl;
		cin >> apuesta;
		
		while (apuesta < 0) { // Comprobamos si la cantidad a apostar es positiva
			cout << "Elija una cantidad valida" << endl;
			cin >> apuesta;
		}
		
		cout << "A que le apuestas?" << endl;
		cout << "1) Aguila" << endl;
		cout << "2) Sol" << endl;
		cin >> eleccion;
		
		while (eleccion < 1 || eleccion > 2) { // Comprobamos si elige una opción correcta (1 o 2)
			cout << "Elija una opcion valida" << endl; 
			cin >> eleccion;
		}
		
		resultado = 1 + rand() % (2); // "resultado" será 1 o 2, aleatoriamente
		
		if (eleccion == resultado) {
			apuesta *= 2; // Duplicamos la cantidad inicial
			
			cout << "Felicidades, has ganado " << apuesta << " pesos" << endl;
			vecesGanadas++;
		} else {
			apuesta = 0; 
			cout << "Perdio, siga participando" << endl;
			vecesPerdidas++;
		}
		
		cout << endl;
	}
	
	// Imprimimos los contadores
	cout << endl;
	cout << "Veces ganadas: " << vecesGanadas << endl;
	cout << "Veces perdidas: " << vecesPerdidas << endl;
	getch();
	
	return 0;
}
