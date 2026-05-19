 #include <iostream>
using namespace std;
int main (){

int numero;

//Pedir numero al usuario
cout << "Ingrese un numero: ";
cin >> numero;

// muestra la cuenta regresiva
while (numero >= 0)
{
    cout << numero << endl;
    numero--;
}


    return 0;
     }