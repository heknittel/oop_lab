#include "lot.hpp"

using namespace lot;

Lot::Lot(double lat, double lng, double w, double l) {
	this->latitude = lat;
	this->longitude = lng;
	this->width = w;
	this->length = l;
}

Lot::~Lot() { }

double Lot::value() const {
	return 16 * this->land_area();
}

double Lot::land_area() const {
	return this->length * this->width;
}
