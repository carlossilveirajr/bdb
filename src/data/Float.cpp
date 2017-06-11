/*
 * Float.cpp
 *
 *  Created on: Jun 10, 2017
 *      Author: junior
 */

#include "Float.h"

Float::Float(std::string value) { }

Float::~Float() { }

bool Float::cmp(Type &t) {
	return get() == t.get();
}

std::string Float::get() {
	return std::to_string(value);
}

void Float::print() {
	std::cout << value << std::endl;
}
