#include "WeatherData.h"

WeatherData::WeatherData(const std::string& city) : city(city) {}

const std::string& WeatherData::getCity() const {
    return city;
}

double WeatherData::getVariable(const std::string& variableName) const {
    auto it = variables.find(variableName);
    if (it != variables.end()) {
        return it->second;
    } else {
        return 0.0; // Default value if variable not found
    }
}

void WeatherData::setVariable(const std::string& variableName, double value) {
    variables[variableName] = value;
}
