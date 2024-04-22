cmake_minimum_required(VERSION 3.10)
project(Weather-App-Cpp VERSION 1.0)

# Set C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add executable
add_executable(WeatherApp
        src/main.cpp
        src/Location.cpp
        src/LocationManager.cpp
        src/AirQualityData.cpp
        src/AirQualityDataManager.cpp
        src/AirQualityForecast.cpp
        src/Settings.cpp
        src/EuropeanAirQualityIndexCalculator.cpp
        src/weather_api_client.cpp
        # Add more source files here as needed
)

# Add include directories
target_include_directories(WeatherApp PUBLIC include)

