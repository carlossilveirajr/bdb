/*
 * Containers.h
 *
 *  Created on: Jun 10, 2017
 *      Author: junior
 */

#ifndef CONTAINERS_H_
#define CONTAINERS_H_

#include <string>
#include <map>
#include <functional>

#include "Container.h"

class Containers {
public:
	Containers();
	virtual ~Containers();

	void create(std::string name, Container &container);

	Container& get(std::string name);

private:
	std::map<std::string, Container> allContainers;
};

#endif /* CONTAINERS_H_ */
