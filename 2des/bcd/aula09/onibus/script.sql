DROP DATABASE IF EXISTS `onibus_paradas`;
CREATE DATABASE `onibus_paradas`;
USE `onibus_paradas`;

CREATE TABLE Dirige(
    `CPF` varchar(14) unique not null,
    `ID_Linha` varchar(20) not null
);

CREATE TABLE Horario(
    `ID_Linha` varchar(20) not null,
    `horario` time not null
);

CREATE TABLE Linha(
    `ID_Linha` varchar(20) primary key unique not null,
    `descricao_linha` varchar(50) not null
);

CREATE TABLE Motorista(
    `CPF` varchar(14) unique primary key not null,
    `nome_motorista` varchar(50) not null
);

CREATE TABLE Telefone(
    `CPF` varchar(14) not null,
    `numero` varchar(14) unique not null
);

ALTER TABLE Dirige ADD FOREIGN KEY (`CPF`) REFERENCES Motorista(`CPF`);

ALTER TABLE Horario ADD FOREIGN KEY (`ID_Linha`) REFERENCES Linha(`ID_Linha`);

ALTER TABLE Telefone ADD FOREIGN KEY (`CPF`) REFERENCES Motorista(`CPF`);
