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
	book3->set_title("cat");

	std::list<Book> books = { *book1, *book2, *book3 };


	std::cout << "Hello " << borrower->get_name() << ", welcome to the Library!" << std::endl;
	std::cout << "There are " << book1->get_book_count() << " books to choose from." << std::endl;
	
	int user_input;
	std::string selected_book;
	while (true) {
		std::cout << "1) Display all available books." << std::endl;
		std::cout << "2) Borrow a book." << std::endl;
		std::cout << "3) Exit." << std::endl;
		std::cout << "Input: ";
		std::cin >> user_input;

		int i = 1;
		switch (user_input) {
		case 1: 
			std::cout << "Books:" << std::endl;

			for (std::list<Book>::iterator it = books.begin(); it != books.end(); ++it) {
				std::cout << '\t' << i << ") " << it->get_title() << ", by ";
				std::cout << it->get_author() << std::endl;
				++i;
			}
			break;

		case 2:
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

			std::cout << "Enter a book name: " << std::endl;
			std::getline(std::cin, selected_book);
			for (std::list<Book>::iterator it = books.begin(); it != books.end(); ++it) {
				if (it->get_title() == selected_book) {
					book3->set_date_borrowed(time(0));
					std::cout << book3->get_date_borrowed();		
				}
			}
			break;

		case 3:
			std::cout << "Exiting the program..." << std::endl;
			return 0;

		default:
			std::cout << "Incorrect input. From the following select an option (e.g. '1'). " << std::endl;
			break;
		}

		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		selected_book.erase();
		std::cout << std::string(1, '\n'); // clear screen
	}

	delete book1;
	delete book2;
	delete book3;
	delete librarian1;
	delete borrower;
	delete loan;
	return 0;
}
