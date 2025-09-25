"use strict";
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
const persona1 = new Persona("Juan", "Perez");
persona1.mostrarDatos();
//# sourceMappingURL=persona.js.map