const form = document.querySelector("#weatherForm");

const apiKey = "";

form.addEventListener("submit", (event) => {
    event.preventDefault();

    const city = document.querySelector("#cityInput").value.trim();

    if (city === "") {
        alert("Por favor, digite o nome da cidade.");
        return;
    }

    const apiUri = `https://api.openweathermap.org/data/2.5/weather?q=${city}&units=metric&lang=pt_br&appid=${apiKey}`;

    const weatherCards = document.querySelector("#weatherCards");

    fetch(apiUri)
        .then(res => {
            if (!res.ok) {
                throw new Error("Error 404 - Cidade não encontrada");
            }

            return res.json();
        })
        .then(data => {
            const location = `${data.name}, ${data.sys.country}`;
            const temperatura = `${data.main.temp} °C`;
            const condition = `${data.weather[0].description}`;
            
            const weatherCard = `
                <div class="col-md-4 mb-4">
                    <div class="card">
                        <div class=card-body>
                            <h5 class="card-title">${location}</h5>
                            <p class="card-text">${temperatura}</p>
                            <p class="card-text">${condition}</p>
                            <p class="card-text">Umidade: ${data.main.humidity}%</p>
                        </div>
                    </div>
                </div>
            `;

            weatherCards.innerHTML = weatherCard;
        })
        // .catch(error => {
        //     alert(error.message);
        //     HTMLFormControlsCollection.error("Erro ao buscar dados: ", error);
        // });
});