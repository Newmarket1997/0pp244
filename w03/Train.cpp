/***********************************************************************
// OOP244 Workshop 3: Classes & Privacy
// File Train.cpp
// Version 1.0
// Date	2020/01/30
// Author Ilyas Mashanlo
// Description
// Tests Train module
//
// Revision History
// -----------------------------------------------------------
// Name            Date            Reason
//
/////////////////////////////////////////////////////////////////
***********************************************************************/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Train.h"
using namespace std;

namespace sdds {
	void Train::setTrain(const char* sName, int sId) {
		char null[3]{ '\0' };
		if ( sId < 1 || sName == nullptr || strcmp(name, "") == 0) {
			id = 0;
			strcpy(name, null);
		}
		else {
			cargo = nullptr;
			id = sId;
			strcpy(name, sName);
		}
	}
	bool Train::isEmpty() const {
		if (id < 1 || name == nullptr || strcmp(name, "") == 0 ) {
			return true;
		}
		else {
			return false;
		}
	}
	void Train::display() const {
		bool check = isEmpty();
		cout << "***Train Summary***" << endl;

		if (check) {
			cout << "This is an empty train." << endl;
		}
		else {
			cout << "Cargo: " << cargo->description << " Weight: " << cargo->weight << endl;
		}
	}
	void Train::loadCargo(Cargo c)
	{
		cargo = new Cargo;
		strcpy(cargo->description, c.description);
		cargo->weight = c.weight;
	}
	void Train::unloadCargo() {
		cargo = nullptr;
		delete cargo;
	}
}

