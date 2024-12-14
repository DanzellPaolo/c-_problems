/*  Extracción y Reordenamiento de Dígitos Pares*/

/*problema
Descripción
Desarrollar un programa modular capaz de leer un número entero positivo y extraer todos sus dígitos pares, 
reordenándolos en el número resultante en orden inverso al que aparecen en el original. Este proceso se lleva a cabo en dos fases principales: la lectura y validación de la entrada, 
y la transformación del número para excluir los dígitos impares de forma inversa.

Entrada
El usuario debe proporcionar un único número entero positivo cuando se le solicite.

Salida
El programa debe imprimir un número que incluya solamente los dígitos pares del número ingresado, en el orden inverso a como aparecen en el número original. Si no hay dígitos pares en el número original, el programa devolverá 0.

ejemplos: 
     entrada   salida
     1234567   642
     1359      0
    
    
     -23
     456      64


*/

#include <bits/stdc++.h>
using namespace std;
int con = 0;
vector<char> arr;

int main()
{

    string x;

    getline(cin, x);

    if (x[0] == '-')
    {
        x = "";
        getline(cin, x);
    }
    reverse(x.begin(), x.end());

    for (int i = 0; i < x.size(); i++)
    {

        if (x[i] == '2' || x[i] == '4' || x[i] == '6' || x[i] == '8')
        {
            arr.push_back(x[i]);
        }
    }

    if (arr.size() > 0)
    {
        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i];
        }
    }
    else if (arr.size() == 0)
    {

        cout << "0";
    }
}
