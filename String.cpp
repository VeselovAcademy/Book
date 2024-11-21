#include "String.h"


String:: String(const char* s) {
	int length = strlen(s);
	str = new char[length + 1] {};
	strcpy_s(str, length + 1, s);
}


String::String() :String("No Data") {};

String::String(const String& obj) : String(obj.str) {}


//int String::compare(const String& str) {
//	return strcmp(this->str, str.str);
//}



//аналог cin >> string;
void String::enter() {
	char buff[BUFSIZ];
	std::cout << "Enter a string: ";
	std::cin.getline(buff, BUFSIZ);
	int length = strlen(buff);
	str = new char[length + 1];
	strcpy_s(str, length + 1, buff);
}

const char* String::getstr() const {
	return str;
}

String::~String() {
	delete[]str;
}