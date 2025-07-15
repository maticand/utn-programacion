// Dada la longitud de un lado de un cuadrado calcular e informar por pantalla:
// a) El perímetro del cuadrado
// b) El área del cuadrado
#include <iostream>
using namespace std;

int main() {
    float lado, perimetro, area;

    // Entrada de datos
    cout << "Ingrese la longitud del lado del cuadrado: ";
    cin >> lado;

    // Cálculos
    perimetro = lado * 4;
    area = lado * lado;

    // Salida de resultados
    cout << "El perímetro del cuadrado es: " << perimetro << endl;
    cout << "El área del cuadrado es: " << area << endl;

    return 0;
}

