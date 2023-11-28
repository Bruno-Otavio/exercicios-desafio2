function count() {
  const section = document.getElementById("contagem");

  section.innerHTML += "<h2>Contando de 1 até 10</h2>";
  for (let i = 1; i <= 10; i++) {
    section.innerHTML += `${i} 👉 `;
    if (i == 10) {
      section.innerHTML += " 🏁";
    }
  }
}
