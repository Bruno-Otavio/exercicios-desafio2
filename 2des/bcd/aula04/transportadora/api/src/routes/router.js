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

router.get("/entregas", entrega.getAll)
router.get("/entregas/:id", entrega.get);
router.post("/entregas", entrega.create);
router.put("/entregas/:id", entrega.update);
router.delete("/entregas/:id", entrega.deleteData);

router.get("/pedidos", pedido.getAll)
router.get("/pedidos/:id", pedidos.get);
router.post("/pedidos", pedidos.create);
router.put("/pedidos/:id", pedidos.update);
router.delete("/pedidos/:id", pedidos.deleteData);

router.get("/veiculos", veiculos.getAll)
router.get("/veiculos/:id", veiculos.get);
router.post("/veiculos", veiculos.create);
router.put("/veiculos/:id", veiculos.update);
router.delete("/veiculos/:id", veiculos.deleteData);

module.exports = router;
