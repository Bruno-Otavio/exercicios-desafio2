const formPessoa = document.querySelector("#formPessoa");
const pessoas = [];

formPessoa.addEventListener("submit", (e) => {
  e.preventDefault();
  pessoas.push(new Pagamento(formPessoa.nome.value, formPessoa.salario.value));
  criarCard();
});

function updateCard(card, pessoa) {
  card.querySelector("#nomeValor").innerHTML = pessoa.nome;
  card.querySelector("#salarioValor").innerHTML = pessoa.salario;
  card.querySelector("#salarioBase").innerHTML = pessoa.salarioBase;
  card.querySelector("#salarioLiquido").innerHTML = pessoa.salarioLiquido;
  card.querySelector(".pessoa-id").innerHTML = `${pessoas.indexOf(
    pessoa
  )}`;
}

function criarCard() {
  const cards = document.querySelector(".cards");
  let card = document.querySelector(".card");
  cards.innerHTML = "";

  cards.appendChild(card);

  pessoas.forEach((pessoa) => {
    let cardNew = card.cloneNode(true);
    cardNew.classList.remove("model");
    updateCard(cardNew, pessoa);
    cards.appendChild(cardNew);
  });
}

function removeCard(element) {
  element.parentNode.remove();
  pessoas.splice(
    element.parentNode.querySelector(".pessoa-id").innerHTML.slice(1),
    1
  );
}

function makeEditable(element) {
  let card = element.parentNode;
  card.querySelector("#nomeValor").contentEditable = "true";
  card.querySelector("#salarioValor").contentEditable = "true";

  card.querySelector("#apply-button").style.display = "inline";
  card.querySelector("#cancel-button").style.display = "inline";
}

function makeUneditable(element) {
  element.querySelector("#nomeValor").contentEditable = "false";
  element.querySelector("#salarioValor").contentEditable = "false";

  element.querySelector("#apply-button").style.display = "none";
  element.querySelector("#cancel-button").style.display = "none";
}

function applyEdit(element) {
  let card = element.parentNode;
  let pessoa = pessoas[card.querySelector(".pessoa-id").innerHTML];

  pessoa.nome = card.querySelector("#nomeValor").innerHTML;
  pessoa.salario = Number(card.querySelector("#salarioValor").innerHTML);
  pessoa.salarioBase = (pessoa.salario - pessoa.inss()).toFixed(2);
  pessoa.salarioLiquido = (pessoa.salarioBase - pessoa.irrf()).toFixed(2);

  updateCard(card, pessoa);
  makeUneditable(card);
}

function cancelEdit(element) {
  let card = element.parentNode;
  let pessoa = pessoas[card.querySelector(".pessoa-id").innerHTML];

  updateCard(card, pessoa);
  makeUneditable(card);
}