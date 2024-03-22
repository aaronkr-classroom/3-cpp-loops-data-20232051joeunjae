//chp2ex5
#include <iostream>
#include <string>

using std::cin;       using std::cout;
using std::endl;      using std::string;
int main() {

	cout << "what's size triangle ?";
	int size;
	cin >> size;

	//Çà Ãâ·Â

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			cout << "*";
		}
		cout << endl;
	}
	cout << "\n";
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size+2; j++) {
			cout << "*";
		}
		cout << endl;
	}
	cout << "\n";
	
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < i; j++) {
			cout << " ";
		}

		for (int j = 0; j < (2 * size) - 1 - (i * 2); j++) {
			cout << "*";
		}
		cout << endl;

	}
	









	return 0;
}
