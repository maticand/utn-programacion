export class Persona {
  // Atributos privados
  private _nombre: string;
  private _apellido: string;

  // Inicializar objetos
  constructor(nombre: string, apellido: string) {
    this._nombre = nombre;
    this._apellido = apellido;
  }

  // Getter y Setter para nombre
  public get nombre(): string {
    return this._nombre;
  }

  public set nombre(value: string) {
    this._nombre = value;
  }

  // Getter y Setter para apellido
  public get apellido(): string {
    return this._apellido;
  }

  public set apellido(value: string) {
    this._apellido = value;
  }

  // Método para mostrar los datos
  mostrarDatos(): void {
    console.log(`Nombre: ${this._nombre}, Apellido: ${this._apellido}`);
  }
}