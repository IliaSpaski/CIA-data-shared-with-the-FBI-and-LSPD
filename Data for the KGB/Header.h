#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <windows.h>
#include <stdio.h>
#include <winsock.h>
#include <string>

using namespace std;

struct Student {
	string name;
	string surname;
	int age = 0;
	double money = 0;
	//double mark = 0;
	int policy = 0;
	int series = 0;
	int additionalseries = 0;
	int namberAccount = 0;

};

//

void showAllStudents(Student* arr, int size);
// showAllElement(arr, size);
void initStudents(Student * arr, int size);
// initStudents(arr, size);
int randomOfPassword();
// randomOfPassword();
void showAllFields();
// showAllFields();
void showTask();
// showTask();
int searchName(Student* arr, int size, string name);
// searchName(arr, size, nameWrite); 
int namberAccount(Student* arr, int size, int imputNamberAccount);
// namberAccount(arr, size, imputNamberAccount);
int nameSearch(Student* arr, int i);
// name(arr, i);
int namberInsurancePolicy(Student* arr, int size, int imputNamberInsurancePolicy);
// namberInsurancePolicy(arr, size, imputNamberInsurancePolicy);
int policyImput(Student* arr, int size);
//policyImput(arr, size, imputNamberAccount);
int bankImput(Student* arr, int size);
//bankImput(arr, size, imputNamberAccount);
int nameImput(Student* arr, int size);
//nameImput(arr, size, imputNamberAccount);
//