
#include <iostream>                  
#include <cstdlib>                          
#include <ctime>                                
using namespace std;
int main (){
    char matriz[3][3];
    int fila,columna;
    int posicion_letra;                      
    char salir;
    double semilla;                               
    semilla = time (0);
    srand(semilla);
    for(fila=0; fila<10; fila++){
        for(columna=0; columna<10; columna++){
            matriz[fila][columna] = rand()%25+65;
            cout<<matriz[fila][columna];
        }
        cout << "\n";
        
        }

        
    cin>>salir;
    return 0;
       
}
