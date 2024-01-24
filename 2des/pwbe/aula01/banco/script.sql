-- DDL
drop database if exists loja;
create database loja;
use loja;

create table Clientes(
    id integer primary key auto_increment,
    cpf varchar(15) not null unique,
    nome varchar(25) not null,
    sobrenome varchar(25) not null,
    nascimento date not null
);

describe Clientes;

-- DDL - Popular com dados de teste
insert into Clientes(cpf, nome, sobrenome, nascimento) values
("111.111.111.111-11", "Jair", "Silva", "1980-08-25"),
("211.111.111.111-11", "Maria", "Reneta", "2001-03-17"),
("311.111.111.111-11", "Julho", "Lopes", "1995-05-04");

select * from Clientes;
