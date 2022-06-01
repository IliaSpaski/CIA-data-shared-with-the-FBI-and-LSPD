#pragma once
#include "Database_with_data.h"

///////////////////////////////////////////////////////
// Описывает конструкторы для первоначальной инициализации объекта - группы.
// Описывает деструктор, который вызывается перед удаление объекта и нужен для очищения динамического массива студентов, который мы создаём в динамической памяти.
// Методы getSize() и get() нужны для перебора студентов группы : один возвращает общее количество, а второй - самого студента по порядковому номеру.
// Методы getName() и setName() нужны для доступа к инкапсулированному полю name.

Group::Group() {
	name = "no group name";
	size = 0;
	list = NULL;
}

Group::Group(string name) {
	this->name = name;
	size = 0;
	list = NULL;
}

Group::Group(string name, People* list, int size) {
	this->name = name;
	this->list = list;
	this->size = size;
}

Group::~Group() {
	if (list != NULL) {
		delete[] list;
	}
}

People Group::get(int index) {
	if (list == NULL || index < 0 || index >= size) {
		return People();/////////////////
	}
	else {
		return list[index];
	}
}

int Group::getSize() {
	return size;
}

string Group::getName() {
	return name;
}

void Group::setName(string name) {
	this->name = name;
}

///////////////////////////////////////////////////////
// Динамически расширяет список студентов группы и 
// добавляет в него нового студента.
string Group::getInfo() {
	if (list == NULL || size == 0) {
		return "Group " + name + " is empty.";
	}

	string msg = "Students of group " + name + ":\n";

	for (int i = 0; i < size; i++)
	{
			msg += list[i].getInfo() + "\n";
	}

	return msg;
}

void Group::add(People student) {
	if (list == NULL) {
		list = new People[1];
		list[0] = student;
		size = 1;
	}
	else {

		People* temp = new People[size + 1];

		for (int i = 0; i < size; i++)
		{
			temp[i] = list[i];
		}
		temp[size] = student;
		size++;
		delete[] list;
		list = temp;
	}
}


///////////////////////////////////////////////////////