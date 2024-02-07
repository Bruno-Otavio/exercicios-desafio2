drop database if exists academia_banco;
create database academia_banco;
use academia_banco;

create table Funcionario(
    id_funcionario integer primary key unique not null auto_increment,
    cpf varchar(14) unique not null,
    nome varchar(25) not null,
    nascimento date not null,
    cep varchar(8) not null,
    numero integer,
    complemento varchar(100)
);

create table Cliente(
    id_client integer primary key unique not null auto_increment,
    cpf varchar(14) unique not null,
    nome varchar(25) not null,
    nascimento date not null,
    cep varchar(8) not null,
    numero integer,
    complemento varchar(100),
    id_instrutor integer not null
);

create table Instrutor(
    id_instrutor integer primary key unique not null auto_increment,
    id_funcionario integer not null,
    id_client integer not null,
    horario time,
    foreign key (id_funcionario) references Funcionario(id_funcionario),
    foreign key (id_client) references Cliente(id_client)
);

create table Pagamento(
    id_pagamento integer primary key unique not null auto_increment,
    id_client integer not null,
    valor float not null,
    data_pago date not null,
    foreign key (id_client) references Cliente(id_client)
);

create table Frequencia(
    dia datetime not null,
    id_client integer not null,
    presente boolean,
    foreign key (id_client) references Cliente(id_client)
);

create table Equipamento(
    id_equipamento integer primary key unique not null auto_increment,
    nome varchar(50) not null,
    funcao varchar(50)
);

show tables;
