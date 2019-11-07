#include <iostream>
#include "Client.h"
using namespace std;
int main (){
	Client C1(12,"Majri","Amine",454);                            //Client initialisé
	cout<<"l'Identifiant du client est: "<<C1.getid()<<endl;      //afficher les informations client
	cout<<"Nom et prenom du Client: "<<C1.getnomprenom()<<endl;
	cout<<"Le nombre de reservation est : "<< C1.getnbreservation()<<endl;
	C1.setClient(78,"Nekker","Taha",454);                            //Modifier le client
	cout<<"l'Identifiant du nouveau client est: "<<C1.getid()<<endl;               //afficher les informations du nv client
	cout<<"Nom et prenom du nouveau client: "<<C1.getnomprenom()<<endl;
	cout<<"Le nouveau nombre de reservation est : "<< C1.getnbreservation()<<endl;
}