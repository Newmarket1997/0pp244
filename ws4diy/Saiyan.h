/***********************************************************************
// OOP244  Workshop 4 LAB
// File Saiyan.h
// Version 1.0
// Date	2020/01/30
// Author Ilyas Mashanlo
// Description
//  Workshop 4 LAB
//
// Revision History
// -----------------------------------------------------------
// Name            Date            Reason
//
/////////////////////////////////////////////////////////////////
***********************************************************************/

#ifndef SDDS_SAIYAN_H	
#define SDDS_SAIYAN_H
namespace sdds {
	const int minYear = 0;
	const int maxYear = 2020;
	const int s_power = 0;
	class Saiyan {
		char* m_name;
		int m_dob;
		int m_power;
		bool m_super;
		int m_level = 0;
		char* m_data;
	public:
		bool isSuper() const;
		bool isValid() const;
		void setEmpty();
		void display() const;
		void set(const char* name, int dob, int power, int level, bool super = false);
		bool hasLost(const Saiyan& other) const;
		void powerup();
		Saiyan();
		Saiyan(const char* name, int dob, int power);
		~Saiyan();
	};
}
#endif