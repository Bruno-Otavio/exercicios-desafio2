USE aluguel_veiculos;

INSERT INTO Funcionarios VALUES
(48482, "Osvaldo Oliveira"),
(48542, "Jaqueline Teixeira"),
(48522, "Keli Matos"),
(48502, "Ursula Souza"),
(48512, "Larissa Souza"),
(48481, "Emili Moreira"),
(48412, "Jorge Santos"),
(48552, "Paulo Santana"),
(48492, "Henrique Lavras"),
(48302, "Maria Godoi"),
(48562, "Evandro Silva"),
(48553, "Nicolas Florença"),
(48442, "Nicoli Nakamura"),
(48182, "João Matos");


INSERT INTO Telefones VALUES
(48482, "19-72077-0521"),
(48482, "19-06078-6843"),
(48542, "19-23003-4864"),
(48522, "19-06486-6449"),
(48522, "19-53266-7923"),
(48502, "19-64378-2404"),
(48512, "19-64178-2404"),
(48481, "19-72097-0521"),
(48481, "19-06178-6843"),
(48412, "19-72177-0521"),
(48412, "19-06079-6843"),
(48502, "19-64378-2114"),
(48492, "19-72077-0321"),
(48492, "19-09178-6843"),
(48302, "19-64378-2401"),
(48562, "19-53315-2734"),
(48553, "19-06486-6149"),
(48553, "19-53466-7923"),
(48442, "19-23103-4864"),
(48182, "19-72077-1521"),
(48182, "19-06078-6833");

INSERT INTO Veiculos VALUES
("DEA-1981", "Uno", "Fiat", 2005),
("CBC-9945", "Fiorino", "Fiat", 2007),
("BEA-7835", "Saveiro", "VW", 2015),
("CBA-4403", "Sandeiro", "Renaut", 2012),
("BAC-8504", "Palio", "Fiat", 2004),
("BEB-5885", "Gol", "VW", 2013),
("EDK-2475", "Ranger", "Ford", 2005),
("CVC-4945", "Fiorino", "Fiat", 2007),
("EDB-2475", "Ranger", "Ford", 2005),
("DIA-7981", "Uno", "Fiat", 2005),
("CBL-4403", "Sandeiro", "Renaut", 2012),
("BBC-8104", "Palio", "Fiat", 2004),
("BEE-7735", "Saveiro", "VW", 2015),
("BER-5885", "Gol", "VW", 2013);

INSERT INTO Manutencoes(inicio_manutencao, fim_manutencao, descricao, veiculo, funcionario) VALUES
("2023-02-25", "2023-03-04", "Lanterna queimada", "DEA-1981", 48482),
("2023-03-13", "2023-03-21", "Farol queimado", "CBC-9945", 48542),
("2023-03-29", "2023-04-05", "Troca de pneus dianteiros", "BEA-7835", 48522),
("2023-04-14", "2023-04-24", "Troca de pneus dianteiros", "CBA-4403", 48502),
("2023-04-30", "2023-05-07", "Farol queimado", "BAC-8504", 48502),
("2023-05-16", "2023-05-25", "Troca de pneus traseiros", "BEB-5885", 48482),
("2023-06-05", "2023-06-10", "Retrovizor quebrado", "EDK-2475", 48482),
("2023-06-25", "2023-07-02", "Troca de óleo e revisão geral", "CVC-4945", 48502),
("2023-07-15", "2023-07-19", "Troca de Flúido de Freio", "EDB-2475", 48482),
("2023-08-04", "2023-08-10", "Problemas no cabo do acelerador", "DIA-7981", 48502),
("2023-08-24", "2023-08-31", "Pane elétrica", "CBL-4403", 48562),
("2023-08-27", "2023-09-04", "Rebimboca da parafuzeta", "BBC-8104", 48522),
("2023-08-30", "2023-09-04", "Troca de cavalos por poneis", "BEE-7735", 48542),
("2023-09-02", "2023-09-07", "Lanterna queimada", "BER-5885", 48482);
