#ifndef HOUSE_H //ifndef -if not defined
#define HOUSE_H //defin this file

#include <string>
using namespace std;
//this file show just the singniturs but not how it does it (spesification file)


class House {
public:

	House();//constructor sighniture

	House(int numStories, int numWindows, string color);//constructor with params sighniture

	~House();//destructor sighniture

	void setNumStories(int numStories);

	void setNumWindows(int numWindows);

	void setColor(string color);

	int getNumStories() const;

	int getNumWindows() const;

	string getColor() const;

	void print() const;

private:
	int numStories;
	int numWindows;
	string color;
};//end of the class House

#endif