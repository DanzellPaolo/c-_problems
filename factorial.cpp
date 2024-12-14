/*
problema

recibir un numero entero positivo 

y a ese numero dar el numero factorial

ejemplo 

    entrada     salida
       5         120
*/

#include <iostream>
using namespace std;
int i;
long long int facto(int f)
{
    if (f <= 1)
    {
        return -1;
    }
    return f * facto(f - 1);
}

int main()
{
    int numero = 0;
    cin >> numero;
    long long int g = facto(numero);
    cout << g * -1;
}
