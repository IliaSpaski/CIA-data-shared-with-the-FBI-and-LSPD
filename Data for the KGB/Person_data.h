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
	//string getPeople(int size);
	//
	void setPeople(int size);
	//(string name, string surname, string alphabet, int age, double money, int policy, int series, int additionalseries, int namberAccount, double creditCard, double debitCard, string telephone, string bloodType, int size);
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


	



	void namesearch(People arr, int i);

	int namberaccount(People arr, int size, int imputnamberaccount);

	int namberinsurancepolicy(People arr, int size, int imputnamberinsurancepolicy);

	int searchtelephone(People arr, int size, string telephone);

	int telephoneimput(People arr, int size);

	int policyimput(People arr, int size);

	int bankimput(People arr, int size);

	int searchname(People arr, int size, string surname);

	int searchsurname(People arr, int size, string name, string surname);

	int searchpatronymic(People arr, int size, string name, string surname, string patronymic);

	int nameimput(People arr, int size);
	


};
