var links = document.getElementById("nav-links");
var ul = document.getElementById("links");
var home = document.getElementById("homeID");

var style = `
  list-style-type: none;
  display: flex;  
`;

var open = false;

var menu = document.querySelector("#menu");

menu.addEventListener("click", () => {
  open = !open;

  if (open) openMenu();
  else closeMenu();
});

function openMenu() {
  links.style.display = "flex";
  ul.style.cssText = style;
  home.style.display = "none";
}

function closeMenu() {
  links.style.display = "none";
  home.style.display = "block";
}
