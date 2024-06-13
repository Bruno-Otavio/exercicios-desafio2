DELIMITER //
CREATE PROCEDURE calcSubtotais()
BEGIN
    UPDATE Aluguel a
    SET a.subtotal = (SELECT datediff(a.devolucao, a.retirada) * v.diaria
                      FROM Veiculo v
                      WHERE a.placa = v.placa);
END//
DELIMITER ;

CALL calcSubtotais();
SELECT * FROM Aluguel;

SELECT * FROM Aluguel WHERE id = 1;

DELIMITER //
CREATE TRIGGER trigger_calc_subtotal BEFORE UPDATE ON Aluguel
FOR EACH ROW
BEGIN
    SET NEW.subtotal = (SELECT datediff(NEW.devolucao, NEW.retirada) * v.diaria
                        FROM Veiculo v
                        WHERE NEW.placa = v.placa);
END//
DELIMITER ;

UPDATE Aluguel SET devolucao = '2024-06-15' WHERE id = 1;

SELECT * FROM Aluguel WHERE id = 1;
