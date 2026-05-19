# include <iostream>
using namespace std;
int main (){

int numero;
 
//Pedir numero al usuario
cout << "Ingrese un numero: ";
cin >> numero;

//Mostrar tabla de multiplicar
for (int i = 1; i <= 10; i++)
{
    cout << numero << "x" << i << "=" << numero * i << endl;
}
  return 0;
    }