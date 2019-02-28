#include<iostream>
#include<string.h> 
using namespace std;
int main(){
    int altura;
    int fila, columna, c;
    char salir;
    cout<<"Como quieres que sea de alta la piramide: ";
    cin>>altura;
    for(fila=0;fila<=altura;fila++){
        for(columna=0;columna<=altura-fila;columna++){
            cout<<" ";
            }
            for(c=0;c<=fila*2;c++){
                cout<<"*";
                  }         
        cout<<"\n";
   }
    cout<<"\nToca cualquier tecla para salir: ";
    cin>>salir;
    return 0;
}
