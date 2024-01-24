drop database if exists loja;     -- Exclui o banco de dados loja se ele exisitr (DEV)
create database loja;
use loja;

-- Criar uma tabela de clientes
create table Clientes(
    id integer primary key not null auto_increment,
    cpf varchar(15) not null unique,
    nome varchar(20) not null,
    sobrenome varchar(20) not null,
    nascimento date not null
);

describe Clientes;                -- Ver as colunas da table
show tables;                      -- Mostra todas as tabelas existentes
drop table Clientes;              -- Exclui a tabela
