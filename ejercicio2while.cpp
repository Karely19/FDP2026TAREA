#include <iostream>
using namespace std;
int main()
{

int numero, suma = 0;

cout << "Ingrese numeros (0 para terminar): ";
cin >> numero;

while (numero != 0)
{
    suma = suma + numero;

    cin >> numero;
}
    cout << "la suma total es : " << suma;


    return 0;
     }