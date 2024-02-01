const table = document.querySelector("#book-informations");

const data = document.getElementById("data");

fetch("http://127.0.0.1:3000/books")
    .then(res => res.json())
    .then(res => {
    res.forEach(order => {
        data.innerHTML += `
            <tr>
                <td class="id">${order.id}</td>
                <td class="book-name">${order.book_name}</td>
                <td class="author">${order.author}</td>
                <td class="lend-date">${order.lend_date.split("T")[0]}</td>
                <td class="return-date">${order.return_date.split("T")[0]}</td>
                <td class="delete"><a href="http://127.0.0.1:3000/delete/${order.id}"><img src="./assets/trash-icon.svg" alt="remove"></a></td>
                <td class="edit" id="edit"><img src="./assets/8666681_edit_icon.svg" alt="edit"></td>
                <td class="apply hidden" id="apply"><img src="./assets/check.svg" alt="apply"></td>
                <td class="cancel hidden" id="cancel"><img src="./assets/close.svg" alt="cancel"></td>
            </tr>
        `;
    });
});

table.addEventListener("click", (event) => {
    const item = event.target.parentNode.parentNode;
    const button = event.target.parentNode;

    if (button.classList.contains("edit")) {
        toggleEdit(item);
    } else if (button.classList.contains("apply")) {
        toggleEdit(item);
        applyChanges(item)
    } else if (button.classList.contains("cancel")){
        toggleEdit(item);
        cancelChanges(item);
    }
});

function editable(item, condition) {
    const fields = [
        item.querySelector(".book-name"),
        item.querySelector(".author"),
        item.querySelector(".lend-date"),
        item.querySelector(".return-date")
    ];

    fields.forEach((field) => {
        field.contentEditable = condition;

        const input_date = document.createElement("input")
        input_date.type = "date";
        if (field.classList.contains("lend-date")) {
            field.innerHTML = "";
            field.append(input_date);
        } else if(field.classList.contains("return-date")) {
            field.innerHTML = "";
            field.append(input_date);
        }
    });

    if (condition == "true") {
        fields.forEach((field) => {
            field.style.color = "blue";
        });
    } else if (condition == "false") {
        fields.forEach((field) => {
            field.style.color = "black";
        });
    }
}

function toggleEdit(item) {
    editable(item, "true");

    const template_edit = document.querySelector(".edit-template");
    const template_apply = document.querySelector(".apply-template");
    const template_cancel = document.querySelector(".cancel-template");

    const edit = item.querySelector(".edit");
    const apply = item.querySelector(".apply");
    const cancel = item.querySelector(".cancel");

    template_edit.classList.toggle("hidden");
    template_apply.classList.toggle("hidden");
    template_cancel.classList.toggle("hidden");

    edit.classList.toggle("hidden");
    apply.classList.toggle("hidden");
    cancel.classList.toggle("hidden");
}

function applyChanges(item) {
    const data = {
        id: item.querySelector(".id").innerHTML,
        book_name: item.querySelector(".book-name").innerHTML,
        author: item.querySelector(".author").innerHTML,
        lend_date: item.querySelector(".lend-date").value,
        return_date: item.querySelector(".return-date").value,
    };

    const request = new Request("http://127.0.0.1:3000/update", {
        method: "POST",
        body: JSON.stringify(data),
        headers: new Headers({
            "Content-Type": "application/json"
        })
    });

    fetch(request)
        .then(res => (res.json()))
        .then(res => console.log(res));

    editable(item, "false");
}

function cancelChanges(item) {
    const id = item.querySelector(".id").innerHTML;

    fetch(`http://127.0.0.1:3000/books/${id}`)
        .then(res => res.json())
        .then(res => {
            res.forEach((order) => {
                item.querySelector(".book-name").innerHTML = order.book_name;
                item.querySelector(".author").innerHTML = order.author;
                item.querySelector(".lend-date").innerHTML = order.lend_date.split("T")[0];
                item.querySelector(".return-date").innerHTML = order.return_date.split("T")[0];
            })
        });

    editable(item, "false");
}
