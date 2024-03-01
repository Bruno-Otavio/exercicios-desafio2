const connection = require("../connect/connect");

const checkDataError = (data) => {
    for (let key in data) {
        if (data[key] === "") return true;
    }
}

class CRUD {
<<<<<<< HEAD:2des/bcd/aula04/transportadora1/api/src/controllers/crud.js
    constructor(query) {
        this.queries = query;
    }

    getAll = (req, res) => {
        connection.query(this.queries().getAll, (err, result) => {
=======
    constructor(data, table) {
        this.data = data;
        this.databaseTable = table;
    }

    getAll = (req, res) => {
        let query = `SELECT * FROM ${this.databaseTable}`;
        connection.query(query, (err, result) => {
>>>>>>> b049cdf18a54da86229034fae6c43d21638c98d9:2des/bcd/aula04/transportadora/api/src/controllers/crud.js
            if (err) res.status(400).json(err).end();
            else res.status(202).json(result).end();
        });
    }

    get = (req, res) => {
<<<<<<< HEAD:2des/bcd/aula04/transportadora1/api/src/controllers/crud.js
        const data = {...req.params};
        connection.query(this.queries(data).get, (err, result) => {
=======
        const id = req.params.id;
        let query = `SELECT * FROM ${this.databaseTable} WHERE id = "${id}"`;
        connection.query(query, (err, result) => {
>>>>>>> b049cdf18a54da86229034fae6c43d21638c98d9:2des/bcd/aula04/transportadora/api/src/controllers/crud.js
            if (err) res.status(404).json(err).end();
            else res.status(202).json(result[0]).end();
        });
    }

    create = (req, res) => {
<<<<<<< HEAD:2des/bcd/aula04/transportadora1/api/src/controllers/crud.js
        const data = {...req.body};
        connection.query(this.queries(data).create, (err, result) => {
            if (err || checkDataError(data)) {
                res.status(400).json(err).end();
            } else {
=======
        let query = `INSERT INTO ${this.databaseTable}(nome, descricao, valor) VALUE 
            ("${this.data.name}", "${this.data.description}", "${this.data.price}")`;

        connection.query(query, (err, result) => {
            if (err || checkDataError(item)) {
                res.status(400).json(err).end(); } else {
>>>>>>> b049cdf18a54da86229034fae6c43d21638c98d9:2des/bcd/aula04/transportadora/api/src/controllers/crud.js
                const newItem = req.body;
                newItem.id = result.insertId;
                res.status(201).json(newItem).end();
            }
        });
    }

    update = (req, res) => {
<<<<<<< HEAD:2des/bcd/aula04/transportadora1/api/src/controllers/crud.js
        const data = { id: req.params.id, ...req.body };
        connection.query(this.queries(data).update, (err, result) => {
=======
        let query = `UPDATE ${this.databaseTable} SET 
            nome = '${this.data.name}', 
            descricao = '${this.data.description}', 
            valor = ${this.data.price} 
            WHERE id = ${this.data.id}`;

        connection.query(query, (err, result) => {
>>>>>>> b049cdf18a54da86229034fae6c43d21638c98d9:2des/bcd/aula04/transportadora/api/src/controllers/crud.js
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

<<<<<<< HEAD:2des/bcd/aula04/transportadora1/api/src/controllers/crud.js
    deleteData = (req, res) => {
        const data = {...req.params};
        connection.query(this.queries(data).delete, (err, result) => {
=======
    deleteItem = (req, res) => {
        const id = req.params.id;
        let query = `DELETE FROM ${this.databaseTable} WHERE id = ${id}`;
        connection.query(query, (err, result) => {
>>>>>>> b049cdf18a54da86229034fae6c43d21638c98d9:2des/bcd/aula04/transportadora/api/src/controllers/crud.js
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
