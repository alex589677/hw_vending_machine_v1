#include "snack.h"

Snack::Snack(string name) {
	this->name = name;
}

Snack::Snack(const Snack& other) {
	this->name = other.name;
}

string& Snack::getName() {
	return name;
}
