export class Persona {
  // Atributos públicos
  public nombre: string;
  public apellido: string;

  constructor(nombre: string, apellido: string) {
    this.nombre = nombre;
    this.apellido = apellido;
  }

  // Método para mostrar los datos
  mostrarDatos(): void {
    console.log(`Nombre: ${this.nombre}, Apellido: ${this.apellido}`);
  }
}