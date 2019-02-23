//CustomItem.h

#include<string>
#include<map>

#ifndef CUSTOMITEM_H
#define CUSTOMITEM_H
#include "IceCreamItem.h"


class CustomItem : public IceCreamItem{
	public:
		CustomItem(std::string size);
		std::string composeItem();  
		double getPrice(); 
		virtual ~CustomItem(); 
		void addTopping(std::string topping);
		
	private: 	
		std::map<std::string, int> mp; 
		//In my understanding, CustomItem expands on IceCreamItem
		//by having add Topping function. 	
};
#endif
