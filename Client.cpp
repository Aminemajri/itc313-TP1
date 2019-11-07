#include "Client.h"
#include <string>
using namespace std;

Client::Client(int identifiant, std::string nom, std::string prenom, int nbre_de_reservation){
	m_identifiant = identifiant;
	m_nom = nom;
	m_prenom = prenom;
	m_nbre_reservation = nbre_de_reservation;
}
void Client::setClient(int id, std::string nom1, std::string prenom1 ,int nbre_de_reservation1){
	m_identifiant = id;
	m_nom = nom1;
	m_prenom = prenom1;
	m_nbre_reservation = nbre_de_reservation1;
}
int Client::getid(){
	return m_identifiant;
}
string Client::getnomprenom(){

	return m_nom + " " + m_prenom;
}
int Client::getnbreservation(){
	return m_nbre_reservation;
}
