
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
		if (m_name == nullptr || m_dob > 2020 ||  m_power < 0 || m_dob == 0) {
			ret = false;
		}
		else {
			ret = true;
		}
		return ret;
	}
	void Saiyan::setEmpty() {
		m_name = nullptr;
		m_dob = minYear;
		m_super = false;
		m_power = m_power;
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
				cout << "Super Saiyan level is: ";
				cout << m_level;
			}
		}
	}
	
	void Saiyan::set(const char* name, int dob, int power, int level, bool super) {
		if (name != nullptr && strlen(name) != 0 && dob <= maxYear && power > s_power) {
			if (m_name != nullptr) {
				delete[] m_name;
				m_name = nullptr;
			}
				int nLength = strlen(name);
				m_data = new char[nLength + 1];
				strcpy(m_data, name);
				m_power = power;
				m_dob = dob;

			if (!isValid()) {
				setEmpty();
			}
			if (super == true) {
				m_super = super;
				m_level = level;
			}
			else {
				m_super = super;
				m_level = 0;
			}
		}
		else{
			setEmpty();
		}
	}
	bool Saiyan::hasLost(const Saiyan& other) const {
		bool ret = false;
		if (!isValid()) {
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
	Saiyan::Saiyan(const char* name, int dob, int power){
		{
			setEmpty();
			strcpy(m_name, name);
			m_dob = dob;
			m_power = power;
			m_super = false;

		}
	}
	void Saiyan::powerup() {
		if (m_super == true) {
			m_power = m_power * (m_level + 1);
		}
	}
	Saiyan::~Saiyan() {
		delete[] m_name;
		m_name = nullptr;
	}
};

