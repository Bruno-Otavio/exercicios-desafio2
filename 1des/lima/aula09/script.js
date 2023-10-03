// let x = 1;
// var y = 2;
// const z = 3;

// const object = [
//   {
//     name: "Lucas",
//     age: 20,
//     country: "Brazil",
//   },
//   {
//     name: "João",
//     age: 21,
//     country: "Brazil",
//   },
//   {
//     name: "Pedro",
//     age: 23,
//     country: "Brazil",
//   },
// ];

// console.log(object);
// console.warn("Aviso - Este é um aviso");
// console.error("Error");
// console.table(object);

// if (x % 1 == 0) {
//   console.log("Este é um número inteiro");
// } else {
//   console.log("Este não é um número inteiro");
// }

// // Exercicio 1
// var a = prompt("Digite um número");
// var b = prompt("Digite um número");
// var c = prompt("Digite um número");

// console.log("(a + b) / c = ", (a + b) / c);

// // Exercicio 2

// var speed = prompt("Digite uma velocidade");
// var distance = prompt("Digite a distancia");

// console.log("Velocidade média: ", speed / distance);

// // Exercicio 3

// var name = prompt("Digite seu nome");
// var salary = prompt("Digite seu salário");
// var index = prompt("Digite o indice percentual");

// console.log("Reajuste: ", salary + (salary * index) / 100);

// var data = new Date();

// var dia = data.getDate();
// var mes = data.getMonth() + 1;
// var ano = data.getFullYear();

// var anoCompleto = `${dia}/${mes}/${ano}`;

// var hora = data.getHours();
// var min = data.getMinutes();
// var sec = data.getSeconds();

// var horaCompleta = `${hora}:${min}:${sec}`;

// console.log(min);
// console.log(anoCompleto);
// console.log(horaCompleta);

// Math.ceil();
// Math.floor();
// Math.round();

// console.log(Math.round(10.5));

// Number.parseInt();
// Number.parseFloat();

// condição ? true : false;

// switch () {
//   case 1:
//     break;
//   default:
//     break;
// }

// for (let i; i < 10; i++) {
//   console.log(i);
// }

// while (true) {

// }

// do {

// } while (true);

// var lista = "a b c d e".split(" ");

// for (let i = 0; i < lista.length; i++) {
//   console.log(lista[i]);
// }

// lista.forEach((item) => {
//   console.log(item);
// });

// var lista2 = [10, 10, 2, 2, 8, 8];

// lista2.forEach((item) => {
//   console.log(item);
// });

// for (let item of lista) {
//   console.log(item);
// }

// Exercicio 1 Lista 2
var price = 1250;

var finalPrice = price - (price * 8) / 100;

price >= 1000 ? console.log(finalPrice) : NULL;

// Exercicio 2 Lista 2
var salary = 1900;
var filhos = 3;

var finalSalary = salary + filhos * 45;

price < 2000 ? console.log(finalSalary) : NULL;

// Exercicio 1 Lista 3
for (let i = 10; i <= 200; i++) {
  console.log(i);
}

// Exercicio 2 Lista 3
for (let i = 200; i >= 10; i--) {
  console.log(i);
}
