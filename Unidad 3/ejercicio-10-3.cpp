// Se desea calcular su sueldo mensual para lo cual sabe que se aplica la siguiente
// fórmula: Sueldo Neto + Salario Familiar + Antigüedad
// El salario familiar es un monto fijo por cada hijo, y la antigüedad un monto fijo por cada año trabajado.
#include <iostream>
using namespace std;

int main() {
    float sueldoNeto, montoPorHijo, montoPorAntiguedad;
    int cantidadHijos, aniosTrabajados;
    float salarioFamiliar, antiguedad, sueldoTotal;

    // Ingreso de datos
    cout << "Ingrese el sueldo neto: ";
    cin >> sueldoNeto;

    cout << "Ingrese la cantidad de hijos: ";
    cin >> cantidadHijos;

    cout << "Ingrese el monto por hijo: ";
    cin >> montoPorHijo;

    cout << "Ingrese los años trabajados: ";
    cin >> aniosTrabajados;

    cout << "Ingrese el monto por cada año de antigüedad: ";
    cin >> montoPorAntiguedad;

    // Cálculos
    salarioFamiliar = cantidadHijos * montoPorHijo;
    antiguedad = aniosTrabajados * montoPorAntiguedad;
    sueldoTotal = sueldoNeto + salarioFamiliar + antiguedad;

    // Resultado
    cout << "El sueldo mensual total es: $" << sueldoTotal << endl;

    return 0;
}
