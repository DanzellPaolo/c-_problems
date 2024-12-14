/*
Descripción
La siguiente se llama conjetura de ULAM en honor del matematico S.Ulam

Comience con cualquier entero positivo N. Si es par, dividalo entre 2; si es impar, multipliquelo por 3 y agreguele 1. Obtenga enteros sucesivamente repitiendo el proceso Al final,
 obtendra el número 1, independientemente del entero inicial, Por ejemplo, cuando el entero inicial es 12, la secuencia será: 12, 6, 3, 10, 5, 16, 8, 4, 2, 1.

Nota
Usar en el programa los ciclos usados en clase, y condicionales.

Entrada
Una línea con el entero N.

Salida
Los números de la serie ULAM separados por un espacio.

#codigo omegaup: 10749
*/
#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;

    cout << N << " ";

    while (N != 1)
    {
        if (N % 2 == 0)
        {
            N = N / 2;
        }
        else
        {
            N = N * 3 + 1;
        }
        cout << N << " ";
    }

    return 0;
}
