var min = 1;
var max = 100;
var dif = max - min;
var random = Math.random();
var num = min + Math.trunc(dif * random);

function guess() {
    let guess = Number(prompt("Digite seu palpite"));

    const section = document.getElementById("section");
    if (guess > num) {
        section.innerHTML += `<p>Você falou ${guess}. Meu número é <b>MENOR</b></p>`;
    } else if (guess < num) {
        section.innerHTML += `<p>Você falou ${guess}. Meu número é <b>MENOR</b></p>`
    } else {
        section.innerHTML += `<b>PARABÉNS!</b> Você acertou! Eu tinha sorteado o valor ${num}`;
    }
}