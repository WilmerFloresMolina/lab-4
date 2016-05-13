	#include <iostream>
	#include <time.h>
	#include <cstdlib>
	#include <math.h>
	#include <ncurses.h>
	#include <fstream>

	using std::cout;
	using std::endl;
	using std::cin;

	void CreandoMatriz (int* numeros);
	void liberar_Memoria(int* numeros);


	int main(int argc, char const *argv[]){
		int* numeros = new int[5];
		int opcion= 0;
		while(opcion<3){
			cout<<"1. Ejercicio 1"<<endl;
			cout<<"2. Ejercicio 2"<<endl;
			cout<<"3. Salir"<<endl;
			cin >> opcion;
			if(opcion==1){
				int a=0,b=0,c=0;
				cout<< "ingrese a"<<endl;
				cin>>a;
				cout << "ingrese b"<<endl;
				cin>>b;
				cout << "ingrese c"<<endl;
				cin>>c;
				numeros[0]=a;
				numeros[1]=b;
				numeros[2]=c;






			}

			if(opcion==2){
				
			}


		}


		
		return 0;
	}

	void liberar_Memoria(double* numeros){

		delete[] numeros;
	}

	void CreandoMatriz (double* numeros){
		for(int i =0; i<5;i++){
			numeros[i] = 0;
		}
	}
	int factorizar(double* numeros){
		double a=0,b=0,c=0;
		a=numeros[0];
		b=numeros[1];
		c=numeros[2];

		double argumento=sqrt(pow(b,2);
		double abc=4*a*c;
		double total=0;
		total = argumento -abc;

		if(total>=0){
			double x1 = (-b + sqrt(pow(b,2)-4*a*c))/(2*a);
			double x2 = (-b - sqrt(pow(b,2)-4*a*c))/(2*a);

		}else{
			return 1;
		}
		

		return 0;
	}