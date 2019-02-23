#include<string>
#include<map>
#include "CustomItem.h"
#include <iterator>


using namespace std; 

CustomItem::CustomItem(std::string size) : IceCreamItem(size){
 
}


std::string CustomItem::composeItem(){
	string str = "Custom Size: "+size +"\n";
	str = str + "Toppings: " + "\n"; 

	for(map<string, int>::iterator itr = mp.begin(); itr != mp.end(); itr++){
		str = str + itr->first + ": "+ std::to_string(itr->second) + "oz" +"\n"; 
	} 
	str = str+ "Price: $" + std::to_string(price) + "\n";
	str = str+  "-----" + "\n";
	str = str+ "Total: $" + std::to_string(price) +"\n";  
	
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

