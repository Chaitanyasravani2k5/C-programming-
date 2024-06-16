document.addEventListener("DOMContentLoaded", () => {
    const form = document.getElementById("form");
    const latitudeInput = document.getElementById("latitude");
    const longitudeInput = document.getElementById("longitude");
    const resultContainer = document.getElementById("result");
    const aqiResult = document.getElementById("aqi");
    const coResult = document.getElementById("co");
    const no2Result = document.getElementById("no2");
    const o3Result = document.getElementById("o3");
    const pm25Result = document.getElementById("pm25");
    const pm10Result = document.getElementById("pm10");
    const so2Result = document.getElementById("so2");

    form.addEventListener("submit", (event) => {
        event.preventDefault();
        const latitude = latitudeInput.value;
        const longitude = longitudeInput.value;
        const url = `https://air-quality.p.rapidapi.com/history/airquality?lon=${longitude}&lat=${latitude}`;

        const options = {
            method: 'GET',
            headers: {
                'x-rapidapi-key': '41569fcd01msh14e400628e76b16p187f31jsn86bd0411f3f8',
                'x-rapidapi-host': 'air-quality.p.rapidapi.com'
            }
        };

        fetch(url, options)
        .then(response => response.json())
        .then(result=>{
            let readings = result.data[0];
            console.log(readings);
            aqiResult.textContent=readings.aqi;
            coResult.textContent=readings.co;
            no2Result.textContent=readings.no2;
            pm25Result.textContent=readings.pm2;
            o3Result.textContent=readings.o3;
            pm10Result.textContent=readings.pm10;
            so2Result.textContent=readings.so2;
            resultContainer.style.display = 'flex';

        })
    });
});
