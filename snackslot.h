#pragma once
#include "snack.h"
#include <vector>

class SnackSlot {
private:
	int top = 0;
	vector<Snack> snackSlots;			// container vector
public:
	SnackSlot() = default;				// default constructor
	SnackSlot(int);						// parametrs constructor
	void addSnack(Snack* other);		// funtion addSnack(Snack*)
	void displaySnackSlot();
};