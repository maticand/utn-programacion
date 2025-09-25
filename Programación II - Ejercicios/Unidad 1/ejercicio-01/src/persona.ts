class Persona {
  // Declaro atributos
  nombre: string;
  apellido: string;

  // Creo el constructor para inicializar atributos
  constructor(nombre: string, apellido: string) {
    this.nombre = nombre;
    this.apellido = apellido;
  }

  // Metodo para mostrar datos
  mostrarDatos(): void {
    console.log(`Nombre: ${this.nombre}, Apellido: ${this.apellido}`);
  }
}
// Creo la instancia con valores
const persona1 = new Persona("Juan", "Perez"); 
// Muestro los valores
persona1.mostrarDatos();