//Yksinkertainen laskin joka laskee yhteen-, v�hennys-, kerto- ja jakolaskut

#include <iostream>

using namespace std;

int main() {
	while (true) {

		//Kysyt��n haluaako k�ytt�j� laskea
		char kysymys;
		while (true) {
			cout << "Lasketaanko? (K/E)";
			cin >> kysymys;

			if (kysymys == 'E')
				return 0;
			if (kysymys == 'K')
				break;
		}

		//M��ritet��n kahdelle luvulle muuttujat
		
		double luku1, luku2;
		char merkki;

		//Kysyt��n k�ytt�j�lt� luvut sek� haluttu laskutoimitus
		cout << "Anna laskutoimitus, esim 1/2 (sopivat merkit + - * /)";
		cin >> luku1 >> merkki >> luku2;

		//Lasketaan laskun tulos

		if (merkki == '+')
			cout << "Tulos on: " << luku1 + luku2;
		else if (merkki == '-')
			cout << "Tulos on: " << luku1 - luku2;
		else if (merkki == '*')
			cout << "Tulos on: " << luku1 * luku2;
		else if (merkki == '/')
			cout << "Tulos on: " << luku1 / luku2;
		cout << "\n";


		
	}
	

}