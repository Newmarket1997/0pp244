
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
#include "Saiyan.h"
using namespace std;

namespace sdds {
	bool Saiyan::isSuper() const {
		return m_super;
	}
	bool Saiyan::isValid() const {
		bool ret = false;
		if (strcmp(m_name, "") == 0 || m_dob > 2020 ||  m_power < 0 || m_dob == 0) {
			ret = false;
		}
		else {
			ret = true;
		}
		return ret;
	}
	void Saiyan::setEmpty() {
		strcpy(m_name, "");
		m_dob = 0;
		m_super = false;
		m_power = 0;
	}
	void Saiyan::display() const {
		if (!isValid()) {
			cout << "Invalid Saiyan!" << endl;
		}
		else {
			cout << m_name << endl;
			cout << "DOB: " << m_dob << " Power: " << m_power << endl;
			cout << "Super Saiyan Ability: ";
			if (isSuper() == true) {
				cout << "Super Saiyan." << endl;
				cout << endl;
			}
			else {
				cout << "Not Super Saiyan." << endl;
				cout << endl;
			}
		}
	}
	void Saiyan::set(const char* name, int dob, int power, bool super){
		if (!isValid() || super == true) {
			strcpy(m_name, name);
			m_power = power;
			m_super = super;
			m_dob = dob;
		}
		else {
			setEmpty();
		}

	}
	bool Saiyan::hasLost(const Saiyan& other) const {
		bool ret = false;
		if (other.isValid() && isValid()) {
			if (other.m_power > m_power) {
				ret = true;
			}
			else {
				ret = false;
			}
		}
		else {
			ret = false;
		}
		return ret;
	}
	Saiyan::Saiyan() {
		setEmpty();
	}
	Saiyan::Saiyan(const char* name, int dob, int power) {

		if (name == nullptr) {
			setEmpty();
		}

		else {
			strcpy(m_name, name);
			m_dob = dob;
			m_power = power;
			m_super = false;

		}
	}

};

