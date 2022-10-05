//Muunnetaan l‰mpˆtila C>F tai F>C
#include <iostream>
using namespace std;

int main() {

	setlocale(LC_ALL, "fi-FI");
	//M‰‰ritet‰‰n muuttujat
	double temp;
	char unit;
	
	//Kysyt‰‰n k‰ytt‰j‰lt‰ mit‰ halutaan muuttaa ja l‰mpˆtila
	cout << "Syˆt‰ l‰mpotila: ";
	cin >> temp;
	cout << "Syˆt‰ yksikkˆ (C = Celsius tai F = Fahrenheit): ";
	cin >> unit;

	if (unit == 'F' || unit == 'f') {
		cout << temp << " Fahrenheit = " << (temp - 32) / 1.8 << " Celsius";
	}
	else if (unit == 'C' || unit == 'c') {
		cout << temp << " Celsius = " << temp * 1.8 + 32 << " F";
	}
	return 0;
}