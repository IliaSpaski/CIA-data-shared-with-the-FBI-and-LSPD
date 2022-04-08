#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <windows.h>
#include <stdio.h>
#include <winsock.h>
#include <string>
#include <fstream>

using namespace std;

struct Student {
	string name;
	string surname;
	string alphabet;
	int age = 0;
	double money = 0;
	//double mark = 0;
	int policy = 0;
	int series = 0;
	int additionalseries = 0;
	int namberAccount = 0;
	double creditCard = 0; //Креди́тная ка́рта
	double debitCard = 0; //Дебетовые карты
	string telephone;
	string bloodType; //Гру́ппа кро́ви

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
// namberInsurancePolicy(arr, size);
int policyImput(Student* arr, int size);
//policyImput(arr, size);
int bankImput(Student* arr, int size);
//bankImput(arr, size);
int nameImput(Student* arr, int size);
//nameImput(arr, size);
int telephoneImput(Student* arr, int size);
//nameImput(arr, size);
//