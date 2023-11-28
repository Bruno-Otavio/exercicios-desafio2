const form = document.getElementById("form");

form.addEventListener("submit", (element) => {
    element.preventDefault();

    const section = document.getElementById("contagem");
    let max = document.getElementById("number").value;

    section.innerHTML += `<h2>Calculando de 0 até ${max}</h2>`;
    for (let i = 0; i <= max; i++) {
        section.innerHTML += `${i} 👉 `;
        if (i == max) {
            section.innerHTML += " 🏁";
        }
    }
});