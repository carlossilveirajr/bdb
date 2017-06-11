/*
 * DataConvert.h
 *
 *  Created on: Jun 10, 2017
 *      Author: junior
 */

#ifndef DATA_DATACONVERT_H_
#define DATA_DATACONVERT_H_

#include <string>

#include "../data/Float.h"

class DataConvert {
public:
	DataConvert(std::string key = "null", std::string data = "null");
	virtual ~DataConvert();

	Type convertKey(std::string value);
	Type convertData(std::string value);

private:
	std::string keyType;
	std::string dataType;

	Type convert(std::string type, std::string value);
};

#endif /* DATA_DATACONVERT_H_ */
