// Dado un número entero de la forma (AAAAMMDD), que representa una fecha válida 
// mostrar el día, mes y año que representa.
#include <iostream>
using namespace std;

int main() {
    int fecha;
    int anio, mes, dia;

    // Ingreso del número de 8 dígitos
    cout << "Ingrese la fecha en formato AAAAMMDD: ";
    cin >> fecha;

    // Separar los componentes
    anio = fecha / 10000;            // Extrae AAAA
    mes = (fecha / 100) % 100;       // Extrae MM
    dia = fecha % 100;               // Extrae DD

    // Validación básica
    if (mes < 1 || mes > 12 || dia < 1 ||
        (mes == 2 && dia > 29) ||
        ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30) ||
        (dia > 31)) {
        cout << "La fecha ingresada no es válida." << endl;
    } else {
        cout << "Año: " << anio << endl;
        cout << "Mes: " << mes << endl;
        cout << "Día: " << dia << endl;
    }

    return 0;
}
