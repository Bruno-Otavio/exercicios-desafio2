-- 1 Crie uma consulta que mostre somente os nomes de todos os clientes
SELECT nome FROM cliente;

-- 2 Crie uma consulta que agrupe as estregas e mostre quantas cada motorista fez
SELECT motorista, count(motorista) as "entregas" FROM `entrega` GROUP BY motorista;
SELECT motorista, f.nome, count(motorista) as "entregas" FROM `entrega` as e INNER JOIN `funcionario` as f ON e.motorista = f.idFuncionario GROUP BY motorista;

-- 3 Salve a consulta anterior em um relatório chamado 'entregas por motorista'
CREATE VIEW entregas_por_motorista as
SELECT motorista, count(motorista) as "entregas" FROM `entrega` GROUP BY motorista;

-- 4 Crie uma consulta que mostre todas as rotas ordenadas por distância
SELECT idRota, distancia FROM `rota` ORDER BY distancia DESC;

-- 5 Crie uma consulta que mostre os funcionários ordenados por nome
SELECT nome FROM `funcionario` ORDER BY nome;

-- 6 Crie uma consulta que mostre qual veículo fez mais entregas e o total de entregas que ele fez.
SELECT placa, idEntrega, COUNT(idEntrega) as "total_entregas" FROM `entrega` GROUP BY placa ORDER BY total_entregas DESC LIMIT 1;

-- 7 Crie um relatório que mostre todas as entregas com os nomes dos motoristas, modelos dos veículos, salve como 'relatorio_de_entregas_01'
CREATE VIEW relatorio_de_entregas_01 as
SELECT f.nome, v.modelo, idEntrega, e.inicio, e.fim, e.status FROM `entrega` as e 
INNER JOIN `funcionario` as f ON e.motorista = f.idFuncionario 
INNER JOIN `veiculo` as v ON e.placa = v.placa;

-- 8 Crie um relatório que mostre todas as entregas com os nomes dos motoristas, modelos dos veículos e o valor total da entrega, salve como 'relatorio_de_entregas_02'
CREATE VIEW relatorio_de_entregas_02 as
SELECT e.idEntrega, f.nome, v.modelo, e.inicio, e.fim, e.status, SUM(p.valor) as "total_valor_entrega" FROM `entrega` as e 
INNER JOIN `funcionario` as f ON e.motorista = f.idFuncionario 
INNER JOIN `veiculo` as v ON e.placa = v.placa
INNER JOIN `pedido` as p ON e.idEntrega = p.idEntrega
GROUP BY e.idEntrega;
