#include "snackslot.h"

SnackSlot::SnackSlot(int size) : top(size) {
	
}

void SnackSlot::addSnack(Snack* other) {
	snackSlots.push_back(*other);
}

void SnackSlot::displaySnackSlot() {
	for (auto& item : snackSlots) {
		cout << item.getName() << " ";
	}
	std::cout << std::endl;
}

