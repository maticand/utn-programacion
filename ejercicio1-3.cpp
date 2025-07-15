// Dados dos valores enteros A y B, informar la suma, la resta y el producto  
#include <iostream>
using namespace std;

int main() {
    int A, B;

    // Entrada de datos
    cout << "Ingrese el valor de A: ";
    cin >> A;
    cout << "Ingrese el valor de B: ";
    cin >> B;

    // Operaciones
    int suma = A + B;
    int resta = A - B;
    int producto = A * B;

    // Resultados
    cout << "La suma de A y B es: " << suma << endl;
    cout << "La resta de A y B es: " << resta << endl;
    cout << "El producto de A y B es: " << producto << endl;

    return 0;
}
