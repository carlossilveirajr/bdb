/*
 * DataConvert.cpp
 *
 *  Created on: Jun 10, 2017
 *      Author: junior
 */

#include "../data/DataConvert.h"

DataConvert::DataConvert(std::string key, std::string data) :
	keyType(key), dataType(data) { }

DataConvert::~DataConvert() { }

Type DataConvert::convertKey(std::string value) {
	return convert(keyType, value);
}

Type DataConvert::convertData(std::string value) {
	return convert(dataType, value);
}

Type DataConvert::convert(std::string type, std::string value) {
	if (type == "float")
		return Float(value);
}
