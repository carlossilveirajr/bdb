/*
 * DataConvert.h
 *
 *  Created on: Jun 10, 2017
 *      Author: junior
 */

#ifndef DATACONVERT_H_
#define DATACONVERT_H_

#include <string>

#include "Float.h"

class DataConvert {
public:
	DataConvert(std::string key, std::string data);
	virtual ~DataConvert();

	Type convertKey(std::string value);
	Type convertData(std::string value);

private:
	std::string keyType;
	std::string dataType;

	Type convert(std::string type, std::string value);
};

#endif /* DATACONVERT_H_ */
