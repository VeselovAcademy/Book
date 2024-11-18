#include "Book.h"

Book::Book(const char* author_p, const char* name_p, const char* publisher_p, unsigned year_p, unsigned pages_p) :
	author{ author_p }, name{ name_p }, publisher{ publisher_p }, year{ year_p }, pages{ pages_p } {}

Book::Book() :Book("No author", "No name", "No Publisher", 0, 0) {};

void Book::print() {
	std::cout << "Author:\t\t" << author.getstr() << std::endl;
	std::cout << "Name:\t\t" << name.getstr() << std::endl;
	std::cout << "Publisher:\t" << publisher.getstr() << std::endl;
	std::cout << "Year:\t\t" << year << std::endl;
	std::cout << "Pages:\t\t" << pages << std::endl;
}