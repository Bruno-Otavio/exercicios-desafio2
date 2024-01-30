const edit = document.querySelector("#edit");
const apply = document.querySelector("#apply");
const cancel = document.querySelector("#cancel");

const data = document.getElementById("data");

fetch("http://127.0.0.1:3000/books")
    .then(res => res.json())
    .then(res => {
    res.forEach(order => {
        data.innerHTML += `
            <tr>
                <td>${order.id}</td>
                <td>${order.book_name}</td>
                <td>${order.author}</td>
                <td>${order.lend_date.split("T")[0]}</td>
                <td>${order.return_date.split("T")[0]}</td>
                <td><a href="http://127.0.0.1:3000/delete/${order.id}"><img src="./assets/trash-icon.svg" alt="remove"></a></td>
                <td class="edit" id="edit"><img src="./assets/8666681_edit_icon.svg" alt="edit"></td>
                <td class="apply hidden" id="apply"><img src="./assets/check.svg" alt="apply"></td>
                <td class="cancel hidden" id="cancel"><img src="./assets/close.svg" alt="cancel"></td>
            </tr>
        `;
    });
});

const toggleEdit = () => {
    edit.classList.toggle("hidden");
    apply.classList.toggle("hidden");
    cancel.classList.toggle("hidden");
    console.log("foi");
}

edit.addEventListener("click", () => {
    toggleEdit();
    console.log("aa");
});
apply.addEventListener("click", () => {toggleEdit()});
cancel.addEventListener("click", () => {toggleEdit()});
