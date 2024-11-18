#include <iostream>
#include "String.h"
#include "Book.h"



/*
—оздать массив объектов. ¬ывести:
- список книг заданного автора;
- список книг, выпущенных заданным издательством;
- список книг, выпущенных после заданного года.
*/

//поиск по значению: author == string
void findAuthor(Book* book, int size, const char* author) {
	std::cout << "-----Search by author-----" << std::endl;
	for (int i = 0; i < size; i++) {
		if (strcmp(book[i].getAuthor().getstr(), author) == 0) {
			book[i].print();
			std::cout << std::endl;
		}
	}
}


void findPublisher(Book* book, int size, const char* publisher) {
	std::cout << "-----Search by publisher-----" << std::endl;
	for (int i = 0; i < size; i++) {
		if (strcmp(book[i].getPublisher().getstr(), publisher) == 0) {
			book[i].print();
			std::cout << std::endl;
		}
	}
}


int main() {
	const int size = 5;
	Book book_arr[size]{
		{"Tolstoy", "Piece and War", "Satr", 1750, 1200},
		{"Dostoevsky", "Idiot", "Moscow", 1860, 900},
		{"Dostoevsky", "Besi", "Moscow", 1870, 920},
		{"Dostoevsky", "Crime and Commit","Moscow", 1890, 890},
		{"Wells", "The Time Machine", "Henry Holt", 1895, 84}
	};
	
	findAuthor(book_arr, size, "Dostoevsky");
	findPublisher(book_arr, size, "Henry Holt");



}

