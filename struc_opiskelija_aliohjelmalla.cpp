#include <iostream>
#include <string>


struct Opiskelija {
	std::string etunimi;
	std::string sukunimi;
	std::string opiskelija_nro;
	int opintopiste;
};

void tulostaOpiskelija(Opiskelija o);

int main() {
	Opiskelija opiskelija;

	std::cout << "Anna opiskelijan etunimi : ";
	std::cin >> opiskelija.etunimi;
	std::cout << "Anna opiskelijan sukunimi: ";
	std::cin >> opiskelija.sukunimi;
	std::cout << "Anna opiskelijan opiskelijanumero: ";
	std::cin >> opiskelija.opiskelija_nro;
	std::cout << "Anna opiskelijan opintopisteet: ";
	std::cin >> opiskelija.opintopiste;
	std::cout << std::endl;

	tulostaOpiskelija(opiskelija);

}

void tulostaOpiskelija(Opiskelija o){
	std::cout <<"Etunimi: " << o.etunimi << std::endl;
	std::cout << "Sukunimi: " << o.sukunimi << std::endl;
	std::cout << "Opiskelijanumero: " << o.opiskelija_nro << std::endl;
	std::cout << "Opintopisteet: " << o.opintopiste << std::endl;
}