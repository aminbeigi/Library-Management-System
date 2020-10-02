#include <iostream>
#include <list>
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
	
	std::list<Book> books = { book1, book2 };

	book1->set_item_number("100");
	book1->set_author("J. K. Rowling");
	book1->set_title("Harry Potter and the Sorcerer's Stone");
	book2->set_item_number("101");
	book2->set_author("Bob Smith");
	book2->set_title("Sign of the Burnt Tuba");

	librarian1->set_id(10);
	librarian1->set_name("Alyssa Bray");

	std::cout << "Welcome to the Library" << std::endl;
	std::cout << "There are " << book1->get_book_count() << " books to choose from." << std::endl;
	std::cout << "select a following option: " << std::endl;
	std::cout << "1) ";


	delete book1;
	delete book2;
	delete librarian1;
	delete borrower;
	delete loan;
	return 0;
}