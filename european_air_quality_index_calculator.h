#pragma once
#include <string>
#include <iostream>

class EuropeanAirQualityIndexCalculator {
public:
    [[maybe_unused]] double calculateAQI(double concentration, const std::vector<std::pair<double, double>>& breakpoints) const {
        // Find the corresponding AQI interval
        for (size_t i = 0; i < breakpoints.size(); ++i) {
            if (concentration >= breakpoints[i].first && concentration <= breakpoints[i].second) {
                double aqi_low = aqi_breakpoints[i];
                double aqi_high = aqi_breakpoints[i + 1];
                double conc_low = breakpoints[i].first;
                double conc_high = breakpoints[i].second;
                // Linear interpolation to calculate AQI
                return (aqi_high - aqi_low) / (conc_high - conc_low) * (concentration - conc_low) + aqi_low;
            }
        }
        return 0.0; // Default AQI value
    }

private:
    // Define breakpoints for each pollutant
    // PM2.5 breakpoints and corresponding AQI values
    const std::vector<std::pair<double, double>> pm25_breakpoints = {
            {0.0, 12.0},  // AQI 0-50
            {12.1, 35.4}, // AQI 51-100
            {35.5, 55.4}, // AQI 101-150
            {55.5, 150.4},// AQI 151-200
            {150.5, 250.4}, // AQI 201-300
            {250.5, 350.4}, // AQI 301-400
            {350.5, 500.4}  // AQI 401-500
    };

// PM10 breakpoints and corresponding AQI values
    const std::vector<std::pair<double, double>> pm10_breakpoints = {
            {0.0, 54.0},   // AQI 0-50
            {55.0, 154.0}, // AQI 51-100
            {155.0, 254.0},// AQI 101-150
            {255.0, 354.0},// AQI 151-200
            {355.0, 424.0},// AQI 201-300
            {425.0, 504.0},// AQI 301-400
            {505.0, 604.0} // AQI 401-500
    };

// Ozone (O3) breakpoints and corresponding AQI values
    const std::vector<std::pair<double, double>> ozone_breakpoints = {
            {0.0, 54.0},   // AQI 0-50
            {55.0, 70.0},  // AQI 51-100
            {71.0, 85.0},  // AQI 101-150
            {86.0, 105.0}, // AQI 151-200
            {106.0, 200.0},// AQI 201-300
            {201.0, 504.0} // AQI 301-500
    };

// Nitrogen dioxide (NO2) breakpoints and corresponding AQI values
    const std::vector<std::pair<double, double>> no2_breakpoints = {
            {0.0, 53.0},   // AQI 0-50
            {54.0, 100.0}, // AQI 51-100
            {101.0, 360.0},// AQI 101-150
            {361.0, 649.0},// AQI 151-200
            {650.0, 1249.0},// AQI 201-300
            {1250.0, 2049.0},// AQI 301-400
            {2050.0, 4049.0} // AQI 401-500
    };

    // Method to calculate AQI for a given pollutant concentration and breakpoints
    [[maybe_unused]] double calculateAQI(double concentration, const std::vector<std::pair<double, double>>& breakpoints) const {
        // Find the corresponding AQI interval
        for (size_t i = 0; i < breakpoints.size(); ++i) {
            if (concentration >= breakpoints[i].first && concentration <= breakpoints[i].second) {
                double aqi_low = aqi_breakpoints[i];
                double aqi_high = aqi_breakpoints[i + 1];
                double conc_low = breakpoints[i].first;
                double conc_high = breakpoints[i].second;
                // Linear interpolation to calculate AQI
                return (aqi_high - aqi_low) / (conc_high - conc_low) * (concentration - conc_low) + aqi_low;
            }
        }
        return 0.0; // Default AQI value
    }

    // Define AQI breakpoints for each pollutant interval
    const std::vector<double> aqi_breakpoints = {0, 50, 100, 200, 300, 400, 500};
};
