const fetchVeiculos = async () => {
    const veiculos = fetch("http://localhost:3000/veiculos")
        .then((res) => res.json());

    return veiculos;
}

export { fetchVeiculos };
