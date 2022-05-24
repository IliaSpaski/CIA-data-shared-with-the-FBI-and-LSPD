#pragma once
#include "Person_data.h"

class Group
{
private:
	string name;
	int size;
	People* list;

public:
	Group();
	Group(string name);
	Group(string name, People* list, int size);
	~Group();

	void add(People student);
	People get(int index);
	int getSize();
	string getName();
	void setName(string name);

	string getInfo();
}; 


