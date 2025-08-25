// Dado un número entero que representa una hora con formato de 24 horas, pasarla al formato de
// AM-PM e imprimirla por pantalla. Ejemplo 1327 resulta 1:27 PM
#include <iostream>
using namespace std;

int main() {
    int hora24, horas, minutos;
    string periodo; // "AM" o "PM"

    // Solicitar al usuario la hora en formato de 24 horas (como un entero de 4 dígitos)
    cout << "Ingrese la hora en formato 24 horas (ejemplo: 0930, 1545): ";
    cin >> hora24;

    // Obtener la parte de las horas y los minutos
    horas = hora24 / 100;     // Dividir por 100 para sacar las "horas"
    minutos = hora24 % 100;   // Módulo 100 para sacar los "minutos"

    // Validar que la hora y los minutos estén en rango válido
    if (horas < 0 || horas > 23 || minutos < 0 || minutos > 59) {
        cout << "Hora inválida." << endl;
    } else {
        // Determinar si es AM o PM
        if (horas < 12) {
            periodo = "AM";
        } else {
            periodo = "PM";
        }

        // Convertir las horas al formato de 12 horas
        if (horas == 0) {
            horas = 12; // medianoche -> 12 AM
        } else if (horas > 12) {
            horas -= 12;
        }

        // Mostrar el resultado en formato AM/PM
        cout << "La hora en formato AM/PM es: " << horas << ":";

        // Asegurar que los minutos se impriman con dos dígitos (ej: 09 en vez de 9)
        if (minutos < 10) {
            cout << "0";
        }

        cout << minutos << " " << periodo << endl;
    }

    return 0;
}
