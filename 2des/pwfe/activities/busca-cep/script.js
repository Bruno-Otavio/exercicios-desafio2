const form = document.querySelector("#cep-form");

form.addEventListener("submit", async (event) => {
    event.preventDefault();
    const cep = event.target.cep.value;
    const dados = await getInformation(cep);
    updateValues(dados);
});

async function getInformation(cep) {    
    const dados = await fetch(`https://cdn.apicep.com/file/apicep/${cep}.json`)
        .then(res => res.json())
    return dados;
}

function updateValues(data) {
    document.querySelector("#state-text").innerHTML = data.state;
    document.querySelector("#city-text").innerHTML = data.city;
    document.querySelector("#district-text").innerHTML = data.district;
    document.querySelector("#address-text").innerHTML = data.address;
}
