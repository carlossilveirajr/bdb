/*
 * Container.h
 *
 *  Created on: Jun 10, 2017
 *      Author: junior
 */

#ifndef CONTAINER_CONTAINER_H_
#define CONTAINER_CONTAINER_H_

#include <vector>
#include <utility>

#include "../data/Type.h"

class Container {
public:
	Container(unsigned int size);
	virtual ~Container();

	void add(Type key, Type info);
	Type get(Type key);

private:
	unsigned int size;
	std::vector<std::pair<Type, Type> > data;
};

#endif /* CONTAINER_CONTAINER_H_ */