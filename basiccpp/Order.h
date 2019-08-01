#pragma once
#include "Discount.h"
#include <memory>
class Order {
private:
	std::shared_ptr<Discount> discount;  //include <memory>
public:
	void SetDiscount(int amt);
	int GetDiscountAmount();
	//~Order(); //no need for a destructor
};
