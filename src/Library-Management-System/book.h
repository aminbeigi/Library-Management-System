#ifndef GUARD_BOOK_H
#define GUARD_BOOK_H

#include <string>
#include <ctime>

class Book {
public:
	Book();
	void set_item_number(std::string item_number);
	void set_author(std::string author);
	void set_title(std::string title);
	void set_date_borrowed(time_t date_borrowed);
	std::string get_item_number();
	std::string get_author();
	std::string get_title();
	char* get_date_borrowed();
	unsigned int get_book_count();

private:
	std::string item_number;
	std::string author;
	std::string title;
	time_t date_borrowed;
	time_t date_returned;
};

#endif