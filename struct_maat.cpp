//Kysyt‰‰n kahden valtion tiedot, tallennetaan ne tietueeseen ja tulostetaan
#include <iostream>
#include <string>


struct Valtio {
	std::string valtion_nimi;
	int asukasluku;
	int pinta_ala;
	std::string johtaja;
};

int main() {
	Valtio valtio1;
	Valtio valtio2;

	std::cout << "Anna valtion 1 nimi: ";
	std::cin >> valtio1.valtion_nimi;
	std::cout << "Anna valtion 1 asukasluku: ";
	std::cin >> valtio1.asukasluku;
	std::cout << "Anna valtion 1 pinta-ala: ";
	std::cin >> valtio1.pinta_ala;
	std::cout << "Anna valtion 1 johtaja: ";
	std::cin >> valtio1.johtaja;
	std::cout << std::endl;

	std::cout << "Anna valtion 2 nimi: ";
	std::cin >> valtio2.valtion_nimi;
	std::cout << "Anna valtion 2 asukasluku: ";
	std::cin >> valtio2.asukasluku;
	std::cout << "Anna valtion 2 pinta-ala: ";
	std::cin >> valtio2.pinta_ala;
	std::cout << "Anna valtion 2 johtaja: ";
	std::cin >> valtio2.johtaja;
	std::cout << std::endl;

	std::cout << "Valtio numero 1\n";
	std::cout << "Nimi: " << valtio1.valtion_nimi << std::endl;
	std::cout << "Asukasluku: " << valtio1.asukasluku << std::endl;
	std::cout << "Pinta-ala: " << valtio1.pinta_ala << std::endl;
	std::cout << "Johtaja: " << valtio1.johtaja << std::endl;

	std::cout << std::endl;

	std::cout << "Valtio numero 2\n";
	std::cout << "Nimi: " << valtio2.valtion_nimi << std::endl;
	std::cout << "Asukasluku: " << valtio2.asukasluku << std::endl;
	std::cout << "Pinta-ala: " << valtio2.pinta_ala << std::endl;
	std::cout << "Johtaja: " << valtio2.johtaja << std::endl;
	
	return 0;
}