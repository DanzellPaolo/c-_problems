/*
Descripción
Escriba un programa usando funciones recursivas que, dado un numero n, imprima el numero n de Fibonacci.

MUY IMPORTANTE: El programa debe estar estructurado en módulos, no todo en la función principal. El programa debe hacer uso de funciones recursivas.

Entrada
Un numero 'n'.

Salida
El numero 'n' de Fibonacci.
*/
#include<bits/stdc++.h>
using namespace std;

int con = 0;
long long int resultados[100000];
long long int memo[100000];

long long int fibo(int x) {
    if (x == 0) {
        return 0;
    }
    if (x == 1) {
        return 1;
    }

    if (memo[x] != -1) {
        return resultados[x];
    }
    long long int resultado = fibo(x - 1) + fibo(x - 2);
    
    memo[x] = 1;
    resultados[x] = resultado;
    return resultado;
}

int main() {
    memset(memo, -1, sizeof(memo)); 
   long long int g;
    cin >> g;
    cout<<fibo(g);
    return 0;
}
