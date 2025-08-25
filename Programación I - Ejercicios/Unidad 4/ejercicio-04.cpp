// Dado un número entero de 5 dígitos informar por pantalla si es capicúa. Un número es capicúa si
// se puede leer en ambos sentidos el mismo valor, por ejemplo el número 1441 es capicúa pero
// 1414 no lo es.
#include <iostream>
using namespace std;

int main() {
    int numero;

    // Solicitar al usuario un número de 5 dígitos
    cout << "Ingrese un número entero de 5 dígitos: ";
    cin >> numero;

    // Validar que el número tenga exactamente 5 dígitos
    if (numero < 10000 || numero > 99999) {
        cout << "El número ingresado no tiene 5 dígitos." << endl;
    } else {
        // Extraer los dígitos del número
        int digito1 = numero / 10000;            // primer dígito
        int digito2 = (numero / 1000) % 10;       // segundo dígito
        int digito4 = (numero / 10) % 10;         // penúltimo dígito
        int digito5 = numero % 10;               // último dígito

        // Verificar si es capicúa (comparando 1° con 5° y 2° con 4°)
        if (digito1 == digito5 && digito2 == digito4) {
            cout << "El número es capicúa." << endl;
        } else {
            cout << "El número no es capicúa." << endl;
        }
    }

    return 0;
}
