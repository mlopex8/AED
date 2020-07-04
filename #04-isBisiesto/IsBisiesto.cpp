/*
	Problema: dado un a�o, verificar si es bisiesto o no.
	Alumno: Matias Alejandro Lopez
	Curso: K1051
*/
#include<cassert>

bool isBisiesto(int);

int main(){
	//Pruebas para corraborar el funcionamiento del programa.
	assert(isBisiesto(1984));
	assert(isBisiesto(1996));
	assert(isBisiesto(1581));
}
//Definicion de la funcion para resolver el problema dado.
bool isBisiesto( int anio){
    return ((anio >= 1582) and (anio%4 == 0) and (not anio%100 == 0 or anio%400 == 0));
}
