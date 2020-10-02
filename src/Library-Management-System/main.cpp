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

	borrower->set_id(10000);
	borrower->set_name("George Bush");

	librarian1->set_id(10);
	librarian1->set_name("Alyssa Bray");

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


	std::cout << "Hello " << borrower->get_name() << ", welcome to the Library!" << std::endl;
	std::cout << "There are " << book1->get_book_count() << " books to choose from." << std::endl;
	
	int user_input;
	while (true) {
		std::cout << std::string(3, '\n'); // clear screen
		std::cout << "1) Select a book to borrow." << std::endl;
		std::cout << "2) exit" << std::endl;
		std::cout << "Input: ";
		std::cin >> user_input;
		std::cout << std::endl;

		int i = 1;
		switch (user_input) {
		case 1: 
			std::cout << "Book names:" << std::endl;

			for (std::list<Book>::iterator it = books.begin(); it != books.end(); ++it) {
				std::cout << '\t' << i << ") " << it->get_title() << ", by ";
				std::cout << it->get_author() << std::endl;
				++i;
			}
			std::cout << "Input: ";
			
			break;

		case 2:
			std::cout << "Exiting the program..." << std::endl;
			return 0;

		default:
			std::cout << "Incorrect input. From the following select an option (e.g. '1'). " << std::endl;
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