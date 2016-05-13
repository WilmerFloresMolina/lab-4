	#include <iostream>
	#include <time.h>
	#include <cstdlib>
	#include <math.h>
	#include <ncurses.h>
	#include <fstream>


	using std::cout;
	using std::endl;
	using std::cin;

	void CreandoMatriz (double* numeros) ;
	void liberar_Memoria(double* numeros,char* palabras);
	double factorizar(double* numeros);


	int main(int argc, char const *argv[]){
		double* numeros = new double[6];
		char* palabras = new char[100];
	//	CreandoMatriz (numeros);
		int opcion= 0;
		while(opcion<3){

			cout<<"1. Ejercicio 1"<<endl;
			cout<<"2. Ejercicio 2"<<endl;
			cout<<"3. Salir"<<endl;
			cin >> opcion;
			if(opcion==1){
				double a=0,b=0,c=0;
				cout<< "ingrese a"<<endl;
				cin>>a;
				cout << "ingrese b"<<endl;
				cin>>b;
				cout << "ingrese c"<<endl;
				cin>>c;
				numeros[0]=a;
				numeros[1]=b;
				numeros[2]=c;

				if(factorizar(numeros) == 0){
					cout<<"x1 = "<<numeros[4]<<endl;
					cout<<"x2 = "<<numeros[5]<<endl;
					if(numeros[4]>0){
						cout<< "(x" <<(-1)*numeros[4]<<")"<<endl;
					}else{
						cout<< "(x" <<"+"<<(-1)*numeros[4]<<")"<<endl;
					}
					if(numeros[5]>0){
						cout<< "(x" <<(-1)*numeros[5]<<")"<<endl;
					}else{
						cout<< "(x" <<"+"<<(-1)*numeros[5]<<")"<<endl;

					}
					
					


				}else{
					cout<<"El programa no puede resolver numeros imaginarios :("<<endl;
				}





			}

			if(opcion==2){
				cout<<"ingrese una palabra"<<endl;
				cin>>palabras;
				int contador=0;
				for(int i =0;i<100;i++){
					if(palabras[i] == '\0'){
						contador=i;
						break;
					}

				}
				cout<<contador<<endl;
			}


		}

		liberar_Memoria(numeros,palabras);
		
		return 0;
	}

	void liberar_Memoria(double* numeros,char* palabras){

		delete[] numeros;
		delete[] palabras;
	}

	void CreandoMatriz (double* numeros){
		for(int i =0; i<6;i++){
			numeros[i] = 0;
		}
	}
	double factorizar(double* numeros){
		double a=0,b=0,c=0;
		a=numeros[0];
		b=numeros[1];
		c=numeros[2];
		double ret=0;

		double argumento=sqrt(pow(b,2));
		double total1=0;
		total1 = ((pow(b,2)-4*a*c));
		

		if(0<=total1){
			double x1 = (-b + sqrt(pow(b,2)-4*a*c))/(2*a);
			double x2 = (-b - sqrt(pow(b,2)-4*a*c))/(2*a);
			numeros[4] =x1;
			numeros[5] =x2; 
		}else{
			ret =1;
		}
		


		
			
		
		

		return ret;
	}