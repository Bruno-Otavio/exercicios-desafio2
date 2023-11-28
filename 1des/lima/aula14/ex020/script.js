var meses = [
  "janeiro",
  "fevereiro",
  "março",
  "abril",
  "maio",
  "junho",
  "julho",
  "agosto",
  "setembro",
  "outubro",
  "novembro",
  "dezembro",
];

function estacao() {
  let curMes = prompt("Digite o mês em extenso (ex: Setembro)").toLowerCase();
  let estacao = "";

  switch (curMes) {
    case "dezembro":
    case "janeiro":
    case "fevereiro":
      estacao = "Verão";
      break;
    case "março":
    case "abril":
    case "maio":
      estacao = "Outono";
    case "junho":
    case "julho":
    case "agosto":
      estacao = "Inverno";
    case "setembro":
    case "outubro":
    case "novembro":
      estacao = "Primavera";
  }

  const p = document.getElementById("p");

  p.innerHTML = `No mês de ${curMes}, estamos na estação de ${estacao}`;
}
