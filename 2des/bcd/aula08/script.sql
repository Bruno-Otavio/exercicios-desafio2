DROP DATABASE IF EXISTS aluguel_veiculos;
CREATE DATABASE aluguel_veiculos;
USE aluguel_veiculos;

CREATE TABLE Clientes(
    `id_cliente` INTEGER PRIMARY KEY UNIQUE NOT NULL AUTO_INCREMENT,
    `cpf` VARCHAR(15) UNIQUE NOT NULL,
    `nome` VARCHAR(50) NOT NULL
);

CREATE TABLE Telefones(
    `id_cliente` INTEGER NOT NULL,
    `telefone` VARCHAR(25) NOT NULL
);

CREATE TABLE Veiculos(
    `id_veiculo` INTEGER PRIMARY KEY NOT NULL AUTO_INCREMENT,
    `placa` VARCHAR(9) UNIQUE NOT NULL,
    `modelo` VARCHAR(25) NOT NULL,
    `marca` VARCHAR(25) NOT NULL,
    `tipo` VARCHAR(25) NOT NULL,
    `diaria` FLOAT(10, 2) NOT NULL
);

CREATE TABLE Reservas(
    `id_reserva` INTEGER PRIMARY KEY NOT NULL AUTO_INCREMENT,
    `reserva` DATE NOT NULL,
    `retirada` DATE,
    `devolucao` DATE,
    `dias` INTEGER NOT NULL,
    `status` VARCHAR(25) NOT NULL,
    `subtotal` FLOAT(10, 2) NOT NULL,
    `id_cliente` INTEGER NOT NULL,
    `id_veiculo` INTEGER NOT NULL
);

ALTER TABLE Telefones ADD FOREIGN KEY (id_cliente) REFERENCES Clientes(id_cliente);

ALTER TABLE Reservas ADD FOREIGN KEY (id_cliente) REFERENCES Clientes(id_cliente);
ALTER TABLE Reservas ADD FOREIGN KEY (id_veiculo) REFERENCES Veiculos(id_veiculo);
