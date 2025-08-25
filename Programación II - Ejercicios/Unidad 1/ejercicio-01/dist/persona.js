"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
exports.Persona = void 0;
class Persona {
    nombre;
    apellido;
    constructor(nombre, apellido) {
        this.nombre = nombre;
        this.apellido = apellido;
    }
    mostrarDatos() {
        console.log(`Nombre: ${this.nombre}, Apellido: ${this.apellido}`);
    }
}
exports.Persona = Persona;
//# sourceMappingURL=persona.js.map