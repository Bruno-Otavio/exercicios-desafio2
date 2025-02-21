require('dotenv').config();

const PORT = process.env.PORT;
const express = require('express');
const methodOverride = require('method-override');

const routes = require('./src/routes');

const app = express();

app.set('view engine', 'pug')
    .use(express.urlencoded({ extended: true }))
    .use(express.static('public'))
    .use(methodOverride('_method'))
    .use(routes);

app.listen(PORT, () => console.log(`Server working on port ${PORT}`));
