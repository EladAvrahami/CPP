#ifndef BOOK_H
#define BOOK_H

#include<string>
using namespace std;
//becouse this class not contain any setters it is immutable
class Book {
	
	public:
		//conatructor
		Book(string author, string title, string genre, int numPages);
		//getters
		string getAuthor() const;
		string getTitle() const;
		string getGenre() const;
		int getNumPages() const;
		void printBookDetailes() const;

	private:
		string author;
		string title;
		string genre;
		int numPages;



};


















#endif // !BOOK_H

