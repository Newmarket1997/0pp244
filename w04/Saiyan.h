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
	class Saiyan {
		char m_name[31];
		int m_dob;
		int m_power;
		bool m_super;
	public:
		bool isSuper() const;
		bool isValid() const;
		void setEmpty();
		void display() const;
		void set(const char* name, int dob, int power, bool super = false);
		bool hasLost(const Saiyan& other) const;
		Saiyan();
		Saiyan(const char* name, int dob, int power);
	};
}
#endif