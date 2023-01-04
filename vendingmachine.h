#pragma once
#include <vector>
#include "snackslot.h"

class VendingMachine {
private:
	int size_ = 0;
	vector<SnackSlot> vendingSlots;				// container vector
public:
	VendingMachine() = default;
	VendingMachine(int);
	void addSlot(SnackSlot* other);
	size_t getEmptySlotsCount();
};