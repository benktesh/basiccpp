#include "Order.h"

void Order::SetDiscount(int amt)
{
	delete discount; 
	discount = new Discount(amt);
}

int Order::GetDiscountAmount()
{
	if (discount) {
		return discount->GetAmount();
	}
	return 0;
}

Order::~Order()
{
	delete discount;
}

