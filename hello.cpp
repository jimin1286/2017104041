#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	for (int i = 1; i <= 9; i++) {
		for (int j = 1; j <= 9; j++) {
			cout << j << " * " << i << " = " << setw(3) << i * j;
		}
		cout << endl;
	}

	return 0;
}