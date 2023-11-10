var links = document.getElementById("nav-links");
var ul = document.getElementById("links");
var home = document.getElementById("homeID");

var ulStyle = `
  list-style-type: none;
  display: flex;
`;

var linksStyle = `
  display: flex;
  right: 0em;
`;

var open = false;

var menu = document.querySelector("#menu");

menu.addEventListener("click", () => {
  open = !open;

  if (open) openMenu();
  else closeMenu();
});

function openMenu() {
  links.style.cssText = linksStyle;
  ul.style.cssText = ulStyle;
  home.style.display = "none";
}

function closeMenu() {
  links.style.display = "block";
  links.style.right = "-50em";
  home.style.display = "block";
}
