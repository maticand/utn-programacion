import { Vehiculo } from "./vehiculo";

// Creamos una instancia de la clase Vehiculo con valores iniciales
// Atributos publicos
const vehiculo1 = new Vehiculo("Toyota", "Corolla", "ABC55123");

// Asignamos NUEVOS valores a los atributos públicos
vehiculo1.marca = "Honda";
vehiculo1.modelo = "Civic";

// vehiculo1.patente = "XYZ987"; 
// Esto da error porque `patente` es privado y no se puede modificar directamente.

// Mostramos los datos del vehículo usando el método de la clase
vehiculo1.mostrarDatos();  
// Muestra: Marca: Honda, Modelo: Civic, Patente: ABC123

