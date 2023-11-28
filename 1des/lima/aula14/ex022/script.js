function count() {
  const section = document.getElementById("contagem");

  section.innerHTML += "<h2>Contando de 1 até 10</h2>";
  for (let i = 1; i <= 10; i++) {
    if (i % 2 == 0) {
      section.innerHTML += `<mark>${i}</mark> 👉 `;
    } else {
      section.innerHTML += `${i} 👉 `;
    }
    if (i == 10) {
      section.innerHTML += " 🏁";
    }
  }
}
