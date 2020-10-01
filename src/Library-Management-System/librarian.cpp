#include "librarian.h"

Librarian::Librarian() {
}

void Librarian::set_id(unsigned int id) {
	this->id = id;
}

void Librarian::set_name(std::string name) {
	this->name = name;
}

unsigned int Librarian::get_id() {
	return this->id;
}

std::string Librarian::get_name() {
	return this->name;
}