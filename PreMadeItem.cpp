//PreMadeItem.cpp
#include <string>
#include "PreMadeItem.h"

using namespace std;

PreMadeItem :: PreMadeItem(string name, string size) : IceCreamItem(size){ 
	this->name = name; 

}

double PreMadeItem::getPrice(){
	return price; 
}

PreMadeItem::~PreMadeItem(){  //qeustion about virtual; 
	
}


string PreMadeItem::composeItem(){
	string str = "Pre-made Size: " + size + "\n"; 
	str = str+ "Pre-made Item: " + name + "\n";
	str = str+ "Price: $" +to_string(price) + "\n";
	str = str+ "-----" + "\n";
	str = str+ "Total: $" + to_string(price) + "\n";  
}
