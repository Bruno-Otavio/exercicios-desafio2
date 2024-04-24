class Ingrediente {
    constructor(descricao) {
        this.descricao = descricao;
    }
}

class Comida {
    constructor(nome, tipo, peso) {
        this.nome = nome != null ? nome : "Comida Genérica";
        this.tipo = tipo != null ? tipo : "Tipo Genérico";
        this.peso = peso != null ? peso : 0;
    }
}

class Salgada {
    constructor(nome, peso) {
        this.nome = nome != null ? nome : "Comida Genérica";
        this.tipo = "Salgada";
        this.peso = peso != null ? peso : 0;
    }
}

class Doce {
    constructor(nome, peso) {
        this.nome = nome != null ? nome : "Doce Genérico"
        this.tipo = "Doce";
        this.peso = peso != null ? peso : 0;
    }
}

class ComidaBuilder {
    constructor(nome, tipo, peso) {
        if (nome !== undefined && tipo !== undefined && peso !== undefined) {
            if (tipo === "Salgada") 
                this.comida = new Salgada(nome, peso);
            else if (tipo === "Doce")
                this.comida = new Doce(nome, peso);
            else 
                this.comida = new Comida(nome, tipo, peso);
        } else if (nome !== undefined && tipo !== undefined) {
            if (tipo === "Salgada")
                this.comida = new Salgada(nome);
            else if (tipo === "Doce") 
                this.comida = new Doce(nome);
            else
                this.comida = new Comida();
        } else if (nome !== undefined) {
            this.comida = new Comida(nome);
        } else {
            this.comida = new Comida();
        }
    }

    addIngerediente(ingrediente) {
        if (this.comida.ingredientes === undefined) {
            this.comida.ingredientes = [];
        }
        this.comida.ingredientes.push(ingrediente);
        return this;
    }

    build() {
        return this.comida;
    }
}

const comidas = [
    new ComidaBuilder(),
    new ComidaBuilder("Arroz", "Salgada", 100),
    new ComidaBuilder("Feijão"),
    new ComidaBuilder("Brigadeiro", "Doce"),
    new ComidaBuilder("Bolo", "Doce"),
    new ComidaBuilder("Pudim", "Doce", 150),
    new ComidaBuilder("Lasanha", "Salgada", 300),
    new ComidaBuilder("Pizza", "Salgada", 400),
    new ComidaBuilder("Macarrão", "Salgada", 200),
    new ComidaBuilder("Salada", "Salgada", 100),
    new ComidaBuilder("Sorvete", "Doce"),
    new ComidaBuilder()
];

comidas[1].addIngerediente(new Ingrediente("Sal"));
comidas[1].addIngerediente(new Ingrediente("Alho"));
comidas[3].addIngerediente(new Ingrediente("Leite compensado"));
comidas[3].addIngerediente(new Ingrediente("Chocolate em pó do padre"));

console.table(comidas);
console.log(JSON.stringify(comidas, null, 2));
