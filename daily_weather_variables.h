#pragma once
#include <string>
#include <unordered_map>

class DailyWeatherVariables {
public:
    double getVariable(const std::string& variableName) const;
    void setVariable(const std::string& variableName, double value);

private:
    std::unordered_map<std::string, double> variables;
};
