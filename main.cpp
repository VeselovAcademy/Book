#include <iostream>
#include "String.h"
#include "Book.h"



/*
Создать массив объектов.
Вывести:
■ список книг заданного автора;
■ список книг, выпущенных заданным издательством;
■ список книг, выпущенных после заданного года
*/

//ïîèñê ïî çíà÷åíèþ: author == string
//void findAuthor(Book* book, int size, const char* author) {
//	std::cout << "-----Search by author-----" << std::endl;
//	for (int i = 0; i < size; i++) {
//		if (strcmp(book[i].getAuthor().getstr(), author) == 0) {
//			book[i].print();
//			std::cout << std::endl;
//		}
//	}
//}
//
//
//void findPublisher(Book* book, int size, const char* publisher) {
//	std::cout << "-----Search by publisher-----" << std::endl;
//	for (int i = 0; i < size; i++) {
//		if (strcmp(book[i].getPublisher().getstr(), publisher) == 0) {
//			book[i].print();
//			std::cout << std::endl;
//		}
//	}
//}
// 

void printAuthor( const Book* a_book, const int size, String str) {
	for (int i = 0; i < size; i++) {
		if (a_book[i].getAuthor().compare(str) == 0)
			a_book[i].print();
	}
}

void afterYear(Book* a_book, int size, unsigned year_p) {
	for (int i = 0; i < size; i++) {
		if (a_book[i].getYear() > year_p) {
			a_book[i].print();
		}
	}
}

void printBook(Book book) {
	book.print();
}


int main() {
	const int size = 5;
	Book book_arr[size]{
		Book {"Tolstoy", "Piece and War", "Star", 1750, 1200},
		Book {"Dostoevsky", "Idiot", "Moscow", 1860, 900},
		Book {"Dostoevsky", "Besi", "Moscow", 1870, 920},
		Book {"Dostoevsky", "Crime and Commit","Moscow", 1890, 890},
		Book {"Wells", "The Time Machine", "Henry Holt", 1895, 84}
	};

	//findAuthor(book_arr, size, "Dostoevsky");
	//findPublisher(book_arr, size, "Henry Holt");


	//std::cout << "Checking string compare method" << std::endl;
	//std::cout << book_arr[0].getAuthor().compare("Tolstoyq");


	//printAuthor(book_arr,size, "Dostoevsky");
	//std::cout << "Books bublished after yaer" << std::endl;
	//afterYear(book_arr, size, 1861);

	printBook(Book{"Tolstoy", "Piece and War", "Star", 1750, 1200});
	

	String hello{ "Hello" };
	std::cout << (hello == "World") << std::endl;
}


//Показать константный методы
//Показать Explicit как работает
