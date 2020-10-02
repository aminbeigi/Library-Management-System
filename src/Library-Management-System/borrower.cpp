#include <iostream>
#include <string>
#include "borrower.h"

Borrower::Borrower() {
}

void Borrower::set_id(unsigned int id) {
	this->id = id;
}

void Borrower::set_name(std::string name) {
	this->name = name;
}

unsigned int Borrower::get_id() {
	return this->id;
}

std::string Borrower::get_name() {
	return this->name;
}