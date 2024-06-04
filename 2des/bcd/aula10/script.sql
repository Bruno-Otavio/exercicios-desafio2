CREATE FUNCTION convert_to_reais (f_pedido_id INT) RETURNS CHAR(20)
	READS SQL data
BEGIN
	DECLARE f_valor DECIMAL(8,2)
    SELECT valor INTO f_valor FROM pedidos WHERE pedido_id = f_pedido_id

    RETURN CONCAT('R$ ',f_valor)
END

SELECT convert_to_reais(1);
