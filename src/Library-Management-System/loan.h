#ifndef GUARD_LOAN_H
#define GUARD_LOAN_H

class Loan {
public:
	Loan();
	void set_number_of_books(unsigned int number_of_books);
	unsigned int get_number_of_books();
private:
	unsigned int number_of_books = 0;
};

#endif