#pragma once
#include "String.h"

/*
Создайте класс Book
Необходимо хранить данные: Автор, Название, Издательство,
Год, Количество, страниц.
Создать массив объектов. Вывести:
- список книг заданного автора;
- список книг, выпущенных заданным издательством;
- список книг, выпущенных после заданного года.
Используйте explicit конструктор и константные функции-члены (например, для отображения данных о книге и т.д.)
*/


class Book
{
	String author;
	String name;
	String publisher;
	unsigned year;
	unsigned pages;
public:
	Book(const char* author_p, const char* name_p, const char* publisher_p, unsigned year_p, unsigned pages_p);
	
	String getAuthor() {
		return author;
	}
	String getName() {
		return name;
	}
	String getPublisher() {
		return publisher;
	}
	unsigned getYear() {
		return year;
	}

	unsigned getPages() {
		return pages;
	}

	void print();

	Book();
};

