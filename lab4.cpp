	#include <iostream>
	#include <time.h>
	#include <cstdlib>
	#include <math.h>
	#include <ncurses.h>
	#include <fstream>

	using std::cout;
	using std::endl;
	using std::cin;
	int main(int argc, char const *argv[]){
		int* numeros = new int[5];


		
		return 0;
	}

	void liberar_Memoria(int* numeros){

		delete[] numeros;
	}

	void CreandoMatriz (int* numeros){
		for(int i =0; i<5;i++){
			numeros[i] = 0;
		}
	}