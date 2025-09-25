export class Vehiculo {
  // Atributos públicos: se pueden acceder desde fuera de la clase
  public marca: string;
  public modelo: string;

  // Atributo privado: solo accesible dentro de la clase
  private patente: string;

  // Creo el constructor para inicializar atributos
  constructor(marca: string, modelo: string, patente: string) {
    this.marca = marca;
    this.modelo = modelo;
    this.patente = patente;
  }

  // Método público para mostrar todos los datos
  // Notar que SÍ podemos acceder a `patente` aquí porque estamos dentro de la clase
  mostrarDatos(): void {
    console.log(`Marca: ${this.marca}, Modelo: ${this.modelo}, Patente: ${this.patente}`);
  }
}
