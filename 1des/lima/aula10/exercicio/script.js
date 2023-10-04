// Exercício 1

function operation() {
  let number1 = Number(document.querySelector("#number1").value);
  let number2 = Number(document.querySelector("#number2").value);
  let number3 = Number(document.querySelector("#number3").value);

  document.querySelector("#resultEx1").innerHTML = `${
    (number1 + number2) / number3
  }`;
}
