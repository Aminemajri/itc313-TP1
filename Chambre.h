#ifndef _Chambre_h
#define _Chambre_h

#include <string>             // required for using string
using namespace std;

class Chambre {                  
public:                       // Always start with public section
	Chambre(int id, string type, int prix); // Constructor and
	int getId();
	string getType();           // Member functions are public
	int getPrix();             // Getters must be defined to access variables        
	void updateChambre(int newid, string newtype, int newprix);           
private:                      // then private section
	int m_id;
	string m_type;              // Always define private variables 
	int m_prix;				  
};
#endif