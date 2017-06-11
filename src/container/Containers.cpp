/*
 * Containers.cpp
 *
 *  Created on: Jun 10, 2017
 *      Author: junior
 */

#include "Containers.h"

Containers::Containers() { }

Containers::~Containers() { }

void Containers::create(std::string name, ContainerConverter container) {
	allContainers.insert(std::pair<std::string, ContainerConverter>(name, container));
}

ContainerConverter& Containers::get(std::string name) {
	return allContainers[name];
}

void Containers::deleteContainer(std::string name) {
	allContainers.erase(name);
}
