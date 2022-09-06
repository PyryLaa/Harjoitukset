//Yksinkertainen laskin joka laskee yhteen-, vähennys-, kerto- ja jakolaskut

#include <iostream>

using namespace std;

int main() {
	while (true) {

		//Kysytään haluaako käyttäjä laskea
		char kysymys;
		while (true) {
			cout << "Lasketaanko? (K/E)";
			cin >> kysymys;

			if (kysymys == 'E' || kysymys == 'e')
				return 0;
			if (kysymys == 'K' || kysymys == 'k')
				break;
		}

		//Määritetään kahdelle luvulle muuttujat
		
		double luku1, luku2;
		char merkki;

		//Kysytään käyttäjältä luvut sekä haluttu laskutoimitus
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
