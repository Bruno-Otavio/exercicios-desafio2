const CRUD = require("../CRUD");

const table = "funcionario";

const queries = (data={}) => {
    return {
        getAll: `SELECT * FROM ${table}`,
        get: `SELECT * FROM ${table} WHERE `
    }
}

class Funcionario extends CRUD {
    constructor(queries) {
        super(queries);
    }
}