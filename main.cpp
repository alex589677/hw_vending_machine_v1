// author-А.С. Гадиатулин group-CPLUS-1006 module-5 block Основные конструкции С++ 
#include <iostream>
#include "snack.h"
#include "snackslot.h"
#include "vendingmachine.h"
using namespace std;

static int slotCount = 2;

int main() {
	setlocale(LC_ALL, "Russian");
	Snack* bounty = new Snack("Bounty");
	Snack* snickers = new Snack("Snickers");
	SnackSlot* slot = new SnackSlot(10);
	slot->addSnack(bounty);
	slot->addSnack(snickers);
	VendingMachine* machine = new VendingMachine(slotCount);
	machine->addSlot(slot);
	//cout << machine->getEmptySlotsCount();
	delete machine;
	delete slot;
	delete snickers;
	delete bounty;
	return 0;
}