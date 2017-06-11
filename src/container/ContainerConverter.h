/*
 * ContainerConverter.h
 *
 *  Created on: Jun 10, 2017
 *      Author: junior
 */

#ifndef CONTAINER_CONTAINERCONVERTER_H_
#define CONTAINER_CONTAINERCONVERTER_H_

#include "Container.h"
#include "../data/DataConvert.h"
#include "../data/Type.h"

class ContainerConverter {
public:
	ContainerConverter();
	ContainerConverter(Container container, DataConvert converter);
	virtual ~ContainerConverter();

	void add(std::string key, std::string info);
	bool get(std::string key, Type &out);

private:
	Container container;
	DataConvert converter;
};

#endif /* CONTAINER_CONTAINERCONVERTER_H_ */
