class Cliente {
  constructor(nome, cpf, email, telefone) {
    this.nome = nome;
    this.cpf = cpf;
    this.email = email;
    this.telefone = telefone;
  }

  getNome() {
    return this.nome;
  }
  setNome(nome) {
    this.nome = nome;
  }
  getCpf() {
    return this.cpf;
  }
  setCpf(cpf) {
    this.cpf = cpf;
  }
  getEmail() {
    return this.email;
  }
  setEmail(email) {
    this.email = email;
  }

  getTelefone() {
    return this.telefone;
  }
  setTelefone(telefone) {
    this.telefone = telefone;
  }

  toString() {
    return (
      "Nome: " +
      this.nome +
      "\nCPF: " +
      this.cpf +
      "\nE-mail: " +
      this.email +
      "\nTelefone: " +
      this.telefone
    );
  }
}

const nomes = [
  "Ana",
  "Mario",
  "José",
  "João",
  "Martina",
  "Murilo",
  "Roger",
  "Bruno",
  "Gabriela",
  "Paula",
];

const clientes = [];

for (let i = 0; i < 10; i++) {
  let telefone = Math.floor(
    Math.random() * (999999999 - 100000000) + 100000000
  );

  let cpf = Math.floor(
    Math.random() * (99999999999 - 10000000000) + 10000000000
  );

  let cliente = new Cliente(
    nomes[i],
    telefone,
    `${cpf}@gmail.com`,
    `(19)${telefone}`
  );

  clientes.push(cliente);
}

console.table(clientes);
