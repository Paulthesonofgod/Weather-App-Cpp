#pragma once
#include <string>

class Settings {
public:
    // Constructor
    Settings();

    // Methods to set user settings
    void setTemperatureUnit(const std::string& unit);
    void setWindSpeedUnit(const std::string& unit);
    void setPerceptionUnit(const std::string& unit);
    void setTimeFormat(const std::string& format);
    void setPastDays(int days);
    void setForecastDays(int days);
    void setStartDate(const std::string& date);
    void setEndDate(const std::string& date);
    void setTimeZone(const std::string& timeZone);

    // Methods to get user settings
    const std::string& getTemperatureUnit() const;
    const std::string& getWindSpeedUnit() const;
    const std::string& getPerceptionUnit() const;
    const std::string& getTimeFormat() const;
    int getPastDays() const;
    int getForecastDays() const;
    const std::string& getStartDate() const;
    const std::string& getEndDate() const;
    const std::string& getTimeZone() const;

private:
    std::string temperatureUnit;
    std::string windSpeedUnit;
    std::string perceptionUnit;
    std::string timeFormat;
    int pastDays;
    int forecastDays;
    std::string startDate;
    std::string endDate;
    std::string timeZone;
};

Settings::Settings()
        : temperatureUnit("Celsius"),
          windSpeedUnit("m/s"),
          perceptionUnit("mm"),
          timeFormat("24-hour"),
          pastDays(7),
          forecastDays(7),
          startDate(""),
          endDate(""),
          timeZone("UTC") {}

void Settings::setTemperatureUnit(const std::string& unit) {
    temperatureUnit = unit;
}

void Settings::setWindSpeedUnit(const std::string& unit) {
    windSpeedUnit = unit;
}

void Settings::setPerceptionUnit(const std::string& unit) {
    perceptionUnit = unit;
}

void Settings::setTimeFormat(const std::string& format) {
    timeFormat = format;
}

void Settings::setPastDays(int days) {
    pastDays = days;
}

void Settings::setForecastDays(int days) {
    forecastDays = days;
}

void Settings::setStartDate(const std::string& date) {
    startDate = date;
}

void Settings::setEndDate(const std::string& date) {
    endDate = date;
}

void Settings::setTimeZone(const std::string& timeZone) {
    timeZone == timeZone;
}

const std::string& Settings::getTemperatureUnit() const {
    return temperatureUnit;
}

const std::string& Settings::getWindSpeedUnit() const {
    return windSpeedUnit;
}

const std::string& Settings::getPerceptionUnit() const {
    return perceptionUnit;
}

const std::string& Settings::getTimeFormat() const {
    return timeFormat;
}

int Settings::getPastDays() const {
    return pastDays;
}

int Settings::getForecastDays() const {
    return forecastDays;
}

const std::string& Settings::getStartDate() const {
    return startDate;
}

const std::string& Settings::getEndDate() const {
    return endDate;
}

const std::string& Settings::getTimeZone() const {
    return timeZone;
}
