#pragma once
#include "Header.h"
// entity-class
class People {
//	friend void changeMark(Student& st);
private:
	static int count;

	string name;
	string surname;
	string alphabet;
	int age;
	double money;
	int policy;
	int series;
	int additionalseries;
	int namberAccount;
	double creditCard; //Кредитная карта
	double debitCard; //Дебетовые карты
	string telephone;
	string bloodType; //Группа крови O(I) Rh−	O(I) Rh +  A(II) Rh− A(II) Rh + B(III) Rh−	B(III) Rh + AB(IV) Rh−	AB(IV) Rh +


public:
	static const int MAX_STUDENT_AGE = 80;
	static const int MIN_STUDENT_AGE = 14;



	People();
	People(string name, string surname, string alphabet, int age, double money, int policy, int series, int additionalseries, int namberAccount, double creditCard, double debitCard, string telephone, string bloodType);
	~People();
	//
	string getPeople(int size);
	//
	string getName();
	void setName(string n);
	//
	string getSurname();
	void setSurname(string s);
	//
	string getAlphabet();
	void setAlphabet(string a);
	//
	int  getAge();
	void setAge(int a);
	//
	double getMoney();
	void setMoney(int m);
	//
	int  getPolicy();
	void setPolicy(int p);
	//
	int  getSeries();
	void setSeries(int s);
	//
	int  getAdditionalseries();
	void setAdditionalseries(int as);
	//
	int  getNamberAccount();
	void setNamberAccount(int na);
	//
	double getCreditCard(); //Кредитная карта
	void setCreditCard(double cc);
	//
	double  getDebitCard(); //Дебетовые карты
	void setDebitCard(double dc);
	//
	string  getTelephone();
	void setTelephone(string t);
	//
	string  getBloodType();
	void setBloodType(string bt);
	//
	static int getCount();
	string getInfo();
};
