//Solicitar al usuario que ingrese 3 notas y calcular el promedio e informarlo por pantalla
#include <iostream>
using namespace std;

int main() {
    float nota1, nota2, nota3, promedio;

    // Entrada de datos
    cout << "Ingrese la primera nota: ";
    cin >> nota1;
    cout << "Ingrese la segunda nota: ";
    cin >> nota2;
    cout << "Ingrese la tercera nota: ";
    cin >> nota3;

    // Cálculo del promedio
    promedio = (nota1 + nota2 + nota3) / 3;

    // Salida del resultado
    cout << "El promedio de las tres notas es: " << promedio << endl;

    return 0;
}
