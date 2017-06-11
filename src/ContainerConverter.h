/*
 * ContainerConverter.h
 *
 *  Created on: Jun 10, 2017
 *      Author: junior
 */

#ifndef CONTAINERCONVERTER_H_
#define CONTAINERCONVERTER_H_

#include "data/DataConvert.h"
#include "data/Type.h"
#include "Container.h"

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

#endif /* CONTAINERCONVERTER_H_ */
