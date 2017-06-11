/*
 * ContainerConverter.cpp
 *
 *  Created on: Jun 10, 2017
 *      Author: junior
 */

#include "ContainerConverter.h"

ContainerConverter::ContainerConverter(Container container, DataConvert converter)
	: container(container), converter(converter) { }

ContainerConverter::~ContainerConverter() { }

void ContainerConverter::add(std::string key, std::string info) {
	container.add(converter.convertKey(key), converter.convertData(info));
}

Type ContainerConverter::get(std::string key) {
	return container.get(converter.convertKey(key));
}
