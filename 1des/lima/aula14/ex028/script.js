const form = document.getElementById("form");

form.addEventListener("submit", (event) => {
    event.preventDefault();

    const section = document.getElementById("fatorial");
    
    let max = Number(document.getElementById("number").value);
    let fatorial = 1;

    let count = max;

    section.innerHTML += `<h2>Calculando ${max}!</h2>`;
    while (count > 1) {
        section.innerHTML += `${count} x `;
        fatorial *= count;
        count--
    }
    section.innerHTML += `1 = ${fatorial}`;
})