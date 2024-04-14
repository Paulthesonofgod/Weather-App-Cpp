#pragma once
#include <string>

class Location {
public:
    Location(int id, const std::string& name, double latitude, double longitude);

    int getId() const;
    const std::string& getName() const;
    double getLatitude() const;
    double getLongitude() const;
    bool isFavorite() const;
    void setFavorite(bool favorite);

private:
    int id;
    std::string name;
    double latitude;
    double longitude;
    bool favorite;
};
