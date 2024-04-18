import { fetchVeiculos } from "./main.js";

const loadVeiculos = async () => {
    const container = document.querySelector("#container-cars");
    const element = container.querySelector(".car.hidden");

    const veiculos = await fetchVeiculos();

    veiculos.forEach((veiculo) => {
        const newElement = element.cloneNode(true);
        
        newElement.querySelector(".car-marca").textContent = veiculo.marca;
        newElement.querySelector(".car-modelo").textContent = veiculo.modelo;
        newElement.querySelector(".car-diaria").textContent = veiculo.diaria;

        newElement.classList.remove("hidden");
        container.append(newElement);
    });
}

window.onload = loadVeiculos;
