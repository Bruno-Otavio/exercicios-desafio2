//Dependências - Frameworks
const express = require("express");
const mysql = require("mysql");
const cors = require("cors");



//Rota de teste
const teste = (req, res) => {
    res.json("Back-end respondendo ");
}

//Configurações de saída - FrontEnd
const app = express();
app.use(express.json());
app.use(cors());

//Teste e porta no console
app.listen(3000, () => {
    console.log("Back-end respondendo na porta 3000");
});