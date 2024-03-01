const express = require("express");
const router = express.Router();

const clientes = require("../controllers/cliente");
const funcionarios = require("../controllers/funcionario");

const verifier = (req, res) => {
    res.json("Back-end sucinto");
}

router.get("/", verifier);

router.get("/clientes", clientes.getAll)
router.get("/clientes/:id", clientes.get);
router.post("/clientes", clientes.create);
router.put("/clientes/:id", clientes.update);
router.delete("/clientes/:id", clientes.deleteData);

router.get("/funcionarios", funcionarios.getAll)
router.get("/funcionarios/:id", funcionarios.get);
router.post("/funcionarios", funcionarios.create);
router.put("/funcionarios/:id", funcionarios.update);
router.delete("/funcionarios/:id", funcionarios.deleteData);

module.exports = router;
