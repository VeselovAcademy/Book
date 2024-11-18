#pragma once
#include "String.h"

/*
�������� ����� Book
���������� ������� ������: �����, ��������, ������������,
���, ����������, �������.
������� ������ ��������. �������:
- ������ ���� ��������� ������;
- ������ ����, ���������� �������� �������������;
- ������ ����, ���������� ����� ��������� ����.
����������� explicit ����������� � ����������� �������-����� (��������, ��� ����������� ������ � ����� � �.�.)
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

