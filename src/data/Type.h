/*
 * Type.h
 *
 *  Created on: Jun 10, 2017
 *      Author: junior
 */

#ifndef DATA_TYPE_H_
#define DATA_TYPE_H_

#include <string>

class Type {
public:
	Type();
	virtual ~Type();

	virtual bool cmp(Type &t);
	virtual std::string get();
	virtual void print();
};

#endif /* DATA_TYPE_H_ */
