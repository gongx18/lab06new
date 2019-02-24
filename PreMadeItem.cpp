//PreMadeItem.cpp
#include <string>
#include <iostream>
#include "PreMadeItem.h"

using namespace std;

PreMadeItem :: PreMadeItem(string name, string size) : IceCreamItem(size){ 
	this->name = name; 
	if(size == "small")
		price = 4.00; 
	else if(size == "medium")
		price = 6.00;
	else
		price = 7.50; 

}

double PreMadeItem::getPrice(){
	return price; 
}

PreMadeItem::~PreMadeItem(){  //qeustion about virtual; 
	
}


string PreMadeItem::composeItem(){
	string str = "Pre-made Size: " + size + "\n"; 
	str = str+ "Pre-made Item: " + name + "\n";

	string p = to_string(price); 
	p.substr(0, p.size()-4);
	
	cout<< p << endl; 
	str = str+ "Price: $" +p+ "\n";
//	str = str+ "-----" + "\n";
//	str = str+ "Total: $" + p + "\n";  
	return str; 
}
