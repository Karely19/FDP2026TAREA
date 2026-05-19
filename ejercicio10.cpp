# include <iostream>
using namespace std;
int main (){

int n;
int a = 0, b = 1, resultado;

//Pedir cantidad de terminos
cout << "Ingrese la cantidad de terminos: ";
cin >> n;

cout << "Serie de fibonacci: ";

for (int i = 1; i <= n; i++)
{
    cout << a << " ";

    resultado = a + b;
    a = b;
    b = resultado;

}


return 0;
 }