#include <iostream>
#include "Chambre.h"
#include <string>
using namespace std;

int main() {
	Chambre RJ03(123,"Double",613);      //RJ03 est ma chambre :)
	cout<<RJ03.getId()<<endl;
	cout<<RJ03.getType()<<endl;
	cout<<RJ03.getPrix()<<endl;
	RJ03.updateChambre(456,"Single",789);
	cout<<RJ03.getId()<<endl;
	cout<<RJ03.getType()<<endl;
	cout<<RJ03.getPrix()<<endl;
	return 0;
}