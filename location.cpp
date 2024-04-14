#include "Location.h"

Location::Location(int id, const std::string& name, double latitude, double longitude)
        : id(id), name(name), latitude(latitude), longitude(longitude), favorite(false) {}

int Location::getId() const {
    return id;
}

const std::string& Location::getName() const {
    return name;
}

double Location::getLatitude() const {
    return latitude;
}

double Location::getLongitude() const {
    return longitude;
}

bool Location::isFavorite() const {
    return favorite;
}

void Location::setFavorite(bool favorite) {
    this->favorite = favorite;
}
