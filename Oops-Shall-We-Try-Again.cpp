#include <iostream>
using namespace std;

int main() {
	long userNumber;
	bool isCorrect = false;

	while (!isCorrect) {
		cout << "pick a number 0 to 100" << endl;
		cout << ":";

		cin >> userNumber;
		cout << "\n";

		if (userNumber >= 0 && userNumber <= 100) {
			cout << userNumber << " is valid" << endl;
			isCorrect = true;
		} else {
			cout << userNumber << " is invalid" << endl;
		}
	}

	return 0;
}