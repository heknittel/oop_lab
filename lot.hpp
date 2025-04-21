#pragma once
#include <iostream>
#include <string>

namespace lot {
	class Lot {
	private:
		double latitude;
		double longitude;
		double width;
		double length;

	public:

		Lot(double, double, double, double);

		virtual ~Lot();

		virtual double value() const;

	protected:
		double land_area() const;
	};
}
