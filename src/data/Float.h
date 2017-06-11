/*
 * Float.h
 *
 *  Created on: Jun 10, 2017
 *      Author: junior
 */

#ifndef DATA_FLOAT_H_
#define DATA_FLOAT_H_

#include <iostream>
#include <string>

#include "Type.h"

class Float: public Type {
public:
	Float(std::string value);
	virtual ~Float();

	bool cmp(Type &t);
	std::string get();
	void print();

private:
	float value;
};



#endif /* DATA_FLOAT_H_ */
