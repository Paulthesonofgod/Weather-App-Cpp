//
// Created by paulthesonofgod on 10/04/24.
//
#include <iostream>
#include "json.hpp"

using json = nlohmann::json;

int main() {
    // Sample JSON response string
    std::string jsonStr = R"(
        {
            "current": {
                "time": "2022-01-01T15:00",
                "temperature_2m": 2.4,
                "wind_speed_10m": 11.9
            },
            "hourly": {
                "time": ["2022-07-01T00:00", "2022-07-01T01:00"],
                "wind_speed_10m": [3.16, 3.02],
                "temperature_2m": [13.7, 13.3],
                "relative_humidity_2m": [82, 83]
            }
        }
    )";

    // Parse JSON string
    json data = json::parse(jsonStr);

    // Extract current weather data
    auto current = data["current"];
    std::cout << "Current Weather:" << std::endl;
    std::cout << "Time: " << current["time"] << std::endl;
    std::cout << "Temperature at 2m: " << current["temperature_2m"] << "°C" << std::endl;
    std::cout << "Wind Speed at 10m: " << current["wind_speed_10m"] << "m/s" << std::endl;

    // Extract hourly forecast data
    auto hourly = data["hourly"];
    std::cout << "\nHourly Forecast:" << std::endl;
    auto timeArray = hourly["time"];
    auto windSpeedArray = hourly["wind_speed_10m"];
    auto temperatureArray = hourly["temperature_2m"];
    auto humidityArray = hourly["relative_humidity_2m"];
    for (size_t i = 0; i < timeArray.size(); ++i) {
        std::cout << "Time: " << timeArray[i] << std::endl;
        std::cout << "Temperature at 2m: " << temperatureArray[i] << "°C" << std::endl;
        std::cout << "Wind Speed at 10m: " << windSpeedArray[i] << "m/s" << std::endl;
        std::cout << "Relative Humidity at 2m: " << humidityArray[i] << "%" << std::endl << std::endl;
    }

    return 0;
}
