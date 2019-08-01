#pragma once
#include "Discount.h"
class Order {
private:
	Discount* discount = nullptr;
public:
	void SetDiscount(int amt);
	int GetDiscountAmount();
	~Order();
};
