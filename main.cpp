//Main file
//OOP


#include "Inventory.h"
#include <iostream>
#include <string>

using namespace std;

int main() {

	Inventory item1;
	item1.setItemName("Apple");
	item1.setItemPrice(2.25);
	item1.setUnitsAvailable(18);

	cout << "The first Item is " << item1.getItemName() << endl;
	cout << "Item Price: " << item1.getItemPrice() << endl;
	cout << "Units Available: " << item1.getUnitsAvailable();
	cout << "\nThe total price for " << item1.getItemName() << "'s units is $" << item1.calculateTotalValue() << endl;

	Inventory item2 = Inventory("Banana", 1.15, 30);

	cout << "\nThe second item is " << item2.getItemName();
	cout << "\nItem Price: " << item2.getItemPrice();
	cout << "\nUnits Available: " << item2.getUnitsAvailable();
	cout << "\nThe total price for " << item2.getItemName() << "'s units is $" << item2.calculateTotalValue() << endl;
	

}
