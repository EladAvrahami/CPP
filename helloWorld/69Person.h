#ifndef PERSON_H
#define PERSON_H
#include<string>
using namespace std;

class Person
{
public:
	Person(string name);
	string getName() const noexcept ; //noexcept-means that function dont throw an exception
	void setName(string name);

private:
	string name;

};





#endif // !PERSON_H

