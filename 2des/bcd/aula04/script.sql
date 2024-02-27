DROP DATABASE IF EXISTS transportadora;
CREATE DATABASE transportadora;
USE transportadora;

CREATE TABLE Cliente(
    id_cliente integer primary key unique not null auto_increment,
    nome varchar(50) not null,
    email varchar(50) not null,
    endereco varchar(50) not null,
    telefone integer not null
);

CREATE TABLE Funcionario(
    id_funcionario integer primary key unique not null auto_increment,
    nome varchar(50) not null,
    cargo varchar(50) not null,
    salario integer not null
);

CREATE TABLE Veiculo(
    id_funcionario integer primary key unique not null auto_increment,
    placa varchar(6) unique not null,
    modelo varchar(50) not null,
    capacidade integer not null
);

CREATE TABLE Rota(
    id_rota integer primary key unique not null auto_increment,
    origem varchar(50) not null,
    destino varchar(50) not null,
    distancia integer not null
);

CREATE TABLE Entrega(
    id_entrega integer primary key unique not null auto_increment,
    inicio datetime not null,
    fim datetime not null,
    motorista integer unique not null,
    statusEntrega varchar(20) not null,
    id_veiculo integer unique not null,
    id_rota integer unique not null,
    foreign key (id_veiculo) references Veiculo(id_veiculo),
    foreign key (id_rota) references Rota(id_rota),
    foreign key (motorista) references Funcionario(id_funcionario)
);

CREATE TABLE Pedido(
    id_pedido integer primary key unique not null auto_increment,
    valor integer not null,
    data_pedido date not null,
    id_cliente integer unique not null,
    id_entrega integer unique not null,
    foreign key (id_cliente) references Cliente(id_cliente),
    foreign key (id_entrega) references Entrega(id_entrega)
);
