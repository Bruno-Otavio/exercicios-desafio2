const form = document.getElementById("form");

form.addEventListener("submit", (event) => {
    event.preventDefault();

    const section = document.getElementById("contagem");
    
    let min = Number(document.getElementById("min").value);
    let max = Number(document.getElementById("max").value);

    section.innerHTML += `<h2>Contando de ${min} até ${max}</h2>`;
    for (let i = min; i <= max; i++) {
        section.innerHTML += `${i} 👉 `;
        if (i == max) {
            section.innerHTML += " 🏁";
        }
    }
});