#include<iostream>
using namespace std;
int main(){  
	int dolares;
	int euros;
	char salir;
	cout<<"\nIntroduce una cantidad de dolares";
	cin>>dolares;
	euros=dolares*0.88;
	cout<<"\nSon"<< euros <<"euros";
	cout<<"\nToca cualquier tecla para salir";
	cin>>salir;
	return 0;
}
