#ifndef GUARD_BORROWER_H
#define GUARD_BORROWER_H

#include <string>

class Borrower {
public:
	Borrower();
	void set_id(int id);
	void set_name(std::string name);
	int get_id();
	std::string get_name();
	
private:
	std::string name;
	int id = 0;
};

#endif