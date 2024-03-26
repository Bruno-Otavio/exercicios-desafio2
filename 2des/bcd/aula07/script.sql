DROP DATABASE IF EXISTS aluguel_veiculos;
CREATE DATABASE aluguel_veiculos;
USE aluguel_veiculos;

CREATE TABLE Funcionarios(
    matricula INT PRIMARY KEY UNIQUE NOT NULL,
    nome VARCHAR(25) NOT NULL
);

CREATE TABLE Telefones(
    funcionario INT NOT NULL,
    telefone VARCHAR(25)
);

CREATE TABLE Veiculos(
    placa VARCHAR(9) PRIMARY KEY UNIQUE NOT NULL,
    modelo VARCHAR(25) NOT NULL,
    marca VARCHAR(25) NOT NULL,
    ano INT NOT NULL
);

CREATE TABLE Manutencoes(
    id_manutencao INT PRIMARY KEY UNIQUE NOT NULL AUTO_INCREMENT,
    inicio_manutencao DATETIME NOT NULL,
    fim_manutencao DATETIME,
    descricao VARCHAR(50) NOT NULL,
    veiculo VARCHAR(9) NOT NULL,
    funcionario INT NOT NULL
);

ALTER TABLE Telefones ADD FOREIGN KEY (funcionario) REFERENCES Funcionarios(matricula);

ALTER TABLE Manutencoes ADD FOREIGN KEY (veiculo) REFERENCES Veiculos(placa);
ALTER TABLE Manutencoes ADD FOREIGN KEY (funcionario) REFERENCES Funcionarios(matricula);
