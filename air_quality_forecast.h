#pragma once
#include <vector>
#include "AirQualityData.h"

class AirQualityForecast {
public:
    void addAirQualityData(const AirQualityData& airQualityData);
    // Methods to display air quality forecast data
private:
    std::vector<AirQualityData> forecastData;
};
