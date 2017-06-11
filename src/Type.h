/*
 * Type.h
 *
 *  Created on: Jun 10, 2017
 *      Author: junior
 */

#ifndef TYPE_H_
#define TYPE_H_

#include <string>

class Type {
public:
	Type();
	virtual ~Type();

//	std::ostream& operator<<(std::ostream& os, const Type& obj);
};

bool operator==(const Type& a, const Type& b) {
    return true;
}

#endif /* TYPE_H_ */
