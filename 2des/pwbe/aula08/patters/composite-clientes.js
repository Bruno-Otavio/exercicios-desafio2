const compositeClientes = (lista) => {
    const listaComposta = [];
    let cpf = 0;
    lista.forEach((c) => {
        if (cpf != c.cpf) {
            c.telefones = [];
            
        }
    });
    return listaComposta;
};

module.exports = compositeClientes;
