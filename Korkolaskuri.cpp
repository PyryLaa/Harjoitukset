//Lasketaan lainan kokonaiskorko
#include <iostream>
using namespace std;

int main() {
	//M‰‰ritet‰‰n muuttujat

	int laina;
	double korko, vuodet;
	

	// Kysyt‰‰n k‰ytt‰j‰lt‰ lainan m‰‰r‰, laina-aika sek‰ korkoprosentti

	cout << "Syota lainan maara(euroa) :";
	cin >> laina;
	cout << "Syota korkoprosentti: ";
	cin >> korko;
	cout << "Syota laina-aika (vuosia): ";
	cin >> vuodet;

	//Lasketaan lainan kokonaiskorko lainan m‰‰r‰ * korko * laina-aika

	cout << "Lainan korot laina-ajalta ovat " << laina * korko/100 * vuodet << " euroa.";

	return 0;


}