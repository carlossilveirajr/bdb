/*
 * Container.cpp
 *
 *  Created on: Jun 10, 2017
 *      Author: junior
 */

#include "Container.h"

Container::Container(unsigned int size) : size(size) { }

Container::~Container() { }

void Container::add(Type key, Type info) {
	if (data.size() >= size)
		data.erase(data.begin());

	data.push_back(std::pair<Type, Type> (key, info));
}

Type Container::get(Type key) {
	for (auto i : data)
		if (i.first == key)
			return i.second;
}
