#include <iostream>
using namespace std;
int multiplicador(int num0,int num1,int num2,int num3){
    return(num0*num1*num2*num3);
    }
    
int main(){
    int num0,num1,num2,num3;
    char salir;
    int numi;
    cout << "Introduce un numero: "; cin >> num0;
    cout << "Introduce un numero: "; cin >> num1;
    cout << "Introduce un numero: "; cin >> num2;
    cout << "Introduce un numero: "; cin >> num3;
        
    cout<<"El producto de estos numeros es: "<<multiplicador(num0,num1,num2,num3);
    
    cin >> salir;
    return 0;
    }
