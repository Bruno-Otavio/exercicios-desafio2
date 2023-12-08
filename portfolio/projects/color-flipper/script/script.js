const background = document.getElementById("background");
const change_color = document.getElementById("change-color");
const color = document.getElementById("color");

change_color.addEventListener("click", function() {
    let hex_color = "#" + Math.random().toString(16).slice(2, 8);

    background.style.backgroundColor = hex_color;
    color.innerHTML = hex_color.toUpperCase();
});