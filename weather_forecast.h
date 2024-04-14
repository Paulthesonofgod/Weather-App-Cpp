#pragma once
#include <vector>
#include "weather_data.h"

class WeatherForecast {
public:
    void addWeatherData(const WeatherData& weatherData);
    // Methods to display weather forecast data
private:
    std::vector<WeatherData> forecastData;
};
