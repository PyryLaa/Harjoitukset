//Ohjelma tulostaa parilliset luvut v�lilt� 1-50
#include <iostream>

int main() {
	using namespace std;
	int luku = 1;

	while (luku <= 50) {
		if (luku % 2 == 0) {
			cout << luku++ << ' ';
		}
		luku++;
	}
	return 0;
}