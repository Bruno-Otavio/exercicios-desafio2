function record(element) {
    const records = document.getElementById("records");
    records.innerHTML += `<p>Clicou no ${element.id} botão</p>`;
}