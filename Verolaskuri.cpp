//Tehd‰‰n yksinkertaistettu verolaskuri
#include <iostream>

using namespace std;

int main() {

	//M‰‰ritet‰‰n muuttujat
	int ansiot;
	const double kvero = 0.1975;

	//Kysyt‰‰n k‰ytt‰j‰lt‰ ansiotulot
	cout << "Syota tulosi: ";
	cin >> ansiot;
	
	//Lasketaan vero
	if (ansiot == 16900){
		cout << "Sinun pitaa maksaa " << (ansiot * kvero) + 8 << " euroa veroa.";
	}
	else if (ansiot > 16900 && ansiot <= 25300) {
		cout << "Sinun pitaa maksaa " << (ansiot * kvero) + ((ansiot - 16900) * 0.0625 + 8) << "euroa veroa.";

	}
	else if (ansiot > 25300 && ansiot <= 41200) {
		cout << "Sinun pitaa maksaa " << (ansiot * kvero) + ((ansiot - 25301) * 0.175 + 533) << "euroa veroa.";
	}
	else if (ansiot > 41200 && ansiot <= 71400) {
		cout << "Sinun pitaa maksaa " << (ansiot * kvero) + ((ansiot - 41201) * 0.215 + 3315.50) << "euroa veroa.";
	}
	else if (ansiot > 71400) {
		cout << "Sinun pitaa maksaa " << (ansiot * kvero) + ((ansiot - 71401) * 0.315 + 10174) << "euroa veroa.";
	}
	return 0;
}
