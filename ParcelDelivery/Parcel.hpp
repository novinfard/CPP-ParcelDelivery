//
//  Parcel.hpp
//  ParcelDelivery
//
//  Created by Soheil on 24/01/2018.
//  Copyright © 2018 Soheil Novinfard. All rights reserved.
//

#ifndef Parcel_hpp
#define Parcel_hpp

#include <stdio.h>
#include "ParcelPerson.hpp"

class Parcel {
public:
	Parcel(const ParcelPerson &, const ParcelPerson &, double);
	
	void setWeight(double);
	double getWeight() const;
	
	double getCost() const;
	
private:
	const double basePercelRatePerKG = 2.6;
	
	ParcelPerson sender;
	ParcelPerson recipient;
	double weight;
};

#endif /* Parcel_hpp */
