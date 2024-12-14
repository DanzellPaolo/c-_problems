/*
Descripción
Este problema es muy conocido. Se trata de decir si una cadena es un palíndromo. Recordemos que un palíndromo es una palabra que se lee igual de derecha a izquierda como de izquierda
a derecha. Por ejemplo, salas, es un palíndromo; ana también. En cambio, "gatos" no es un palíndromo.

Tu tarea en este problema consiste en escribir un programa que lea varias palabras y determine si cada palabra es palíndromo a no.

Entrada
Leerás un entero N. Posteriormente leerás N palabras. Cada palabra estará en una línea distinta, todas las palabras serán de letras minúsculas y sin acentos (código ASCII).

Salida
Por cada palabra leída, debes imprimir en una línea distinta la letra P si la palabra correspondiente es palíndromo o las letras NP si la palabra correspondiente no lo es.

*/

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string palindroma(string palabra)
{
    string palabraInvertida = palabra;
    reverse(palabraInvertida.begin(), palabraInvertida.end());

    if (palabraInvertida == palabra)
    {
        return "P";
    }
    else
    {
        return "NP";
    }
}

int main()
{
    int a;
    cin >> a;

    cin.ignore();

    for (int i = 0; i < a; i++)
    {
        string palabra;
        getline(cin, palabra);

        transform(palabra.begin(), palabra.end(), palabra.begin(), ::tolower);

        cout << palindroma(palabra) << endl;
    }

    return 0;
}
