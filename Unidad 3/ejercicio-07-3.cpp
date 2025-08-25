// A partir de un valor entero ingresado por teclado, se pide informar:
// a) La quinta parte de dicho valor
// b) El resto de la división por 5
// c) La séptima parte del resultado del punto a)
#include <iostream>
using namespace std;

int main() {
    int valor;
    float quintaParte, septimaParte;
    int resto;

    // Ingreso del valor
    cout << "Ingrese un número entero: ";
    cin >> valor;

    // Cálculos
    quintaParte = valor / 5.0;          // División con decimales
    resto = valor % 5;                  // Resto de la división por 5
    septimaParte = quintaParte / 7.0;   // Séptima parte del valor del punto a)

    // Resultados
    cout << "La quinta parte es: " << quintaParte << endl;
    cout << "El resto de dividir por 5 es: " << resto << endl;
    cout << "La séptima parte de la quinta parte es: " << septimaParte << endl;

    return 0;
}
