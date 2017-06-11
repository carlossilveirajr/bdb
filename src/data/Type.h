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
};

bool operator==(const Type& a, const Type& b) {
    return true;
}

#endif /* DATA_TYPE_H_ */
