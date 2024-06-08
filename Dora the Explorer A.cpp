/*
Dora se encuentra en el país de UPlandia, un reino formado por 
 renglones y 
 columnas y esta fascinada con toda la naturaleza que hay a su alrededor. Ella quiere explorar lo más posible el reino. Escribe un programa que muestre el área que Dora puede explorar.

Ten en cuenta que Dora sólo puede moverse de manera vertical y horizontal, NO en diagonal, y no puede atravesar paredes.

Entrada
La primera línea contiene 2 números, n y m  indicando el número renglones y columnas en UPlandia.

Le siguen 
 líneas, cada una con  n caracteres. Un casilla marcada con el símbolo . significa que es un espacio libre, el símbolo *
 indica una pared, y el símbolo "#" indica la posición de Dora.

Salida
El mapa de UPlandia, donde cada casilla que Dora puede visita es marcada con el símbolo 
"#"
. Ver el ejemplo.

entrada : 

5 5
*****
*#*.*
*.***
*...*
*****



salida : 

*****
*#*.*
*#***
*###*
*****

codigo omegaup:3997
*/
#include<bits/stdc++.h>
using namespace std;

char ma[1000][1000];
int a, b, i, j;
bool espejo[1000][1000];

void rellena(int x, int y) {
    if (x < 0 || y < 0 || x >= a || y >= b || ma[x][y] == '*' || espejo[x][y] ) {
        return;
    }

        espejo[x][y] = true;
        ma[x][y] = '#';

        rellena(x, y + 1);
        rellena(x, y - 1);
        rellena(x - 1, y);
        rellena(x + 1, y);

}

int main() {
    cin >> a >> b;

    for (i = 0; i < a; i++) {
        for (j = 0; j < b; j++) {
            cin >> ma[i][j];
        }
    }

    for (i = 0; i < a; i++) {
        for (j = 0; j < b; j++) {
            if (ma[i][j] == '#') {
                rellena(i, j);
                break;
            }
        }
    }

    for (i = 0; i < a; i++) {
        for (j = 0; j < b; j++) {
            cout << ma[i][j];
        }
        cout << endl;
    }

    return 0;
}
