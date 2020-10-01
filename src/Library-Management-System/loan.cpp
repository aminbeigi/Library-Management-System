#include "loan.h"

Loan::Loan() {
}

void Loan::set_number_of_books(unsigned int number_of_books) {
	this->number_of_books = number_of_books;
}

unsigned int Loan::get_number_of_books() {
	return number_of_books;
}