#include "69Person.h"
#include<stdexcept>

using namespace std;

Person::Person(string name) {
	setName(name);
}

string Person::getName() const noexcept  {
	return name;
}
void Person::setName(string name) {
	if (name != "john") {
		this->name = name;
	}
	else {
		throw runtime_error("john? that guy is to ugly for an object");
	}
}