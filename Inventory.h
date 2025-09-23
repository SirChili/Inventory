//Inventory.h file

#pragma once

#include <string>

//header files SPECIFY what member variables and member functions
//exist in a class

using namespace std;
class Inventory{
public:

	string itemName;
	double itemPrice;
	int unitsAvailable;

	Inventory() {
		
		string itemName = "TBD";
		double itemPrice = 0.00;
		int unitsAvailable = 0;

	}

	//In header scripts, don't open up the functions cause it'll mess it up
	//declare the functions as such instead
	void setItemName(string); 
	void setItemPrice(double);
	void setUnitsAvailable(int);
	
	string getItemName();
	double getItemPrice();
	int getUnitsAvailable();
	Inventory(string, double, int);
	double calculateTotalValue();
};

