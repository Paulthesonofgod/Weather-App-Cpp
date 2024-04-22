#pragma once
#include <string>
#include <unordered_map>
#include <utility>
#include <stdexcept>

class AirQualityData {
public:
    explicit AirQualityData(std::string  city);

    const std::string& getCity() const;
    double getVariable(const std::string& variableName) const;
    void setVariable(const std::string& variableName, double value);

private:
    std::string city;
    std::unordered_map<std::string, double> variables; // Map to store variables
};

AirQualityData::AirQualityData(std::string  city) : city(std::move(city)) {}

const std::string& AirQualityData::getCity() const {
    return city;
}

double AirQualityData::getVariable(const std::string& variableName) const {
    auto it = variables.find(variableName);
    if (it != variables.end()) {
        return it->second;
    } else {
        // Throw an exception indicating that the variable doesn't exist
        throw std::runtime_error("Variable '" + variableName + "' not found in AirQualityData");
    }
}


void AirQualityData::setVariable(const std::string& variableName, double value) {
    variables[variableName] = value;
}
