//Dependências - Frameworks
const express = require("express");
const router = express.Router();

const cliente = require("./controller/cliente")

//Rota de teste
const teste = (req, res) => {
    res.json("Back-end respondendo ");
}

//Rotas de Saída - FrontEnd
router.get("/", teste);
router.post("/clientes", cliente.create);
router.get("/clientes", cliente.read);
router.put("/clientes/:id", cliente.update);
router.delete("/clientes/:id", cliente.del);
