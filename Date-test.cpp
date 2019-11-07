#include <iostream>
#include "Date.h"
using namespace std;

int main() {
	Date starwars(2019,5,4); // May the fourth be with you!
	cout << "Starwars date is " << starwars.toString() << endl;
	cout << "Starwars date is ";
	cout << starwars.getYear() << "/" << starwars.getMonth() << "/" << starwars.getDay() << endl;	
	Date christmas = Date(2019,12,25);
	cout << "Christmas is " << christmas.toString() << endl;
	Date next = christmas.nextDay();
	cout << "After Christmas is " << next.toString() << endl;
	return 0;
}