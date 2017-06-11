/*
 * Containers.cpp
 *
 *  Created on: Jun 10, 2017
 *      Author: junior
 */

#include "Containers.h"

Containers::Containers() { }

Containers::~Containers() { }

void Containers::create(std::string name, Container &container) {
	allContainers[name] = container;
}

Container& Containers::get(std::string name) {
	return allContainers[name];
}
