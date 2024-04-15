-- Crie uma consulta que liste os funcionários em ordem alfabética de nome
SELECT * FROM Funcionarios ORDER BY nome;

-- Crie uma consulta que liste todos os funcionários e seus telefones
SELECT f.matricula, f.nome, t.telefone FROM Funcionarios as f INNER JOIN Telefones as t ON t.funcionario = f.matricula;

-- Crie uma consulta que mostre somente os veículos da marca 'Fiat' ordenados pelo ano decrescente
SELECT * FROM Veiculos WHERE marca = "Fiat" ORDER BY ano;

-- Crie uma consulta que mostre todos os dados dos veículos e a quantidade de manutenções realizadas em cada um
SELECT v.*, COUNT(m.veiculo) as "quantidade_manutencao" FROM Veiculos as v INNER JOIN Manutencoes as m ON v.placa = m.veiculo GROUP BY v.placa;

-- Crie uma consulta que mostre todas as manutenções acrescida do nome do funcionário que a realizou e o modelo do veículo e salve como uma visão chamada vw_totas_as_manutencoes
CREATE VIEW vw_totas_as_manutencoes AS
SELECT m.funcionario, f.nome, m.id_manutencao, v.modelo
FROM Manutencoes as m 
INNER JOIN Funcionarios as f ON m.funcionario = f.matricula 
INNER JOIN Veiculos as v ON m.veiculo = v.placa;

