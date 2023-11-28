const form = document.getElementById("form");

form.addEventListener("submit", (event) => {
    event.preventDefault();

    const section = document.getElementById("tabuada");
    let number = Number(document.getElementById("number").value);

    section.innerHTML = `<h2>Tabuada de ${number}</h2>`;
    for (let i = 1; i <= 10; i++) {
        section.innerHTML += `<p>${number} x ${i} = ${number * i}</p>`;
    }
});