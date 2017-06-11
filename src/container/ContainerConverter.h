/*
 * ContainerConverter.h
 *
 *  Created on: Jun 10, 2017
 *      Author: junior
 */

#ifndef CONTAINER_CONTAINERCONVERTER_H_
#define CONTAINER_CONTAINERCONVERTER_H_

#include "container/Container.h"
#include "data/DataConvert.h"
#include "data/Type.h"

class ContainerConverter {
public:
	ContainerConverter(Container container, DataConvert converter);
	virtual ~ContainerConverter();

	void add(std::string key, std::string info);
	Type get(std::string key);

private:
	Container container;
	DataConvert converter;
};

#endif /* CONTAINER_CONTAINERCONVERTER_H_ */
