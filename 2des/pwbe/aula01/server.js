// Dependências
const express = require("express");
const mysql = require("mysql");
const cors = require("cors");

// Conexão com o mysql (banco de dados)
const con = mysql.createConnection({
    user: "root",
    host: "localhost",
    database: "loja"
});

// Rota de teste
const test = (req, res) => {
    res.send("back-end respondendo");
};

// CRUD - Read
const read = (req, res) => {
    con.query("SELECT * FROM Clientes", (err, result) => {
        if (err) {
            res.json(err);
        } else {
            res.json(result);
        }
    });
    res.json("oi");
};

// Configuração de saída - FrontEnd
const app = express();

app.use(express.json());
app.use(cors());

// Rotas de saída - FrontEnd
app.get("/", test);
app.get("/clientes", read);

// Teste porta do console
app.listen(3000, () => {
    console.log("Hello, World!");
    console.log("back-end respondendo na porta 3000");
});
