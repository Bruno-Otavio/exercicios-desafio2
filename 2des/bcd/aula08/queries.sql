-- Crie uma consulta que liste os clientes em ordem alfabética de nome
SELECT * FROM Clientes ORDER BY nome;

-- Crie uma consulta que liste todos os clientes e seus telefones
SELECT * FROM Clientes as c LEFT JOIN Telefones as t ON c.id_cliente = t.id_cliente;

-- Crie uma consulta que liste todos os veículos em ordem crescente de marca e modelo
SELECT * FROM Veiculos ORDER BY modelo, marca;

-- Crie uma consulta que mostre somente os veículos da marca 'Fiat' ordenados pela diária decrescente
SELECT * FROM Veiculos WHERE marca = "Fiat" ORDER BY diaria DESC;

-- Crie uma consulta que mostre todos os dados dos veículos e a quantidade de aluguéis realizadas em cada um
SELECT v.*, COUNT(r.id_veiculo) as "quantidade_alugueis" FROM Veiculos as v INNER JOIN Reservas as r ON v.id_veiculo = r.id_veiculo GROUP BY v.id_veiculo;

-- Crie um relatório que mostre todos os auguéis acrescidos do nome do cliente, modelo e marca do veículo, dias, subtotal e salve como uma visão chamada vw_todos_os_alugueis
CREATE VIEW vw_todos_os_alugueis as
SELECT c.nome, v.modelo, v.marca, r.dias, r.subtotal
FROM Reservas as r 
INNER JOIN Clientes as c ON r.id_cliente = c.id_cliente 
INNER JOIN Veiculos as v ON r.id_veiculo = v.id_veiculo;
