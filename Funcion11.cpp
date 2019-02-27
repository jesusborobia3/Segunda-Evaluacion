#include <iostream>
using namespace std;
int suma_dig(int n) {
   int suma=0;
   if (n < 0) n=-n;
   while (n!=0) {
     suma+=n%10;            
      n=n/10;               
   }
   return suma;
}
int main() {
   char salir;
   int numero;
   cout << "Introduce un numero entero positivo: ";
   cin >> numero;

   cout << "La suma de los digitos del numero " << numero << " es " <<
   suma_dig(numero) << ".";
   cout<<"\nToca cualquier tecla para salir";
   cin>>salir;
   return 0; 
}





