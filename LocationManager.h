// location_manager.h
#pragma once
#include <string>
#include <vector>
#include "location.h"

class LocationManager {
public:
    void addLocation(const Location& location);
    void removeLocationById(int id);
    void removeLocationByName(const std::string& name);
    void setFavoriteLocation(int id, bool favorite);
    const Location* findLocationById(int id) const;
    std::vector<Location> findLocationsByName(const std::string& name) const;
    std::vector<Location> findLocationsByPartialName(const std::string& partialName) const;
    std::vector<Location> getFavoriteLocations() const;
    const std::vector<Location>& getLocations() const;

private:
    std::vector<Location> locations;
};
