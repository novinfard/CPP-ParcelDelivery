//
//  main.cpp
//  ParcelDelivery
//
//  Created by Soheil on 24/01/2018.
//  Copyright © 2018 Soheil Novinfard. All rights reserved.
//

#include <iostream>
#include "Parcel.hpp"
#include "TwodayParcel.hpp"
#include "ParcelPerson.hpp"
#include "NextdayParcel.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
	
	ParcelPerson sender = ParcelPerson("Alex Morgan", "Magana, Liverpool Street", "London", "E1 DDA");
	ParcelPerson recipient = ParcelPerson("Mohsen", "Magana, Liverpool Street", "London", "E1 DDA");
	double weight = 10.1;

	// standard parcel
	Parcel standardParcelExample = Parcel(sender, recipient, weight);
	cout << "The standard parcel cost is " << standardParcelExample.getCost() << endl;
	
	// Two day parcel
	TwodayParcel twodayParcelExample = TwodayParcel(sender, recipient, weight);
	cout << "The two day parcel cost is " << twodayParcelExample.getCost() << endl;
	
	// Next day parcel
	NextdayParcel nextdayParcelExample = NextdayParcel(sender, recipient, weight);
	cout << "The next day parcel cost is " << nextdayParcelExample.getCost() << endl;

	return 0;
}
