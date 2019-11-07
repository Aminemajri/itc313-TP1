#include "Date.h"
using namespace std;

Date::Date(int year, int month, int day) {
	m_year = year;
	m_month = month;
	m_day = day;
}

int Date::getYear() {
	return m_year;
}

int Date::getMonth() {
	return m_month;
}   

int Date::getDay() {
	return m_day;
}

std::string Date::toString() {
	string month[12] = {"Jan", "Feb", "March", "April", "May", "June", "July", "Aug", "Sept", "Oct", "Nov", "Dec"};
	string to_display = to_string(m_year) + ", " + month[m_month-1] + ", " + to_string(m_day);
	return to_display;
}
Date Date::nextDay() {
	Date next(m_year, m_month, m_day+1);
	return next; 
}
