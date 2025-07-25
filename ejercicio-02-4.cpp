// Dado tres valores determinar e imprimir una leyenda informando si “Forman triangulo” o “No
// forman triángulo”.
// Tener en cuenta el teorema de desigualdad de los triángulos: En todo triángulo la suma de las
// longitudes de dos lados cualesquiera es siempre mayor a la longitud del lado restante.
#include <iostream>
using namespace std;

int main() {
    // Declaración de las variables para los 3 lados
    float lado1, lado2, lado3;

    // Solicitar al usuario que ingrese los tres lados
    cout << "Ingrese la longitud del primer lado: ";
    cin >> lado1;

    cout << "Ingrese la longitud del segundo lado: ";
    cin >> lado2;

    cout << "Ingrese la longitud del tercer lado: ";
    cin >> lado3;

    // Verificamos que los valores sean positivos
    if (lado1 <= 0 || lado2 <= 0 || lado3 <= 0) {
        cout << "Los lados deben ser valores positivos." << endl;
    }
    // Aplicamos el teorema de la desigualdad para determinar si forman un triángulo
    else if ((lado1 + lado2 > lado3) &&
             (lado1 + lado3 > lado2) &&
             (lado2 + lado3 > lado1)) {
        cout << "Forman triángulo" << endl;
    } else {
        cout << "No forman triángulo" << endl;
    }

    return 0;
}
