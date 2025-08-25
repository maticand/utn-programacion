// Dada una cantidad de segundos informar por pantalla el mismo valor pero en horas, ejemplo 4860000 milisegundos son 1,35 horas
#include <iostream>
using namespace std;

int main() {
    long milisegundos;
    float horas;

    // Ingreso de datos
    cout << "Ingrese la cantidad de milisegundos: ";
    cin >> milisegundos;

    // Conversión a horas
    horas = milisegundos / 3600000.0;

    // Resultado
    cout << milisegundos << " milisegundos son " << horas << " horas." << endl;

    return 0;
}
