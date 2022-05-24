#include <iostream>
using namespace std;

int main () {
	double firstnumber, secondnumber, results;
	int Operators;

	cout << "Enter any two number " << endl;
	cin >> firstnumber, secondnumber;

	cout << " Operators ";
	cout << "1: Addition" << endl;
	cout << "2: Subtraction" << endl;
	cout << "3: Multiplication" << endl;
	cout << "4: Division" << endl;

	switch (Operators) {

		case 1:
			results = firstnumber + secondnumber;
			cout << "The addition of " << firstnumber << " and " << secondnumber << " is equal to " << results;
				break;

		case 2:
			results = firstnumber + secondnumber;
			cout << "The subrtraction of " << secondnumber << " and " << firstnumber << " is equal to " << results;
			break;

		case 3:
			results = firstnumber + secondnumber;
			cout << "The multiplication of " << firstnumber << " by " << secondnumber << " is equal to " << results;
			break;

		case 4:
			if (secondnumber = 0) {
				cout << " You cant not divide by zero enter anothe number" << endl;
				cin >> secondnumber;
				results = firstnumber / secondnumber;
				cout << " the division of " << firstnumber << " by " << secondnumber << "is equal to " << results;
			}
			else {
				results = firstnumber / secondnumber;
				cout << " the division of " << firstnumber << " by " << secondnumber << "is equal to " << results;

				break;
				cout << " invalid operator selected , please enter the number of operator shown above " << endl;

			}

    }


	return 0;

}
