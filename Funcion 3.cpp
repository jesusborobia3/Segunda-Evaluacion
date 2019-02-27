#include<iostream>
using namespace std;
int main(){
	char salir;
	int numero;
	int semana;
	cout<<"\nIntroduce un número del 1 al 7";
	cin>>numero;
	if (numero==1){
		cout<<"\nLunes";
	}
	if (numero==2){
		cout<<"\nMartes";
	}
	if (numero==3){
		cout<<"\nMiercoles";
	}
	if (numero==4){

		cout<<"\nJueves";
	}
	if (numero==5){
		cout<<"\nViernes";
	}
	if (numero==6){
		cout<<"\nSabado";
	}
	if (numero==7){
		cout<<"\nDomingo";	
	}
	return 0;			
	cout<<"\nToca cualquier tecla para salir";
	cin>>salir;
}
