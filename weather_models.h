#pragma once
#include <string>
#include <vector>

class WeatherModels {
public:
    void addModel(const std::string& modelName);
    void removeModel(const std::string& modelName);
    const std::vector<std::string>& getModels() const;

private:
    std::vector<std::string> models;
};
