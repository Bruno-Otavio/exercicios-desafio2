function count() {
  const section = document.getElementById("contagem");

  section.innerHTML += "<h2>Contagem Regressiva de 10 a 1</h2>";
  for (let i = 10; i >= 1; i--) {
    section.innerHTML += `${i} 👉 `;
    if (i == 1) {
      section.innerHTML += " 🏁";
    }
  }
}
