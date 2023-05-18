#include<iostream>
#include<stdexcept>

using namespace std;

char getLetterGrade(int precent);
//section 7 -grade project
int main() {
	char letter;
	try
	{
		letter = getLetterGrade(99);
		cout << letter << endl;
		letter = getLetterGrade(50);
		cout << letter << endl;
		letter = getLetterGrade(-5);//try to crush it 
		cout << letter << endl;
	}
	catch (const out_of_range& err)
	{
		cerr << err.what() << endl;
	}


	return 0;
}


char getLetterGrade(int precent) {

	char grade;
	if (precent < 0 || precent>100) {
		throw out_of_range("your precent must be within 0-100, inclusive");
	}
	else if (precent >= 90) {
		grade = 'A';
	}
	else if (precent >= 80)
	{
		grade = 'B';
	}
	else if (precent >= 70) {
		grade = 'C';
	}
	else if (precent >= 60) {
		grade = 'D';
	}
	else {
		grade = 'F';
	}
	return(grade);
}