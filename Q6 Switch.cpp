#include <iostream>
using namespace std;

int main() {
	int num;
	cout << "Enter a number: ";
	cin >> num;

	// Take absolute value to handle negative numbers
	int absNum = abs(num);

	// Determine number of digits
	int digitCount = 0;
	if (absNum >= 100 && absNum <= 999)
		digitCount = 3;

	switch (digitCount) {
	case 3: {
		int d1 = absNum / 100;           // Hundreds place
		int d2 = (absNum / 10) % 10;     // Tens place
		int d3 = absNum % 10;            // Units place
		int sum = d1 + d2 + d3;
		cout << "Sum of digits: " << sum << endl;
		break;
	}
	default:
		cout << "Not a three-digit number." << endl;
	}

	return 0;
}
