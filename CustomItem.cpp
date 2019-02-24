#include<string>
#include<map>
#include "CustomItem.h"
#include <iterator>
#include <iostream>
#include<sstream>


using namespace std; 

CustomItem::CustomItem(std::string size) : IceCreamItem(size){
 
}


std::string CustomItem::composeItem(){
	string str = "Custom Size: "+size +"\n";
	str = str + "Toppings:" + "\n"; 

	for(map<string, int>::iterator itr = mp.begin(); itr != mp.end(); itr++){
		str = str + itr->first + ": "+ std::to_string(itr->second) + " oz" +"\n"; 
	}
 
	string p = to_string(price);
	p = p.substr(0, p.size()-4); 
 
	str = str+ "Price: $" + p + "\n";
	//str = str+  "-----" + "\n";
	//str = str+ "Total: $" + p +"\n";  
	return str; 	
}

double CustomItem::getPrice(){
	return price; 
}

CustomItem::~CustomItem(){
	
}

void CustomItem::addTopping(std::string topping){
	if(mp.find(topping) == mp.end()) //if no such topping in mp, add it to map
		mp.insert(pair<string, int>(topping, 1));
	else{  //if exists, increase it by one oz. 
		mp.find(topping)->second ++;
 	}
	price += 0.40; 
	
	  	
}

