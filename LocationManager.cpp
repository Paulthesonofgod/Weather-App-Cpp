#include "LocationManager.h"
#include <algorithm> // For std::find_if

void LocationManager::addLocation(const Location& location) {
    locations.push_back(location);
}

void LocationManager::removeLocationById(int id) {
    locations.erase(std::remove_if(locations.begin(), locations.end(),
                                   [id](const Location& loc) { return loc.getId() == id; }),
                    locations.end());
}

void LocationManager::removeLocationByName(const std::string& name) {
    locations.erase(std::remove_if(locations.begin(), locations.end(),
                                   [name](const Location& loc) { return loc.getName() == name; }),
                    locations.end());
}

void LocationManager::setFavoriteLocation(int id, bool favorite) {
    auto it = std::find_if(locations.begin(), locations.end(),
                           [id](const Location& loc) { return loc.getId() == id; });
    if (it != locations.end()) {
        it->setFavorite(favorite);
    }
}

const Location* LocationManager::findLocationById(int id) const {
    auto it = std::find_if(locations.begin(), locations.end(),
                           [id](const Location& loc) { return loc.getId() == id; });
    if (it != locations.end()) {
        return &(*it);
    } else {
        return nullptr;
    }
}

std::vector<Location> LocationManager::findLocationsByName(const std::string& name) const {
    std::vector<Location> result;
    for (const auto& loc : locations) {
        if (loc.getName() == name) {
            result.push_back(loc);
        }
    }
    return result;
}

std::vector<Location> LocationManager::findLocationsByPartialName(const std::string& partialName) const {
    std::vector<Location> result;
    for (const auto& loc : locations) {
        if (loc.getName().find(partialName) != std::string::npos) {
            result.push_back(loc);
        }
    }
    return result;
}

std::vector<Location> LocationManager::getFavoriteLocations() const {
    std::vector<Location> favorites;
    for (const auto& loc : locations) {
        if (loc.isFavorite()) {
            favorites.push_back(loc);
        }
    }
    return favorites;
}

const std::vector<Location>& LocationManager::getLocations() const {
    return locations;
}
