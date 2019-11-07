#ifndef _Client_h
#define _Client_h
#include <string>
using namespace std;
class Client {
public:
	Client(int identifiant, std::string nom, std::string prenom, int nbre_de_reservation);
	void setClient(int id, std::string nom1, std::string prenom1, int nbre_de_reservation1);
	int getid();
	string getnomprenom();
	int getnbreservation();
private:
	int m_identifiant;
	string m_nom;
	string m_prenom;
	int m_nbre_reservation;

};
#endif