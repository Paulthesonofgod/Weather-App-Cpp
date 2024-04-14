#pragma once
#include <string>
#include <unordered_map> // For storing variables

class HistoricalWeatherData {
public:
    HistoricalWeatherData(const std::string& city, int year, int month, int day);

    const std::string& getCity() const;
    int getYear() const;
    int getMonth() const;
    int getDay() const;
    double getVariable(const std::string& variableName) const;
    void setVariable(const std::string& variableName, double value);

private:
    std::string city;
    int year;
    int month;
    int day;
    std::unordered_map<std::string, double> variables; // Map to store variables
};
