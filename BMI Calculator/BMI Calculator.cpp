// BMI Calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	//VARIABLES-----------------------------------------------------------------------------------------------------------------------------
	float weightLbs;

	float weightKgs;

	float heightIn;

	float heightCms;

	float heightCmsSquared;

	float bmiTotal;

	string reply1;
 //----------------------------------------------------------------------------------------------------------------------------------
	std::cout << "Hello There!\n";
	std::cout << "\n";

	// ASK FOR WEIGHT

 Weight:

	std::cout << "Do you know your weight in pounds or kilograms? (Input 'lbs' or 'kg')\n";
	cin >> reply1;
	if (reply1 == "lbs") {

		std::cout << "Great!\n";
			goto Pounds;
	}
	else if (reply1 == "kg") {

		std::cout << "Great!\n";
		goto Kilograms;
	}
	else {

		std::cout << "Sorry, I didn't recognize that input, please type it again.";

			goto Weight;

	}
	//CALCULATION FOR WEIGHT IN POUNDS
 Pounds:
	{std::cout << "Please enter your weight in pounds. (lbs)\n";
	cin >> weightLbs;

	weightKgs = weightLbs * 0.45;
	goto height;
	}
	//CALCULATION FOR WEIGHT IN KILOGRAMS
 Kilograms:
	{
		std::cout << "Please enter your weight in Kilograms. (Kg)\n";
		cin >> weightKgs;


	}

	// ASK FOR HEIGHT 
	
 height:

	std::cout << "Do you know your height in inches or centimeters? (Input 'inch' or 'cm')\n";
	cin >> reply1;
	if (reply1 == "inch") {

		std::cout << "Great!\n";
		goto inches;
	}
	else if (reply1 == "cm") {

		std::cout << "Great!\n";
		goto cm;
	}
	else {

		std::cout << "Sorry, I didn't recognize that input, please type it again.\n";

		goto Weight;

	}
 inches:
	std::cout << "Please enter your height in inches.\n";
	cin >> heightIn;

	heightCms = heightIn * 0.025;
	goto Addition;
	
 cm:
		cout << "Please enter your height in centimeters.\n";
		cin >> heightCms;

 Addition:

	heightCmsSquared = heightCms * heightCms;

	bmiTotal = weightKgs / heightCmsSquared;

	std::cout << "Your BMI is " << bmiTotal;
}
