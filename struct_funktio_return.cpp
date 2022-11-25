//K‰ytet‰‰n tietuetta funktion paluuarvona

#include <iostream>
#include <string>

struct Opiskelija {
	std::string etunimi;
	std::string sukunimi;
	std::string opiskelija_nro;
	int opintopiste;
};

Opiskelija luoOpiskelija();
const int MAX_OPISKELIJAT = 20;

int main() {
	Opiskelija opiskelija_lista[MAX_OPISKELIJAT];
	int opiskelija_maara;

	std::cout << "Kuinka monelle opiskelijalle luodaan tiedot? (MAX 20): ";
	std::cin >> opiskelija_maara;

	for (int i = 0; i < opiskelija_maara; i++) {
		opiskelija_lista[i] = luoOpiskelija();

	}
	for (int i = 0; i < opiskelija_maara; i++) {
		std::cout << "Opiskelijan numero " << i + 1 << " tiedot." << std::endl;
		std::cout << "Etunimi: " << opiskelija_lista[i].etunimi << std::endl;
		std::cout << "Sukunimi: " << opiskelija_lista[i].sukunimi << std::endl;
		std::cout << "Opiskelijanumero: " << opiskelija_lista[i].opiskelija_nro << std::endl;
		std::cout << "Opintopisteet: " << opiskelija_lista[i].opintopiste;
	}

	

}



Opiskelija luoOpiskelija() {
	Opiskelija o;
	std::cout << "Anna opiskelijan etunimi: ";
	std::cin >> o.etunimi;
	std::cout << "Anna opiskelijan sukunimi: ";
	std::cin >> o.sukunimi;
	std::cout << "Anna opiskelijan opiskelijanumero: ";
	std::cin >> o.opiskelija_nro;
	std::cout << "Anna opiskelijan opintopisteet: ";
	std::cin >> o.opintopiste;
	std::cout << std::endl;

	return o;
	

}