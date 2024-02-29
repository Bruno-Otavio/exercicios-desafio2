const connection = require("../connect/connect");
const crud = require("./crud");

const getAll = (req, res, param) => {
    console.log(param);
    let query = "SELECT * FROM item";
    connection.query(query, (err, result) => {
        if (err) res.status(400).json(err).end();
        else res.status(202).json(result).end();
    });
}

module.exports = { getAll };
