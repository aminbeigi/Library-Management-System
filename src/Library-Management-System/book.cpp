#define _CRT_SECURE_NO_WARNINGS
#include "book.h"

// global variable
unsigned int book_count = 0;

Book::Book() {
	++book_count;
}

void Book::set_item_number(std::string item_number) {
	this->item_number = item_number;
}

void Book::set_author(std::string author) {
	this->author = author;
}

void Book::set_title(std::string title) {
	this->title = title;
}

// current date and time on the current system
void Book::set_date_borrowed(time_t date_borrowed) {
	this->date_borrowed = time(0);
}

std::string Book::get_item_number() {
	return this->item_number;
}

std::string Book::get_author() {
	return this->author;
}

std::string Book::get_title() {
	return this->title;
}

// convert time_t object to string form
char* Book::get_date_borrowed() {
	return ctime(&date_borrowed);
}

unsigned int Book::get_book_count() {
	return book_count;
}