#ifndef GUARD_LIBRARIAN_H
#define GUARD_LIBRARIAN_H

#include <string>

class Librarian {
public:
	Librarian();
	void set_id(unsigned int id);
	void set_name(std::string name);
	unsigned int get_id();
	std::string get_name();
private:
	unsigned int id = 0;
	std::string name;
};

#endif