#pragma once
#include <vector>
#include "air_quality_data.h"
#include <iostream>

class AirQualityForecast {
public:
    // Add a method to add air quality forecast data
    void addAirQualityData(const AirQualityData& airQualityData) {
        forecastData.push_back(airQualityData);
    }

    // Method to display air quality forecast data
    void displayForecastData() const {
        for (const auto& data : forecastData) {
            std::cout << "Air Quality Forecast for " << data.getCity() << ":" << std::endl;
            // Assuming the AirQualityData class has a method to retrieve variables
            std::cout << "PM2.5: " << data.getVariable("pm25") << " µg/m³" << std::endl;
            std::cout << "PM10: " << data.getVariable("pm10") << " µg/m³" << std::endl;
            std::cout << "Ozone: " << data.getVariable("ozone") << " ppb" << std::endl;
            std::cout << "NO2: " << data.getVariable("no2") << " ppb" << std::endl;
            // Add display for other variables as needed
            std::cout << std::endl;
        }
    }
private:
    std::vector<AirQualityData> forecastData;
};
