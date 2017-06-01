//This program demonstrates the use of a class template.
//Three instances of the class MinMax are created and passed integers, doubles, and character values.
//The class uses a member function to determine the minimum and maximum values entered.
#include <iostream>
#include "MinMax.h"
using namespace std;

int main()
{
	cout << "This program demonstrates the use of a template class called MinMax." << endl;

	char again;		//Use in do-while loop to ask the user to repeat a section

	//Create the first instance of the class using integer values entered by the user.
	do {
		cout << endl << "##############################################################################" << endl;
		cout << "Part 1: Integers" << endl;
		cout << "##############################################################################" << endl << endl;

		int num1, num2;
		double temp;		//Used below to correct in case the user enters a floating-point number

		cout << "Enter an integer: ";
		cin >> temp;
		num1 = static_cast<int>(temp);		//Ensure that any decimal portion of the user's input is discarded so it does not cause issues
		cout << "Enter another integer: ";
		cin >> temp;
		num2 = static_cast<int>(temp);		//Ensure that any decimal portion of the user's input is discarded so it does not cause issues
		cout << "Now creating an instance of the MinMax class using the integers you entered..." << endl;
		MinMax<int> firstInstance(num1, num2);
		cout << "Done." << endl;
		cout << "The minimum() function says that " << firstInstance.minimum() << " is the lowest of the values you entered." << endl;
		cout << "The maximum() function says that " << firstInstance.maximum() << " is the highest of the values you entered." << endl;

		cout << "Would you like to repeat Part 1: Integers? (y/n): ";
		cin >> again;
	} while (again == 'y' || again == 'Y');

	//Create the second instance of the class using floating-point values entered by the user.
	do {
		cout << endl << "##############################################################################" << endl;
		cout << "Part 2: Doubles" << endl;
		cout << "##############################################################################" << endl << endl;

		double dbl1, dbl2;
		cout << "Enter a floating point number: ";
		cin >> dbl1;
		cout << "Enter another floating point number: ";
		cin >> dbl2;
		cout << "Now creating an instance of the MinMax class using the floating point numbers" << endl
			<< "you entered..." << endl;
		MinMax<double> secondInstance(dbl1, dbl2);
		cout << "Done." << endl;
		cout << "The minimum() function says that " << secondInstance.minimum() << " is the lowest of the values you entered." << endl;
		cout << "The maximum() function says that " << secondInstance.maximum() << " is the highest of the values you entered." << endl;

		cout << "Would you like to repeat Part 2: Doubles? (y/n): ";
		cin >> again;
	} while (again == 'y' || again == 'Y');

	//Create the third instance of the class using characters entered by the user.
	do {
		cout << endl << "##############################################################################" << endl;
		cout << "Part 3: Characters" << endl;
		cout << "##############################################################################" << endl << endl;

		char chr1, chr2;
		cout << "Enter a character: ";
		cin >> chr1;
		cout << "Enter another character: ";
		cin >> chr2;
		cout << "Now creating an instance of the MinMax class using the floating point numbers" << endl
			<< "you entered..." << endl;
		MinMax<double> thirdInstance(chr1, chr2);
		cout << "Done." << endl;
		cout << "The minimum() function says that '" << static_cast<char>(thirdInstance.minimum()) << "' is the lowest of the values you entered." << endl;
		cout << "The maximum() function says that '" << static_cast<char>(thirdInstance.maximum()) << "' is the highest of the values you entered." << endl;

		cout << "Would you like to repeat Part 3: Characters? (y/n): ";
		cin >> again;
	} while (again == 'y' || again == 'Y');

	cout << endl << "End of the program!" << endl << endl;

	system("pause");
	return 0;
}