#include "vendingmachine.h"

VendingMachine::VendingMachine(int size) : size_(size) {

}

void VendingMachine::addSlot(SnackSlot* other) {
	vendingSlots.push_back(*other);
}

size_t VendingMachine::getEmptySlotsCount() {
	return vendingSlots.size();
}