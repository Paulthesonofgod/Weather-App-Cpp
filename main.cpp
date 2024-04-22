#include <iostream>
#include "LocationManager.h"
#include "settings.h"
#include "weather_forecast.h"

void displayMainMenu() {
    std::cout << "===== Main Menu =====" << std::endl;
    std::cout << "1. Add Location" << std::endl;
    std::cout << "2. Set Preferences" << std::endl;
    std::cout << "3. Display Weather Forecast" << std::endl;
    std::cout << "4. Exit" << std::endl;
    std::cout << "=====================" << std::endl;
    std::cout << "Enter your choice: ";
}

void addLocation(LocationManager& locationManager) {
    std::string name;
    std::string city;
    bool favorite;

    std::cout << "Enter location name: ";
    std::cin >> name;
    std::cout << "Enter city: ";
    std::cin >> city;
    std::cout << "Is it a favorite location? (1 for Yes, 0 for No): ";
    std::cin >> favorite;

    // Assume latitude and longitude are 0.0 as default values
    Location newLocation(0, name, 0.0, 0.0);
    locationManager.addLocation(newLocation);
    std::cout << "Location added successfully." << std::endl;
}

void setPreferences(Settings& settings) {
    std::string tempUnit;
    std::string windSpeedUnit;
    std::string perceptionUnit;
    std::string timeFormat;
    int pastDays;
    int forecastDays;
    std::string startDate;
    std::string endDate;
    std::string timeZone;

    std::cout << "Enter temperature unit (e.g., Celsius, Fahrenheit): ";
    std::cin >> tempUnit;
    settings.setTemperatureUnit(tempUnit);

    std::cout << "Preferences set successfully." << std::endl;
}

void displayWeatherForecast(const WeatherForecast& weatherForecast) {
    weatherForecast.displayForecast();
}

int main() {
    LocationManager locationManager;
    Settings settings;
    WeatherForecast weatherForecast;

    int choice;
    do {
        displayMainMenu();
        std::cin >> choice;
        switch (choice) {
            case 1:
                addLocation(locationManager);
                break;
            case 2:
                setPreferences(settings);
                break;
            case 3:
                displayWeatherForecast(weatherForecast);
                break;
            case 4:
                std::cout << "Exiting program." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please try again." << std::endl;
        }
    } while (choice != 4);

    return 0;
}
