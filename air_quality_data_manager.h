#pragma once
#include <string>
#include <vector>
#include "air_quality_data.h"

class AirQualityDataManager {
public:
    void addAirQualityData(const AirQualityData& airQualityData);
    void removeAirQualityData(const std::string& city);
    const AirQualityData* getAirQualityData(const std::string& city) const;
    double calculateEuropeanAQI(const AirQualityData& airQualityData) const;
    // Additional methods for managing air quality data

private:
    std::vector<AirQualityData> airQualityDataList;
};
