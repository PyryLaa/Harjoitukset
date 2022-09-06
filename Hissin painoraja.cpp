//Kysyt‰‰n hissin painoraja ja matkustajien paino, sen j‰lkeen lasketaan tuleeko ylipainoa

#include <iostream>

using namespace std;

int main() {
	//M‰‰ritet‰‰n muuttujat painoille
	int hissi;
	int paino1, paino2, paino3, paino4;

	//Kysyt‰‰n k‰ytt‰j‰lt‰ painot

	cout << "Anna hissin painoraja kiloissa: ";
	cin >> hissi;
	cout << "Anna matkustaja 1 paino kiloissa: ";
	cin >> paino1;
	cout << "Anna matkustaja 2 paino kiloissa: ";
	cin >> paino2;
	cout << "Anna matkustaja 3 paino kiloissa: ";
	cin >> paino3;
	cout << "Anna matkustaja 4 paino kiloissa: ";
	cin >> paino4;


	//Lasketaan painot yhteen ja tulostetaan siit‰ riippuen vastaus

	int kokopaino = paino1 + paino2 + paino3 + paino4;

	if (kokopaino > hissi)
		cout << "Ylipainoa, hissia ei saa kayttaa!";
	else
		cout << "Hissi kaytettavissanne!";
	return 0;
}