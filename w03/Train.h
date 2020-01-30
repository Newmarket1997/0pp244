/***********************************************************************
// OOP244 Workshop 3: Classes & Privacy
// File Train.h
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

#ifndef SDDS_TRAIN_H_	
#define SDDS_TRAIN_H_

namespace sdds {

	const int MAX_NAME = 31;
	const int MAX_DESC = 21;

	struct Cargo {
		char description[MAX_DESC];
		double weight;
	};
	class Train {
		char name[MAX_NAME];
		int id;
		Cargo *cargo;
	public:
		void setTrain(const char*, int);
		bool isEmpty() const;
		void loadCargo(Cargo c);
		void display()const;
		void unloadCargo();
	};
}
#endif 