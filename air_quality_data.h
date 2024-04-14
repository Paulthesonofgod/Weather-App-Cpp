#pragma once
#include <string>
#include <unordered_map>

class AirQualityData {
public:
    AirQualityData(const std::string& city);

    const std::string& getCity() const;
    double getVariable(const std::string& variableName) const;
    void setVariable(const std::string& variableName, double value);

private:
    std::string city;
    std::unordered_map<std::string, double> variables; // Map to store variables
};
