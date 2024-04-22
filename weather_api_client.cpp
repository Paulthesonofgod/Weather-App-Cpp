#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <cstdlib>
#include <stdexcept>

// Function to make an HTTP GET request with the provided API key
std::string makeRequest(const std::string& url, const std::string& apiKey) {
    // Use system command to perform HTTP GET request
    std::string command = "curl -s -H 'x-api-key: " + apiKey + "' '" + url + "'";
    FILE* pipe = popen(command.c_str(), "r");
    if (!pipe) {
        throw std::runtime_error("Failed to run curl command.");
    }

    std::stringstream ss;
    char buffer[128];
    while (!feof(pipe)) {
        if (fgets(buffer, 128, pipe) != nullptr) {
            ss << buffer;
        }
    }
    pclose(pipe);
    return ss.str();
}

int main() {
    std::string apiKey = "e34d803cd5de4c5a94691412241904";
    std::string city = "London";
    std::string apiUrl = "http://api.weatherapi.com/v1/current.json?key=" + apiKey + "&q=" + city;

    try {
        std::string response = makeRequest(apiUrl, apiKey);
        std::cout << "API Response: " << response << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
