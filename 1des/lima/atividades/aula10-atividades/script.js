// Exercício 1

function operation() {
  let number1 = Number(document.querySelector("#number1").value);
  let number2 = Number(document.querySelector("#number2").value);
  let number3 = Number(document.querySelector("#number3").value);

  document.querySelector(
    "#resultEx1"
  ).innerHTML = `(Número1 + Número2) / Número 3 = ${
    (number1 + number2) / number3
  }`;
}

// Exercício 2

function calculateKmPerHour() {
  let speed = Number(document.querySelector("#speed").value);
  let distance = Number(document.querySelector("#distance").value);

  let result = speed / distance;

  document.querySelector("#resultEx2").innerHTML = `${result}km/h`;
}

// Exercício 3

function reajust() {
  let nome = document.querySelector("#name").value;
  let salary = Number(document.querySelector("#salary").value);
  let index = Number(document.querySelector("#index").value);

  let result = salary + (salary * index) / 100;

  document.querySelector(
    "#resultEx3"
  ).innerHTML = `Nome: ${nome} - Reajuste: R$${result}`;
}

// Exercício 4

function calculatePoints() {
  let club = document.querySelector("#club").value;
  let victories = Number(document.querySelector("#victories").value);
  let draws = Number(document.querySelector("#draws").value);

  let points = victories * 3 + draws;

  document.querySelector(
    "#resultEx4"
  ).innerHTML = `Clube de Futebol: ${club} - Pontos Totais: ${points}`;
}

// Exercício 5

function pastPosNumber() {
  let number = Number(document.querySelector("#number").value);

  document.querySelector("#resultEx5").innerHTML = `${number} - 1 = ${
    number - 1
  } | ${number} + 1 = ${number + 1}`;
}

// Exercício 6

function planeHours() {
  const speed = 900;

  let distance = document.querySelector("#travel-distance").value;

  let hours = distance / speed;

  document.querySelector("#resultEx6").innerHTML = `Horas em voo: ${hours}`;
}
