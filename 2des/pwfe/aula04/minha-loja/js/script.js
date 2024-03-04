const modals = document.querySelector("#Modal1");
const button = document.querySelector("#myButton");

modals.addEventListener("shown.bs.modal", () => {
    myInput.focus();
});