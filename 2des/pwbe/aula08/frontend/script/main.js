const fetchClientes = async () => {
    const clientes = fetch("http://localhost/clientes")
        .then((res) => res.json());
    
    return await clientes;
}


