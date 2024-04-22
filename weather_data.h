#pragma once
#include <string>

class WeatherData {
public:
    // Constructor
    WeatherData(const std::string& city) : city(city), temperature(0.0), windSpeed(0.0) {}

    // Getter methods
    const std::string& getCity() const { return city; }
    double getTemperature() const { return temperature; }
    double getWindSpeed() const { return windSpeed; }

    // Setter methods
    void setTemperature(double temperature) { this->temperature = temperature; }
    void setWindSpeed(double windSpeed) { this->windSpeed = windSpeed; }

private:
    std::string city;
    double temperature;
    double windSpeed;
};
