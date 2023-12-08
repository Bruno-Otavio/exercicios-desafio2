const menu_btn = document.getElementById("menu-btn");
const links = document.getElementById("links");

menu_btn.addEventListener("click", (event) => {});

var clicked = false;
menu_btn.addEventListener("click", (event) => {
  links.classList.toggle("show-links");

  clicked = !clicked;
  if (clicked) {
    menu_btn.style.transform = "rotate(90deg)";
  } else {
    menu_btn.style.transform = "rotate(0deg)";
  }
});
