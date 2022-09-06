//Kysyt‰‰n k‰ytt‰jien pituutta ja tulostetaan pidempi

#include <iostream>

using namespace std;

int main() {

	//M‰‰ritet‰‰n muuttujat pituuksille

	int pituus1, pituus2;

	//Kysyt‰‰n k‰ytt‰jilt‰ pituudet
	cout << "Anna ensimmaisen henkilon pituus(cm): ";
	cin >> pituus1;
	cout << "Anna toisen henkilon pituus(cm): ";
	cin >> pituus2;

	//Verrataan pituuksia toisiinsa ja tulostetaan isompi luku

	if (pituus1 > pituus2)
		cout << pituus1;
	else
		cout << pituus2;
    return 0;
}