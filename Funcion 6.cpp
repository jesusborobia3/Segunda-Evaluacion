#include<iostream>
using namespace std;
int main(){
 char salir;
 int numero1;
 int numero2;
 int letra;
 int S;
 int R;
 int M;
 int D;
 int suma;
 int resta;
 int multi;
 int division;
 cout<<"\nIntroduce un numero";
 cin>>numero1;
 cout<<"\nIntroduce otro numero";
 cin>>numero2;
 cout<<"\nQue operacion desea realizar?(S,R,M,D)";
 cin>>letra;
 if (letra==S){
 	suma=numero1+numero2;
	cin>>suma;
	cout<<"La suma es:"<<suma;
}
 if(letra==R){
 	resta=numero1-numero2;
	cin>>resta;
	cout<<"La resta es:"<<resta;
}
 if (letra==M){
	multi=numero1*numero2;
	cin>>multi;
	cout<<"La multiplicación es:"<<multi;
}
 if(letra==D){
	division=numero1/numero2;
	cin>>division;
	cout<<"La division es:"<<division;
}
cout<<"\nToca cualquier tecla para salir";
cin>>salir;
return 0;
}


