//============================================================================
// Name        : bdb.cpp
// Author      : Carlos Roberto Silveira Junior
// Version     :
// Copyright   : 
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstring>

#include "container/Containers.h"
#include "container/Container.h"
#include "container/ContainerConverter.h"
#include "data/DataConvert.h"

using namespace std;

inline ContainerConverter& create();

int main() {
	char line[100];
	char *token;

	Containers all;

	while (cin >> line && !strcmp(line, "QUIT")) {
		token = strtok(line, " ");

		if (!strcmp(token, "CREATE")) {
			token = strtok(NULL, " ");
			all.create(token, create());
		}
		else if (!strcmp(token, "ADD")) {
			token = strtok(NULL, " ");
			all.get(token).add(strtok(NULL, " "), strtok(NULL, " "));
		}
		else if (!strcmp(token, "GET")) {
			token = strtok(NULL, " ");
			cout << all.get(token).get(strtok(NULL, " "));
		}
		else if (!strcmp(token, "DESTRUCT")) {
			token = strtok(NULL, " ");
			all.deleteContainer(string(token));
		}
		else {
			cout << "Instruction not found" << endl;
		}
	}

	return 0;
}

inline ContainerConverter& create() {
	char *key = strtok(NULL, " ");
	char *value = strtok(NULL, " ");
	char *size = strtok(NULL, " ");

	char *k = strtok(key, "=");
	k = strtok(NULL, "=");
	char *v = strtok(value, "=");
	v = strtok(NULL, "=");
	char *s = strtok(size, "=");
	s = strtok(NULL, "=");

	DataConvert con(k, v);
	Container cont(atoi(s));
	ContainerConverter c(cont, con);

	return c;
}
