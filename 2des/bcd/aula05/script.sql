-- 1 Crie uma consulta que mostre somente os nomes de todos os clientes
SELECT nome FROM cliente;

-- 2 Crie uma consulta que agrupe as estregas e mostre quantas cada motorista fez
SELECT motorista, count(motorista) as "entregas" FROM `entrega` GROUP BY motorista;

-- 3 Salve a consulta anterior em um relatório chamado 'entregas por motorista'
CREATE VIEW entregas_por_motorista as
SELECT motorista, count(motorista) as "entregas" FROM `entrega` GROUP BY motorista;

-- 4 Crie uma consulta que mostre todas as rotas ordenadas por distância
SELECT idRota, distancia FROM `rota` ORDER BY distancia DESC;

-- 5 Crie uma consulta que mostre os funcionários ordenados por nome
SELECT nome FROM `funcionario` ORDER BY nome;

-- 6 Crie uma consulta que mostre qual veículo fez mais entregas e o total de entregas que ele fez.
SELECT placa, idEntrega, COUNT(idEntrega) as "total_entregas" FROM `entrega` GROUP BY placa ORDER BY total_entregas DESC LIMIT 1;