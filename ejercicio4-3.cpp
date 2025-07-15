// Dado el radio de un círculo calcular e informar:
// a) El área del círculo (se obtiene multiplicando el radio al cuadrado por el número Pi)
// b) El perímetro del círculo (se obtiene multiplicando el diámetro por el número Pi)
#include <iostream>
#define PI 3.14159  // Definimos una constante para Pi

using namespace std;

int main() {
    float radio, area, perimetro;

    // Entrada de datos
    cout << "Ingrese el radio del círculo: ";
    cin >> radio;

    // Cálculos
    area = PI * radio * radio;  // Área = π * r^2
    perimetro = 2 * PI * radio; // Perímetro = 2 * π * r (equivalente a π * diámetro)

    // Salida de resultados
    cout << "El área del círculo es: " << area << endl;
    cout << "El perímetro del círculo es: " << perimetro << endl;

    return 0;
}
