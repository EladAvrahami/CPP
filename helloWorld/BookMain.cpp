#include <iostream>
#include "Book.h"
using namespace std;

void printBookDetailes(const Book& book);//function prototype using & by ref to save memory insted of by ordinary by val (Book book) that creat new copy

int main() {

	Book gameOfThrones("George Martin", "Game Of Thrones", "FANTASY", 846);
	Book mathBook("bla", "the math book", "Math", 1300);
	Book cppBook("Bjarne Stroutstrup", "The C++ PL", "Programing", 1500);

	//printBookDetailes(gameOfThrones);
	//printBookDetailes(mathBook);
	//printBookDetailes(cppBook);

	gameOfThrones.printBookDetailes();
	mathBook.printBookDetailes();
	cppBook.printBookDetailes();


	return 0;
}

//by using by ref way (&) we get the adventage of the memory efficiency
//by using const we make sure that user cant change the book
void printBookDetailes(const Book& book) {

	cout << book.getTitle() << " by " << book.getAuthor() <<
		" has " << book.getNumPages() << " pages,  " <<
		" and its genare is " << book.getGenre() << endl;
}