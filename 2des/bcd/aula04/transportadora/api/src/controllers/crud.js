const connection = require("../connect/connect");

class CRUD {
    constructor(data) {
        this.data = data;
    }

    getAll = (req, res) => {
        let query = "SELECT * FROM item";
        connection.query(query, (err, result) => {
            if (err) res.status(400).json(err).end();
            else res.status(202).json(result).end();
        });
    }

    get = (req, res) => {
        const id = req.params.id;
        let query = `SELECT * FROM item WHERE id = "${id}"`;
        connection.query(query, (err, result) => {
            if (err) res.status(404).json(err).end();
            else res.status(202).json(result[0]).end();
        });
    }

    create = (req, res) => {
        let query = `INSERT INTO item(nome, descricao, valor) VALUE ("${this.data.name}", "${this.data.description}", "${this.data.price}")`;
        connection.query(query, (err, result) => {
            if (err || checkDataError(item)) {
                res.status(400).json(err).end();
            } else {
                const newItem = req.body;
                newItem.id = result.insertId;
                res.status(201).json(newItem).end();
            }
        });
    }

    update = (req, res) => {
        let query = `UPDATE item SET nome = '${this.data.name}', descricao = '${this.data.description}', valor = ${this.data.price} WHERE id = ${this.data.id}`;
        connection.query(query, (err, result) => {
            if (err || checkDataError(data)) res.status(400).json(err).end();
            else {
                if (result.affectedRows > 0) {
                    res.status(202).json(req.body).end();
                } else {
                    res.status(404).json(err).end();
                }
            }
        });
    }

    deleteItem = (req, res) => {
        const id = req.params.id;
        let query = `DELETE FROM item WHERE id = ${id}`;
        connection.query(query, (err, result) => {
            if (err) res.status(404).json(err).end();
            else {
                if (result.affectedRows > 0) {
                    res.status(204).json(result).end();
                }
                else {
                    result.message = "ID not found";
                    res.status(404).json(result).end();
                }
            }
        });
    }
}

module.exports = CRUD;