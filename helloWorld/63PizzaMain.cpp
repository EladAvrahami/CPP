#include<iostream>
#include "pizza.h"
using namespace std;

void printPizzaData(const Pizza& pizza);

int main() {

	Pizza eladPizza("cheese pizza",10,35);
	printPizzaData(eladPizza);
	eladPizza.addTopping("green olives,corn,pepperoni");
	printPizzaData(eladPizza);

	return 0;
}



void printPizzaData(const Pizza& pizza) 
{
	cout << "Name " << pizza.getName() << endl;
	cout << "Diameter " << pizza.getDiameter() << endl;
	cout << "Total cost " << pizza.getCost() << endl;
	cout << "Toppings:" << endl;
	pizza.printToppings();
	cout << endl;

}