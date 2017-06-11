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

#include "ContainerConverter.h"

class Containers {
public:
	Containers();
	virtual ~Containers();

	void create(std::string name, ContainerConverter &container);

	ContainerConverter& get(std::string name);

	void deleteContainer(std::string name);

private:
	std::map<std::string, ContainerConverter> allContainers;
};

#endif /* CONTAINERS_H_ */
