class decoracao {
  constructor(tipo) {
    this.tipo = tipo;
  }
}

class livro {
  constructor(titulo) {
    this.titulo = titulo;
  }
}

class estante {
  constructor() {
    this.decoracoes = [];
    this.livros = [];
  }
  addLivro(livro) {
    this.livros.push(livro);
  }

  addDecoracao(decoracao) {
    this.decoracoes.push(decoracao);
  }
}

const estantes = [];

// Estantes
const estanteVazia = new estante();
const estanteDecoracao = new estante();
const estanteLivro = new estante();

// Decorações
const flor = new decoracao("flor");
const vela = new decoracao("vela");

// Livros
const robo = new livro("Eu Robô");
const mistborn = new livro("Mistborn");
const banana = new livro("Diário de um Banana");

estanteDecoracao.addDecoracao(flor);
estanteDecoracao.addDecoracao(vela);

estanteLivro.addLivro(robo);
estanteLivro.addLivro(mistborn);
estanteLivro.addLivro(banana);

estantes.push(estanteVazia);
estantes.push(estanteDecoracao);
estantes.push(estanteLivro);

console.table(estantes);

estantes.forEach((estante) => {
  console.table(estante.livros);
  console.table(estante.decoracoes);
});
