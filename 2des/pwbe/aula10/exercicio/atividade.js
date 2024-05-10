class Comida {
    constructor(modelo, marca, ano) {
        this.modelo = modelo == undefined ? '' : modelo;
        this.marca = marca == undefined ? '' : marca;
        this.ano = ano == undefined ? new Date().getFullYear() : ano;
    }
}

class Argo {
    constructor(ano) {
        this.modelo = 'Argo';
        this.marca = 'Fiat';
        this.ano = ano == undefined ? new Date().getFullYear() : ano;
    }
}

class Gol {
    constructor(ano) {
        this.modelo = 'Gol';
        this.marca = 'VW';
        this.ano = ano == undefined ? new Date().getFullYear() : ano;
    }
}
