// Similar al anterior, dada una cantidad de horas informar por pantalla cuántos milisegundos son
#include <iostream>
using namespace std;

int main() {
    float horas;
    long milisegundos;

    // Ingreso de datos
    cout << "Ingrese la cantidad de horas: ";
    cin >> horas;

    // Conversión
    milisegundos = horas * 3600000;

    // Resultado
    cout << horas << " horas son " << milisegundos << " milisegundos." << endl;

    return 0;
}
