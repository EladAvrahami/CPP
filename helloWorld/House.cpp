#include "House.h"
#include <iostream>
using namespace std;
//implementation file

House::House()////constructor implementation (no arg constructor)
{
	this->numStories = 1;
	this->numWindows = 4;
	this->color = "white";
}

House::House(int numStories, int numWindows, string color)//con with params implementation(main.cpp line12)
{
	this->numStories = numStories;
	this->numWindows = numWindows;
	this->color = color;
}

House::~House()//destructor implementation (called automaticly whaen obj destroyed)
{
	cout << "The " << color << " house with " << numStories << " stories "
		<< " and " << numWindows << " windows is being destroyed!" << endl;
}

//    👇identifier of the method (identify which calss it apear)
void House::setNumStories(int numStories)//House:: is used to tell the function it belong to the class spesified(House.h)
{
	this->numStories = numStories;
}

void House::setNumWindows(int numWindows)
{
	this->numWindows = numWindows;
}

void House::setColor(string color)
{
	this->color = color;
}

int House::getNumStories() const
{
	return numStories;
}

int House::getNumWindows() const
{
	return numWindows;
}

string House::getColor() const
{
	return color;
}

void House::print() const
{
	cout << "The house is " << color << " and has "
		<< numStories << " stories and "
		<< numWindows << " windows." << endl;
}