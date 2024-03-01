DROP DATABASE IF EXISTS transportadora;
CREATE DATABASE transportadora;
USE transportadora;

CREATE TABLE Cliente(
    id_cliente integer primary key unique not null auto_increment,
    nome varchar(50) not null,
    email varchar(50) not null,
    endereco varchar(50) not null,
    telefone varchar(20) not null
);

CREATE TABLE Funcionario(
    id_funcionario integer primary key unique not null auto_increment,
    nome varchar(50) not null,
    cargo varchar(50) not null,
    salario integer not null
);

CREATE TABLE Veiculo(
    id_veiculo integer primary key unique not null auto_increment,
    placa varchar(7) unique not null,
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
    motorista integer not null,
    id_veiculo integer not null,
    id_rota integer not null,
    inicio date not null,
    fim date not null,
    statusEntrega varchar(20) not null
);

CREATE TABLE Pedido(
    id_pedido integer primary key unique not null auto_increment,
    id_cliente integer not null,
    id_entrega integer not null,
    valor integer not null,
    data_pedido date not null
);

ALTER TABLE Entrega ADD FOREIGN KEY (id_veiculo) REFERENCES Veiculo(id_veiculo);
ALTER TABLE Entrega ADD FOREIGN KEY (id_rota) REFERENCES Rota(id_rota);
ALTER TABLE Entrega ADD FOREIGN KEY (motorista) REFERENCES Funcionario(id_funcionario);

ALTER TABLE Pedido ADD FOREIGN KEY (id_cliente) REFERENCES Cliente(id_cliente);
ALTER TABLE Pedido ADD FOREIGN KEY (id_entrega) REFERENCES Entrega(id_entrega);

INSERT INTO Cliente(nome, email, endereco, telefone) VALUES
("Ana Maria", "anamaria@email.com", "Rua dos Palmares", 19993887103),
("Jorge Amaro", "jorgeamaro@email.com", "Rua dos Carvalhos", 19993284199),
("Lucas Luco", "lucasluco@email.com", "Rua dos Pinheiros", 19999117553),
("Larissa Gonçalves", "larrissagon@email.com", "Rua dos Abaobá", 19966817116),
("Junior Pires", "juniorpire@email.com", "Rua dos Secoia", 19973517519);

INSERT INTO Veiculo(placa, modelo, capacidade) VALUES
("MUL3048", "Caminhao", 150),
("JTR2527", "Moto", 50),
("IHK7740", "Caminhao", 150);

INSERT INTO Rota(origem, destino, distancia) VALUES
("Rua Hamburgo", "Rua Gabriel Covelli", 150),
("Rua Hamburgo", "Rua Visconde de Nascar", 50),
("Rua Hamburgo", "Avenida Dalton", 150);

INSERT INTO Funcionario(nome, cargo, salario) VALUES 
("Gabriel Monteiro", "Motorista", 1970),
("Nascar de Nogueira", "Motorista", 2100),
("Mario Humbro", "Motorista", 1890);

INSERT INTO Entrega(motorista, id_veiculo, id_rota, inicio, fim, statusEntrega) VALUES 
(1, 1, 3, "2024-02-11", "2024-03-18", "Em andamento"),
(3, 2, 1, "2024-02-09", "2024-03-16", "Concluido"),
(2, 3, 2, "2024-02-08", "2024-03-17", "Atrasado"),
(1, 1, 3, "2024-02-20", "2024-03-27", "Concluida"),
(1, 1, 3, "2024-02-01", "2024-03-08", "Atrasado"),
(2, 3, 1, "2024-02-15", "2024-03-22", "Em andamento"),
(2, 3, 1, "2024-02-20", "2024-03-27", "Em andamento"),
(3, 2, 1, "2024-02-08", "2024-03-15", "Atrasado"),
(3, 2, 1, "2024-02-10", "2024-03-17", "Concluida"),
(2, 3, 1, "2024-02-07", "2024-03-14", "Concluida");

INSERT INTO Pedido(id_cliente, id_entrega, valor, data_pedido) VALUES 
(1, 1, 190, "2024-02-10"),
(1, 1, 290, "2024-02-10"),
(2, 4, 170, "2024-02-09"),
(2, 4, 90, "2024-02-09"),
(3, 2, 80, "2024-01-07"),
(3, 2, 375, "2024-02-07"),
(5, 7, 25, "2024-02-19"),
(5, 7, 915, "2024-02-19"),
(4, 2, 72, "2024-01-30"),
(4, 2, 112, "2024-02-30"),
(1, 9, 50, "2024-02-14"),
(1, 9, 567, "2024-02-14"),
(3, 10, 145, "2024-02-19"),
(3, 10, 35, "2024-02-19"),
(5, 8, 89, "2024-02-07"),
(5, 8, 19, "2024-02-07"),
(4, 6, 791, "2024-02-09"),
(4, 6, 815, "2024-02-09"),
(2, 3, 71, "2024-02-06"),
(2, 3, 87, "2024-02-06");
