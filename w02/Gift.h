#ifndef GIFT_H
#define GIFT_H
#include <iostream>

namespace sdds {
	const int MAX_DESC = 15;
	const double MAX_PRICE = 999.99;

	struct Gift {
		char g_description[MAX_DESC];
		double g_price;
		int g_units;
	};

}
#endif 