//PreMadeItem.h
#ifndef PREMADEITEM_H
#define PREMADEITEM_H
#include "IceCreamItem.h"
	
class PreMadeItem : public IceCreamItem{
	public:
		PreMadeItem(std::string name, std::string size);
		virtual ~PreMadeItem();
		double getPrice();
		std::string composeItem();   
	
	private:
		std::string name;
		std::string size; 	

};
#endif
