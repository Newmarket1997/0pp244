#include <iostream>
#include "Gift.h"
using namespace std;
namespace sdds {
	void gifting(char*) {
		cout << "Enter gift description: ";
		cin.width(MAX_DESC + 1);
		cin >> g.g_description;
	}
	void gifting(double&) {
		int i = 0;
		while (i == 0) {
		cout << "Enter gift price: ";
		cin >> g.g_price;
		
			i = 1;
			if (g.g_price > MAX_PRICE || g.g_price < 0) {
				cout << "Gift price must be between 0 and 15 \n";
				cout << "Enter gift price: ";
				cin >> g.g_price;
			}
			if (g.g_price < MAX_PRICE && g.g_price > 0) {
				i = 0;
			}
		}
	}

	void gifting(int&) {
		Gift g;
		int i = 0;
		while (i == 0) {
		i = 1;
		cout << "Enter gift units: ";
		cin >> g.g_units;
			if (g.g_units < 0) {
				cout << "Gift units must be at least 1";
			}
			if (g.g_units > 0) {
				i = 0;
			}
		}
	}
	void display(const Gift&) {
		Gift g;
		cout << "Gift Details: \n";
		cout << "Description: ";
		cout << g.g_description;
		cout << "Price: ";
		cout << g.g_price;
		cout << "Units: ";
		cout << g.g_units;
	}
	
}
