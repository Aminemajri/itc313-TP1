#include "Chambre.h"
using namespace std;
#include <string>       

Chambre::Chambre(int id, string type, int prix) {
	m_id = id;
	m_type = type;
	m_prix = prix;
}

int Chambre::getId() {
	return m_id;
}

string Chambre::getType() {
	return m_type;
}   

int Chambre::getPrix() {
	return m_prix;
}
void Chambre::updateChambre(int newid, string newtype, int newprix) {
	m_id = newid;
	m_type = newtype;
	m_prix = newprix;
}