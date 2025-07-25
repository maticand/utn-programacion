// Solicitar al usuario que ingrese 3 notas y calcular el promedio e informarlo por pantalla de la
// siguiente forma:
//   ∙ Si es menor a 4, mostrar Insuficiente
//   ∙ Si está entre 4 y 6 mostrar Regular
//   ∙ Si está entre 6 y 8 mostrar Bien
//   ∙ Si está entre 8 y 9 mostrar Muy Bien
//   ∙ Si está entre 9 y 10 mostrar Sobresaliente
#include <iostream>
using namespace std;

int main() {
    // Declaración de variables para las 3 notas y el promedio
    float nota1, nota2, nota3, promedio;

    // Solicitar al usuario que ingrese la primera nota
    cout << "Ingrese la primera nota: ";
    cin >> nota1;

    // Solicitar al usuario que ingrese la segunda nota
    cout << "Ingrese la segunda nota: ";
    cin >> nota2;

    // Solicitar al usuario que ingrese la tercera nota
    cout << "Ingrese la tercera nota: ";
    cin >> nota3;

    // Calcular el promedio de las tres notas
    promedio = (nota1 + nota2 + nota3) / 3;

    // Mostrar el promedio numérico por pantalla
    cout << "Promedio: " << promedio << endl;

    // Clasificación según el valor del promedio
    if (promedio < 4) {
        cout << "Insuficiente" << endl;
    } else if (promedio >= 4 && promedio < 6) {
        cout << "Regular" << endl;
    } else if (promedio >= 6 && promedio < 8) {
        cout << "Bien" << endl;
    } else if (promedio >= 8 && promedio < 9) {
        cout << "Muy Bien" << endl;
    } else if (promedio >= 9 && promedio <= 10) {
        cout << "Sobresaliente" << endl;
    } else {
        // Caso especial: si el promedio es mayor a 10 (error de ingreso)
        cout << "Promedio fuera de rango (¿Ingresaste notas mayores a 10?)." << endl;
    }

    return 0;
}
