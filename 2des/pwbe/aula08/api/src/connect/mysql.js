const mysql = require('mysql');

const con = mysql.createConnection({
    host: "localhost",
    user: "root",
    //password: "ROOT",
    database: "alugueis"
});

module.exports = con;