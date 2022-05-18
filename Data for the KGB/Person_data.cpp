#pragma once
#include "Person_data.h"
#include "Header.h"
///////////////////////////////////////////////////////
// Счётчик кол. людей в базе

int People::count = 0;

int People::getCount() {
	return count;
}

///////////////////////////////////////////////////////
// Объявление пораметров для 1-го человека

People::People() {
	/*
	string name;
	string surname;
	string alphabet;
	int age = 0;
	double money = 0;
	int policy = 0;
	int series = 0;
	int additionalseries = 0;
	int namberAccount = 0;
	double creditCard = 0; //Креди́тная карта
	double debitCard = 0; //Дебетовые карты
	string telephone;
	string bloodType; //Гру́ппа крови
	*/
	count++;
	 name = "no name";
	 surname = "no surname";
	 alphabet = "no alphabet";
	 age = 0;
	 money = 0;
	 policy = 0;
	 series = 0;
	 additionalseries = 0;
	 namberAccount = 0;
	 creditCard = 0; //Креди́тная карта
	 debitCard = 0; //Дебетовые карты
	 telephone = "no telephone";
	 bloodType = "no bloodType"; //Гру́ппа крови
}

People::People(string name, string surname, string alphabet, int age, double money, int policy, int series,
int additionalseries, int namberAccount, double creditCard, double debitCard, string telephone, string bloodType) {
	
	count++;
	this->name = name;
	this->surname = surname;
	this->alphabet = alphabet;
	this->age = age;
	this->money = money;
	this->policy = policy;
	this->series = series;
	this->additionalseries = additionalseries;
	this->namberAccount = namberAccount;
	this->creditCard = creditCard; //Креди́тная карта
	this->debitCard = debitCard; //Дебетовые карты
	this->telephone = telephone;
	this->bloodType = bloodType; //Гру́ппа крови
}

People::~People() {
	count--;
}


///////////////////////////////////////////////////////
// Функции для пораметров человека
// *get получает(возвращает)
// *set устанавливает(меняет)

string People::getName() {
	return name;
}

void People::setName(string name) {
	this->name = name;
}
//
string People::getSurname() {
	return surname;
}

void People::setSurname(string surname) {
	this->surname = surname;
}
//
string People::getAlphabet() {
	return alphabet;
}

void People::setAlphabet(string alphabet) {
	this->alphabet = alphabet;
}
// close name
int People::getAge() {
	return age;
}

void People::setAge(int age) {
	if (age >= MIN_STUDENT_AGE && age <= MAX_STUDENT_AGE) {
		this->age = age;
	}
}
//
double People::getMoney() {
	return money;
}

void People::setMoney(int money) {
	this->money = money;
}
//
int People::getPolicy() {
	return policy;
}

void People::setPolicy(int policy) {
	this->policy = policy;
}
//
int People::getSeries() {
	return series;
}

void People::setSeries(int series) {
	this->series = series;
}
//
int People::getAdditionalseries() {
	return additionalseries;
}

void People::setAdditionalseries(int additionalseries) {
	this->additionalseries = additionalseries;
}
//
int People::getNamberAccount() {
	return namberAccount;
}

void People::setNamberAccount(int namberAccount) {
	this->namberAccount = namberAccount;
}
//
double People::getCreditCard() {
	return creditCard;
}

void People::setCreditCard(double creditCard) {
	this->creditCard = creditCard;
}
//
double People::getDebitCard() {
	return debitCard;
}

void People::setDebitCard(double debitCard) {
	this->debitCard = debitCard;
}
//
string People::getTelephone() {
	return telephone;
}

void People::setTelephone(string telephone) {
	this->telephone = telephone;
}
//
string People::getBloodType() {
	return bloodType;
}

void People::setBloodType(string bloodType) {
	this->bloodType = bloodType;
}

int indentOne() {
	for (int i = 0; i < 98; i++) {
		return char(219);
	}
}
//
///////////////////////////////////////////////////////
// Информация о человеке(Вывод)
string People::getInfo() {
//	if (privacy < 4) {
	if (5 < 4) {
		return '|' + name + ' ' + '|' + surname + ' ' + '|' + alphabet + ';' + "\n"
			+ char(219) + char(221) + "		" + '|' + " Age = " + to_string(age) + ';'
			+ ' ' + '|' + telephone + "\n" + char(219) + char(221) + "		" + '|' + "Bank account " + char(252) + ' ' + to_string(namberAccount)
			+ " - " + "(In connection with the U.S.Attorney's ruling: 10.22363.2313-2337-2017-21-1-9-27 access to view information about bank accounts is limited to level 4.)" + ' ' + ';' + "\n"
			+ char(219) + char(221) + "		" + '|' + " Money for credit card: "
			+ "In connection with the U.S. Attorney's ruling: 10.22363.2313-2337-2017-21-1-9-27 access to view information about bank accounts is limited to level 4." + ';' + "\n"
			+ char(219) + char(221) + "		" + '|' + " Money for debit card: "
			+ "In connection with the U.S. Attorney's ruling: 10.22363.2313-2337-2017-21-1-9-27 access to view information about bank accounts is limited to level 4." + ';' + "\n"
			+ char(219) + char(221) + "		" + '|' + " Blood type: " + bloodType + ';' + "\n" +
			char(219) + char(221) + "		" + '|' + "Insurance policy: " + to_string(policy) + ", series " + char(252) + ':' + ' ' + to_string(series) + " - "
			+ to_string(additionalseries) + ' ' + "\n" + to_string(indentOne()) + "\n";
	}

//	else if (privacy >= 4) {
else if (5 >= 4) {
		return '|' + name + ' ' + '|' + surname + ' ' + '|' + alphabet + ';' + "\n"
			+ char(219) + char(221) + "		" + '|' + " Age = " + to_string(age) + ';'
			+ ' ' + '|' + telephone + "\n" + char(219) + char(221) + "		" + '|' + "Bank account " + char(252) + ' ' + to_string(namberAccount)
			+ " - " + to_string(money) + '$' + ' ' + ';' + "\n"
			+ char(219) + char(221) + "		" + '|' + " Money for credit card: " + to_string(creditCard) + '$' + ';' + "\n"
			+ char(219) + char(221) + "		" + '|' + " Money for debit card: " + to_string(debitCard) + '$' + ';' + "\n"
			+ char(219) + char(221) + "		" + '|' + " Blood type: " + bloodType + ';' + "\n" +
			char(219) + char(221) + "		" + '|' + "Insurance policy: " + to_string(policy) + ", series " + char(252) + ':' + ' ' + to_string(series) + " - "
			+ to_string(additionalseries) + ' ' + "\n" + to_string(indentOne()) + "\n";
	}
}
//	"; alive = " + (alive ? "yes" : "no");
///////////////////////////////////////////////////////

