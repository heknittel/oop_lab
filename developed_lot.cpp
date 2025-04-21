#include "developed_lot.hpp"

using namespace developed_lot;

DevelopedLot::DevelopedLot(double lat,
			 double lng,
			 double w,
			 double l,
			 double fp,
			 double n_floors)
					: Lot(lat, lng, w, l){
		this->footprint = fp;
		this->n_floors = n_floors;
}

DevelopedLot::~DevelopedLot() { }

double DevelopedLot::value() const {
		double land_value = Lot::value();
		double house_value = 100 * this->footprint * this->n_floors;

		return land_value + house_value;
}

double DevelopedLot::floor_area_ratio() const {
		double floor_area = this->footprint * this->n_floors;
		double land_area = this->land_area();

		return floor_area / land_area;
}
