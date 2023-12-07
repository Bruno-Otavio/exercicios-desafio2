class Marca {
  constructor(nome) {
    this.nome = nome;
  }
  FalarMarca() {
    return `Eu sou o carro da marca ${this.nome}`;
  }
}
class Modelo extends Marca {
  constructor(marca, modelo) {
    super(marca);
    this.modelo = modelo;
  }

  FalarModelo() {
    return `${this.FalarMarca()} e sou o modelo ${this.modelo}`;
  }
}

const carros = [];

const carro1 = new Modelo("Audi", "Sedan");
const carro2 = new Modelo("Citroën", "C3");
const carro3 = new Modelo("Chevrolet", "Onix");
const carro4 = new Modelo("Mercedes-Benz", "AMG GT");
const carro5 = new Modelo("Toyota", "Corolla");

carros.push(carro1);
carros.push(carro2);
carros.push(carro3);
carros.push(carro4);
carros.push(carro5);

console.table(carros);
