/*
Descripción
Mr. Trance ha venido a ti pidiendo ayuda

enter image description here

Mr. Trance, esta evitando tener problemas, por lo que sigue una rutina, sin embargo, sabe que esta repitiendo algunas acciones de mas, por lo que te ha pedido tu ayuda para evitar esto

Entrada
Se te dará una palabra la cual sera la acción que Mr. Trance siente esta haciendo mucho. Abajo. una frase contando algo hecho por Mr. Trance.

Salida
¿Cuantas Veces Mr. Trance repitió dicha acción.


#codigo omegaup: 4781
*/
#include <iostream>
using namespace std;
#include <iostream>
#include <string>
#include <algorithm>

int contarRepeticiones(const std::string& accion, const std::string& frase) {
    int contador = 0;
    std::string fraseMinuscula = frase;
    std::string accionMinuscula = accion;
    
    std::transform(fraseMinuscula.begin(), fraseMinuscula.end(), fraseMinuscula.begin(), ::tolower);
    std::transform(accionMinuscula.begin(), accionMinuscula.end(), accionMinuscula.begin(), ::tolower);

    size_t pos = fraseMinuscula.find(accionMinuscula);
    while (pos != std::string::npos) {
        contador++;
        pos = fraseMinuscula.find(accionMinuscula, pos + accionMinuscula.length());
    }

    return contador;
}

int main() {
    std::string accion, frase;
    std::getline(std::cin, accion);
    std::getline(std::cin, frase);

    int repeticiones = contarRepeticiones(accion, frase);
    std::cout << repeticiones << std::endl;

    return 0;
}
