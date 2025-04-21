#pragma once
#include <iostream>
#include <string>
#include "lot.hpp"

namespace developed_lot {
	class DevelopedLot : public lot::Lot {
	private:
		double footprint;
		double n_floors;

	public:

		DevelopedLot(double, double, double, double, double, double);

		virtual ~DevelopedLot();

		double value() const;
		
	protected:
		double floor_area_ratio() const;
	};
}
