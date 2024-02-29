const mysql = require("mysql");

const connect = mysql.createConnection({
    user: "root",
    host: "localhost",
    database: "transportadora"
});

module.exports = connect;
