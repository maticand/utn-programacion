"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
exports.Vehiculo = void 0;
class Vehiculo {
    marca;
    modelo;
    patente;
    constructor(marca, modelo, patente) {
        this.marca = marca;
        this.modelo = modelo;
        this.patente = patente;
    }
    mostrarDatos() {
        console.log(`Marca: ${this.marca}, Modelo: ${this.modelo}, Patente: ${this.patente}`);
    }
}
exports.Vehiculo = Vehiculo;
//# sourceMappingURL=vehiculo.js.map