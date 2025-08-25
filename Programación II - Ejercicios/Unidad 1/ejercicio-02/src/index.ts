import { Vehiculo } from "./vehiculo";

// Creamos una instancia de la clase Vehiculo
const vehiculo1 = new Vehiculo("Toyota", "Corolla", "ABC123");

// Asignamos valores a los atributos públicos
vehiculo1.marca = "Honda";
vehiculo1.modelo = "Civic";

// vehiculo1.patente = "XYZ987"; 
// Esto da error porque `patente` es privado y no se puede modificar directamente.

// Mostramos los datos del vehículo usando el método de la clase
vehiculo1.mostrarDatos();  
// Muestra: Marca: Honda, Modelo: Civic, Patente: ABC123

