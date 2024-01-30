const express = require("express");
const mysql = require("mysql");
const cors = require("cors");
const bodyParser = require("body-parser");

const app = express();
const port = 3000;

const connection = mysql.createConnection({
    user: "root",
    password: "root",
    host: "localhost",
    database: "library",
});

const newOrder = (req, res) => {
    const order = {
        book: req.body.book,
        author: req.body.author,
        lend_date: req.body.lend,
        return_date: req.body.return,
    };
    
    let query = "INSERT INTO Books(book_name, author, lend_date, return_date) VALUE";
    query += `("${order.book}", "${order.author}", "${order.lend_date}", "${order.return_date}")`;

    connection.query(query, (err, result) => {
        if (err) res.json(err);
        else res.redirect("http://127.0.0.1:5500/frontend/index.html");
    });
}

const read = (req, res) => {
    connection.query("SELECT * FROM Books", (err, result) => {
        if (err) res.json(err);
        else res.json(result);
    });
}

connection.connect((err => {
    if (err) throw err;
    console.log("MySQL Connected");
}));

app.use(express.json());
app.use(cors());
app.use(bodyParser.urlencoded({ extended: false }));

app.get("/", (req, res) => {
    res.send("Hello World");
});

app.post("/books", newOrder);
app.get("/books", read);

app.listen(port, () => {
    console.log(`Example app listening on port ${port}`);
});
