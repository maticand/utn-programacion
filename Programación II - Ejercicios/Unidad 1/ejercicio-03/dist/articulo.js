"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
exports.Articulo = void 0;
class Articulo {
    marca;
    modelo;
    constructor(marca, modelo) {
        this.marca = marca;
        this.modelo = modelo;
    }
    mostrarDatos() {
        console.log(`Marca: ${this.marca}, Modelo: ${this.modelo}`);
    }
}
exports.Articulo = Articulo;
//# sourceMappingURL=articulo.js.map