#include "Order.h"

using std::make_shared;

void Order::SetDiscount(int amt)
{
	discount = make_shared<Discount>(amt); 
}

int Order::GetDiscountAmount()
{
	if (discount) {
		return discount->GetAmount();
	}
	return 0;
}

//no need to delete

