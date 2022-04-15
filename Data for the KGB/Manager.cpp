#include "Manager.h"

double Manager::calculateAvgMark(Group group) {
	double avg = 0;

	for (int i = 0; i < group.size; i++)
	{
		avg += group.list[i].getMark();
	}

	return avg / group.size;
}

double Manager::calculateAvgAge(Group group) {
	double avg = 0;

	for (int i = 0; i < group.size; i++)
	{
		avg += group.list[i].getAge();
	}

	return avg / group.size;
}