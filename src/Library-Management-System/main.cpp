#include <iostream>
#include <list>
#include <string>

#include "borrower.h"
#include "book.h"
#include "loan.h"
#include "librarian.h"

int main() {
	Borrower* borrower = new Borrower();
	Librarian* librarian1 = new Librarian();
	Loan* loan = new Loan();
	Book* book1 = new Book();
	Book* book2 = new Book();
	Book* book3 = new Book();

	book1->set_item_number("100");
	book1->set_author("J. K. Rowling");
	book1->set_title("Harry Potter and the Sorcerer's Stone");
	book2->set_item_number("101");
	book2->set_author("Bob Smith");
	book2->set_title("Sign of the Burnt Tuba");
	book3->set_item_number("102");
	book3->set_author("Opal Mac");
	book3->set_title("Electrical Light");

	std::list<Book> books = { *book1, *book2, *book3 };

	librarian1->set_id(10);
	librarian1->set_name("Alyssa Bray");

	std::cout << "Welcome to the Library" << std::endl;
	std::cout << "There are " << book1->get_book_count() << " books to choose from." << std::endl;
	std::cout << "from the following select an option (e.g. '1'): " << std::endl;
	
	int user_input;
	while (true) {
		std::cout << std::string(2, '\n'); // clear screen
		std::cout << "1) List all book names." << std::endl;
		std::cout << "2) exit" << std::endl;
		std::cout << "Input: ";
		std::cin >> user_input;

		switch (user_input) {
		case 1: 
			for (std::list<Book>::iterator it = books.begin(); it != books.end(); ++it) {
				std::cout << "- " << it->get_title() << ", by ";
				std::cout << it->get_author() << std::endl;
			}

			break;
		case 2:
			std::cout << "Exiting the program..." << std::endl;
			return 0;
		default:
			std::cout << "Incorrect input try again" << std::endl;
			break;
		}

		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

	}

	delete book1;
	delete book2;
	delete book3;
	delete librarian1;
	delete borrower;
	delete loan;
	return 0;
}