#pragma once

class Discount {
private:
	int amount = 0;
public:
	Discount(int amt) :amount(amt) {};
	void SetDiscount(int amt);
	int GetAmount();
};
