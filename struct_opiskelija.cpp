//Harjoitellaan struct k�ytt��
#include <iostream>
#include <string>

struct Opiskelija {
	std::string etunimi;
	std::string sukunimi;
	std::string opiskelija_nro;
	int opintopiste;
};

int main() {

	Opiskelija opiskelija; //Otetaan tietue Opiskelija k�ytt��n p��ohjelmassa nimell� opiskelija

	//Kysyt��n tiedot jotka tallennetaan tietueeseen opiskelija
	std::cout << "Anna opiskelijan etunimi: ";
	std::cin >> opiskelija.etunimi;
	std::cout << "Anna opiskelijan sukunimi: ";
	std::cin >> opiskelija.sukunimi;
	std::cout << "Anna opiskelijan opiskelijanumero: ";
	std::cin >> opiskelija.opiskelija_nro;
	std::cout << "Anna opiskelijan opintopisteet: ";
	std::cin >> opiskelija.opintopiste;
	std::cout << std::endl;

	//N�ytet��n tietueen sis�lt� ja samalla testataan, onnistuiko
	std::cout <<"Etunimi: "<< opiskelija.etunimi << std::endl;
	std::cout << "Sukunimi: " << opiskelija.sukunimi << std::endl;
	std::cout << "Opiskelijanumero: " << opiskelija.opiskelija_nro << std::endl;
	std::cout << "Opintopisteet: " << opiskelija.opintopiste;

	return 0;
}