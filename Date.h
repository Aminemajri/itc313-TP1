#ifndef _Date_h
#define _Date_h

#include <string>             // required for using string
using namespace std;

class Date {                  
public:                       // Always start with public section
	Date(int year, int month, int day); // Constructor and
	int getYear();
	int getMonth();           // Member functions are public
	int getDay();             // Getters must be defined to access variables        
	Date nextDay();           
	string toString();
private:                      // then private section
	int m_year;
	int m_month;              // Always define private variables 
	int m_day;				  
};
#endif