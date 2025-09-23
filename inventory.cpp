//the inventory.cpp file

#include "Inventory.h"


//This is the implementation file for inventory.h
//provides details made in inventory.h

using namespace std;

void Inventory::setItemName(string fruit)
{
	itemName = fruit;

}

void Inventory::setItemPrice(double price)
{
	itemPrice = price;
}

void Inventory::setUnitsAvailable(int units)
{
	unitsAvailable = units;
}

string Inventory::getItemName()
{
	
	return itemName;
}

double Inventory::getItemPrice()
{
	return itemPrice;
}

int Inventory::getUnitsAvailable()
{
	return unitsAvailable;
}


Inventory::Inventory(string fruit , double price , int units)
{
	itemName = fruit;
	itemPrice = price;
	unitsAvailable = units;

}

double Inventory::calculateTotalValue()
{
	
	double total = itemPrice * unitsAvailable;

	return total;
}


