#include <iostream>
#include <vector>
#include <string>

using namespace std;



void creerFichier()
{
	string listePrenoms = "prenoms.txt";

	ofstream listePrenomsOut(listePrenoms);

	listePrenomsOut << "Alexandre" << endl;
	listePrenomsOut << "Michel" << endl;
	listePrenomsOut << "Jean-Phillipe" << endl;
    
}

bool chargeFichier(vector<string> &listeNom)
{
	string nomActuel;
	string listePrenoms = "prenoms.txt";
	ifstream listePrenomsIn(listePrenoms);

	for(int i = 0, i != 10, i++)
	{
		listeNom.push_back(nomActuel);
	}
	return true;

}
bool chercheNom(string nom, const vector<string> &listeNom)
{

	string nomActuel;
	for(int i = 0; i != 10; i++)
	{
		if (listeNom.at(i) == nom)
		{
			return true;
		}
	}
	return false;
}

int main()
{
	creerFichier();
	vector<string> names;
	chargeFichier(names);
	cout << chercheNom("Alexandre", names) << endl;
	cout << chercheNom("Michou", names) << endl;
	
	return 0;
}