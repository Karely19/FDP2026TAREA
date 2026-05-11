//Suma de numeros pares
//Pide un numero al usuario y usa while para calcular la suma de numeros pares

#include <iostream>
using namespace std;
int main()
{
int n, y=1;
int suma = 0;
cout << "Porfavor ingresa un numero" << endl;
cin >> n;

while (y <= n)
{
     if (y % 2 == 0){
        suma = suma+y;    
     }
     y++;
}
cout << suma << endl;


    return 0;
     }