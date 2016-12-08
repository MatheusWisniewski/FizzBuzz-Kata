#include <gmock\gmock.h>
#include <gtest\gtest.h>
#include <iostream>

#include "FizzBuzzListGenerator.h"

using namespace testing;
using namespace std;

int numberOfIntsFromUserInput();

int main(int argc, char* argv[]) {

	InitGoogleTest(&argc, argv);
	RUN_ALL_TESTS();

	system("pause");

	int numberOfInts = numberOfIntsFromUserInput();

	FizzBuzzListGenerator *generator = new FizzBuzzListGenerator();

	system("cls");

	cout << generator->generateListWithThisManyInts(numberOfInts);

	delete generator;

	system("pause");
	return 0;
}

int numberOfIntsFromUserInput() {

	int numberOfInts = 0;

	while (numberOfInts == 0) {

		system("cls");
		cout << ">> Enter the number of integers to be FizzBuzzed" << endl << endl;
		cin >> numberOfInts;

		if (numberOfInts < 1) {

			cout << endl << ">> Please choose a number bigger than zero." << endl << endl;
			numberOfInts = 0;
			system("pause");
		}
	}

	return numberOfInts;
}