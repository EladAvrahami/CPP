#include "Book.h"
#include<iostream>
using namespace std;

Book::Book(string author, string title, string genre, int numPages) {
	this->author = author;//this author equall to author thtta pass in 
	this->title = title;
	this->genre = genre;
	this->numPages = numPages;
}
string Book::getAuthor() const {
	return author;
}

string Book::getTitle() const {
	return title;
}
string Book::getGenre() const {
	return genre;
}

int Book::getNumPages() const {
	return numPages;
}
//becouse this method inside the class we can just call param by name(without using getters like in bookMain.cpp)
void Book::printBookDetailes() const {

	 cout << title << " by " << author <<
		" has " << numPages << " pages,  " <<
		" and its genare is " << genre << endl;
}