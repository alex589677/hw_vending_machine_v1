#pragma once
#include <string>
#include <iostream>
using namespace std;

class Snack {
private:
	string name;
public:
	Snack() = default;			// default constructor
	Snack(string name);			// parametrs constructor
	Snack(const Snack& other);	// copies constructor
	string& getName();			// getter
};