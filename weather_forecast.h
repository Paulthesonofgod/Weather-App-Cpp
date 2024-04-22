#pragma once
#include <vector>
#include "weather_data.h"
#include "air_quality_data.h"

class WeatherForecast {
public:
    void addWeatherData(const WeatherData& weatherData);
    void addAirQualityData(const AirQualityData& airQualityData);
    void displayForecast() const;
    void displayAirQuality() const;

private:
    std::vector<WeatherData> forecastData;
    std::vector<AirQualityData> airQualityDataVector; // Renamed to avoid conflict
};

void WeatherForecast::addWeatherData(const WeatherData& weatherData) {
    forecastData.push_back(weatherData);
}

void WeatherForecast::addAirQualityData(const AirQualityData& airQualityData) {
    airQualityDataVector.push_back(airQualityData); // Corrected method
}

void WeatherForecast::displayForecast() const {
    for (const auto& data : forecastData) {
        // Display forecast data
        std::cout << "City: " << data.getCity() << std::endl;
        // Add more information as needed
    }
}

void WeatherForecast::displayAirQuality() const {
    for (const auto& data : airQualityDataVector) { // Corrected variable name
        // Display air quality data
        std::cout << "City: " << data.getCity() << std::endl;
        // Add more information as needed
    }
}
