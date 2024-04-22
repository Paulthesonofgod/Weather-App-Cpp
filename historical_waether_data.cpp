#include "historical_waether_data.h"

HistoricalWeatherData::HistoricalWeatherData(const std::string& city, int year, int month, int day)
        : city(city), year(year), month(month), day(day) {}

const std::string& HistoricalWeatherData::getCity() const {
    return city;
}

int HistoricalWeatherData::getYear() const {
    return year;
}

int HistoricalWeatherData::getMonth() const {
    return month;
}

int HistoricalWeatherData::getDay() const {
    return day;
}

double HistoricalWeatherData::getVariable(const std::string& variableName) const {
    auto it = variables.find(variableName);
    if (it != variables.end()) {
        return it->second;
    } else {
        return 0.0; // Default value if variable not found
    }
}

void HistoricalWeatherData::setVariable(const std::string& variableName, double value) {
    variables[variableName] = value;
}
