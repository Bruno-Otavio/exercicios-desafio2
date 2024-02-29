const express = require("express");
const router = express.Router();

const cliente = require("../controllers/cliente");

const verifier = (req, res) => {
    res.json("Back-end sucinto");
}

router.get("/", verifier);
router.get("/clientes", cliente.getAll)

module.exports = router;
