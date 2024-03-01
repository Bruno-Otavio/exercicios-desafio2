const Crud = require("./crud");

const table = "veiculo";

const queries = (data={}) => {
    return {
        getAll: `SELECT * FROM ${table}`,
        get: `SELECT * FROM ${table} WHERE id_${table} = ${data.id}`,
        create: `INSERT INTO ${table}(placa, modelo, capacidade) VALUE 
            ("${data.placa}", 
            "${data.modelo}", 
            "${data.capacidade}"`,
        update: `UPDATE ${table} SET 
            placa = '${data.placa}', 
            modelo = '${data.modelo}', 
            capacidade = '${data.capacidade}'
            WHERE id_${table} = ${data.id}`,
        delete: `DELETE FROM ${table} WHERE id_${table} = ${data.id}`
    }
};


class Funcionarios extends Crud {
    constructor(queries) {
        super(queries);
    }
}

const funcionarios = new Funcionarios(queries);
module.exports = funcionarios;
