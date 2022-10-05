//Ohjelma laskee mäkihypyn pisteet (tuomaripisteet, tyylipisteet ja hypyn pituuden pisteet)
#include <iostream>

int main() {
	using namespace std;
	int i = 1;
	double tyyli = 0, tuomari, pituus, max = 0, min = 20;
	bool virhe = false;

	do {
		setlocale(LC_ALL, "fi_FI");
		virhe = false;
		do {
			cout << "Hypyn pituus: ";
			cin >> pituus;
		} while (pituus < 20 || pituus > 200);

		do {
			cout << "Tuomarin " << i << " pisteet: ";
			cin >> tuomari;

			if (tuomari < 0 || tuomari > 20) {
				virhe = true;
				cout << "Arvon pitää olla välillä 0-20\n";
				i--;
			}
			else {
				virhe = false;
				if (tuomari < min) {
					min = tuomari;
				}
				else if (tuomari > max) {
					max = tuomari;
				}
			}
			tyyli = tyyli + tuomari;
			i++;
		} while (i <= 5);

	} while (virhe);
	tyyli = tyyli - min - max;
	cout << "Hypyn pisteet: " << tyyli + 0.9 * pituus;
	return 0;
}