export class Articulo { 
    public marca: string;
    public modelo: string

    constructor(marca: string, modelo: string) {
        this.marca = marca;
        this.modelo = modelo;
    }

    mostrarDatos(): void {
        console.log(`Marca: ${this.marca}, Modelo: ${this.modelo}`);
    }
}