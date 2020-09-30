#include <iostream>
#include <string>

#include "borrower.h"

Borrower::Borrower() {
	std::cout << "Epic constructor" << std::endl;
}

void Borrower::set_id(int id) {
	this->id = id;
}

void Borrower::set_name(std::string name) {
	this->name = name;
}

int Borrower::get_id() {
	return this->id;
}

std::string Borrower::get_name() {
	return this->name;
}