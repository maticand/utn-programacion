// Dados una terna de números naturales que representan al día, al mes y al año de una determinada fecha
// informarla como un solo número natural de 8 dígitos con la forma (AAAAMMDD).
#include <iostream>
using namespace std;

int main() {
    int dia, mes, anio;

    // Ingreso del año (válido si es mayor que 0)
    cout << "Ingrese el año (4 dígitos): ";
    cin >> anio;
    while (anio <= 0) {
        cout << "Año inválido. Ingrese nuevamente el año: ";
        cin >> anio;
    }

    // Ingreso del mes (válido si está entre 1 y 12)
    cout << "Ingrese el mes: ";
    cin >> mes;
    while (mes < 1 || mes > 12) {
        cout << "Mes inválido. Ingrese nuevamente el mes (1-12): ";
        cin >> mes;
    }

    // Ingreso del día (válido según el mes)
    cout << "Ingrese el día: ";
    cin >> dia;
    while (
        dia < 1 ||
        (mes == 2 && dia > 29) ||
        ((mes == 4 || mes == 6 || mes == 9 || mes == 11) && dia > 30) ||
        (dia > 31)
    ) {
        cout << "Día inválido. Ingrese nuevamente el día: ";
        cin >> dia;
    }

    // Mostrar fecha en formato AAAAMMDD
    cout << "La fecha en formato AAAAMMDD es: ";

    // Mostramos el año
    if (anio < 1000) cout << "0";  // si el año es de 3 dígitos (raro pero posible)
    cout << anio;

    // Mostramos el mes
    if (mes < 10) cout << "0";
    cout << mes;

    // Mostramos el día
    if (dia < 10) cout << "0";
    cout << dia << endl;

    return 0;
}