#pragma once
#include "Person_data.h"
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


extern int privacy;

///////////////////////////////////////
void People::setPeople(int size)
//(string name, string surname, string alphabet, int age, double money, int policy, int series,
//int additionalseries, int namberAccount, double creditCard, double debitCard, string telephone, string bloodType, int size)
{
	srand(time(NULL));

	/////
	const string NAME[]{
			"Aleksey", "Anatoli", "Andrey", "Anton", "Arkady", "Artem", "Aleksan", "Artur", "Boris", "Vadim",
			"Valenti", "Vasily", "Vitaly", "Vladimi", "Vladisl", "Georgy ", "Gleb", "Grigory", "Daniil", "Denis",
			"Valeriy", "Viktor", "Ivan", "Igor", "Ilya", "Innoken", "Dmitry", "Zakhar", "Yevgeny", "Yegor",
			"Kirill", "Konstan", "Lev ", "Leonid", "Maksim", "Matvey", "Mikhail", "Moisey", "Nikita", "Nikolay",
			"Oleg", "Pavel", "Pyotr", "Roman", "Ruslan", "Svyatos", "Semyon", "Sergey", "Stanisl", "Stepan",
			"Timofey", "Timur", "Fedor", "Filipp", "Eduard", "Yuri", "Yakov", "Yan ", "Yarosla", "Alisa",
			"Alina", "Alla", "Albina", "Anastas", "Angelin", "Angela", "Anna", "Antonin", "Valenti", "Valeria",
			"Vera", "Victori", "Galina", "Darina", "Darya", "Diana", "Dina", "Elena", "Zoya", "Irina",
			"Inna", "Karina", "Kira", "Klara", "Larisa", "Lidia", "Lilia", "Lia ", "Maria", "Nina",
			"Oxana", "Olga", "Polina", "Raisa", "Rosa", "Tamara", "Elina", "Yulia", "Yana", "Ilia"

					"		", "		", "		", "		", "		", "		", "		", "		", "		", "		",
	};


	const int NAME_COUNT = 100;
	/////

	/////
	const string SURNAME[]{
		"Abramson", "Barnes", "Bawerman", "Becker", "Chesterton", "Conors", "Cook", "Cramer", "Creighton", "Croftoon",
		"Adamson", "Barrington", "Benson", "Brickman", "Chapman", "Crossman", "Daniels", "Davidson", "Day", "Dean",
		"Adderiy", "Birch", "Bradshaw", "Brooks", "Charlson", "Dodson", "Derrick", "Dickinson", "Donovan", "Douglas",
		"Addington", "Bishop", "Bush", "Brown", "Clapton", "Eddington", "Dyson", "Duncan", "Dutton", "Dowman",
		"Adrian", "Black", "Calhoun", "Campbell", "Clifford", "Edwards", "Elmers", "Enderson", "Erickson", "Evans",
		"Albertson", "Blare", "Carey", "Carroll", "Chandter", "Fane", "Farmer", "Farrell", "Ferguson", "Finch",
		"Babcock", "Blomfield", "Coleman", "Carter", "Fisher", "Fleming", "Ford", "Forman", "Forster", "Foster",
		"Archibald", "Boolman", "Faber", "Gill", "Garrison", "Gate", "Gardner", "Freeman", "Fulton", "Galbraith",
		"Arthurs", "Bradberry", "Goodman", "Hardman", "Holmes", "Jenkin", "Kendal", "Kirk", "Lawman", "Little",
		"Alsopp", "Gilson", "Hailey", "Harrison", "Howard", "Johnson", "Kennedy", "Laird", "Leapman", "Livingston",
		"Backer", "Gimson", "Hamphrey", "Hawkins", "James", "Keat", "Kennett", "Lamberts", "Leman", "Longman",
		"Baldwin", "Goldman", "Hancock", "Higgins", "Jeff", "Kelly", "Kingsman", "Larkins", "Lewin", "MacAdam",
		"Mackenzie", "Mansfield", "Marlow", "Marshman", "Mason", "Mathews", "Mercer", "Michaelson", "Miers", "Miller",
		"Miln", "Milton", "Nevill", "Oakman", "Ogden", "Page", "Parson", "Pass", "Porter", "Ramacey",
		"Reynolds", "Salomon", "Samuels", "Walter", "Spaski", "Shackley", "Taylor", "Walkman", "Walter", "Youmans",

	};

	const int SURNAME_COUNT = 150;
	/////
	/////
	const string ALPHABET[]{
		"Q", "W", "E", "R", "T", "Y", "U", "I", "O", "P", "A", "S", "D", "F", "G", "H", "J", "K", "L", "Z", "X", "C", "V", "B", "N", "M",
	};

	const int ALPHABET_COUNT = 26;
	/////
	const string BLOOD_TYPE[]{
		" O(I) Rh -", "O(I) Rh +", " A(II) Rh -",  "A(II) Rh +",  "B(III) Rh -",  "B(III) Rh +", "AB(IV) Rh -", "AB(IV) Rh +",
	};

	const int BLOOD_TYPE_COUNT = 8;
	/////

	/////
	const string TELEP_CODE[]{
	"956","903","863","979","205","682","812"
	};

	const int TELEP_CODE_COUNT = 7;
	/////

	/////
	const int MAX_MONEY = 1000000;
	const int MIN_MONEY = 0;

	const int MAX_MONEY_CREDIT_CARD = 1000000;
	const int MIN_MONEY_CREDIT_CARD = -10000;

	const int MAX_MONEY_DEBIT_CARD = 1000000;
	const int MIN_MONEY_DEBIT_CARD = -10000;


	const int MAX_AGE = 99;
	const int MIN_AGE = 12;

	const long long int MAX_INSURANCE_POLICY = 9999999999;
	long long int MIN_INSURANCE_POLICY = 1000000000;

	const int MAX_SERIES = 999999;
	const int MIN_SERIES = 900009;

	const int MAX_SERIES_ADDITIONAL = 99;
	const int MIN_SERIES_ADDITIONAL = 00;

	const int MAX_NAM_ACCOUNT = 9999999999;
	long long int MIN_NAM_ACCOUNT = 1000000000;

	for (int i = 0; i < size; i++) {
		const int x = rand() % (999 - 100);
		const int z = rand() % (99 - 10);
		const int a = rand() % (99 - 10);
		long long int nam2 = MIN_INSURANCE_POLICY++ + i + rand() % 2 + 1;
		long long int nam1 = MIN_NAM_ACCOUNT++ + i + rand() % 2 + i;
		this->name = NAME[rand() % NAME_COUNT];
		this->surname = SURNAME[rand() % SURNAME_COUNT];
		this->alphabet = ALPHABET[rand() % ALPHABET_COUNT];
		this->age = rand() % (MAX_AGE - MIN_AGE - 1) + MIN_AGE;
		this->policy = nam1;
		this->series = rand() % (MAX_SERIES - MIN_SERIES - 1) + MIN_SERIES;
		this->additionalseries = rand() % (MAX_SERIES_ADDITIONAL - MIN_SERIES_ADDITIONAL - 1) + MIN_SERIES_ADDITIONAL;
		this->namberAccount = nam2;
		this->bloodType = BLOOD_TYPE[rand() % BLOOD_TYPE_COUNT];
		this->telephone = "+1(" + TELEP_CODE[rand() % TELEP_CODE_COUNT] + ')' + to_string(x) + '-' + to_string(z) + '-' + to_string(a);

		//		if (privacy >= 4) {
		this->money = rand() % (MAX_MONEY - MIN_MONEY - 1) + MIN_MONEY;
		this->creditCard = rand() % (MAX_MONEY_CREDIT_CARD - MIN_MONEY_CREDIT_CARD) / 1.5 + (MAX_MONEY_CREDIT_CARD / 4.2);
		this->debitCard = rand() % (MAX_MONEY_DEBIT_CARD - MIN_MONEY_DEBIT_CARD) / 1.5 + (MAX_MONEY_DEBIT_CARD / 3.4);
		//		}
		//		return name + surname + alphabet + to_string(age) + telephone + to_string(namberAccount) + to_string(money) + to_string(creditCard) + to_string(debitCard) + bloodType + to_string(policy) + to_string(series) + to_string(additionalseries);
	}
}
///////////////////////////////////////
string Field() {
	return char(219) + char(221) + "		" + '|';
}
//
///////////////////////////////////////////////////////
// Информация о человеке(Вывод)
string People::getInfo() {
	if (privacy < 4) {
		//	if (5 < 4) {
		return "		|" + name + ' ' + '|' + surname + ' ' + '|' + alphabet + ';' + "\n"
			+ char(219) + char(221) + "		" + '|' + " Age = " + to_string(age) + ';'
			+ ' ' + '|' + telephone + "\n" + char(219) + char(221) + "		" + '|' + "Bank account " + char(252) + ' ' + to_string(namberAccount)
			+ " - " + "(In connection with the U.S.Attorney's ruling: 10.22363.2313-2337-2017-21-1-9-27 access to view information about bank accounts is limited to level 4.)" + ' ' + ';' + "\n"
			+ char(219) + char(221) + "		" + '|' + " Money for credit card: "
			+ "In connection with the U.S. Attorney's ruling: 10.22363.2313-2337-2017-21-1-9-27 access to view information about bank accounts is limited to level 4." + ';' + "\n"
			+ char(219) + char(221) + "		" + '|' + " Money for debit card: "
			+ "In connection with the U.S. Attorney's ruling: 10.22363.2313-2337-2017-21-1-9-27 access to view information about bank accounts is limited to level 4." + ';' + "\n"
			+ char(219) + char(221) + "		" + '|' + " Blood type: " + bloodType + ';' + "\n"
			+ char(219) + char(221) + "		" + '|' + "Insurance policy: " + to_string(policy) + ", series " + char(252) + ':' + ' ' + to_string(series) + " - " + to_string(additionalseries) + ' ' + "\n" + char(219) + char(221) + "		";
	}

	else if (privacy >= 4) {
		//else if (5 >= 4) {
		return "		|" + name + ' ' + '|' + surname + ' ' + '|' + alphabet + ';' + "\n"
			+ char(219) + char(221) + "		" + '|' + " Age = " + to_string(age) + ';'
			+ ' ' + '|' + telephone + "\n" + char(219) + char(221) + "		" + '|' + "Bank account " + char(252) + ' ' + to_string(namberAccount)
			+ " - " + to_string(money) + '$' + ' ' + ';' + "\n"
			+ char(219) + char(221) + "		" + '|' + " Money for credit card: " + to_string(creditCard) + '$' + ';' + "\n"
			+ char(219) + char(221) + "		" + '|' + " Money for debit card: " + to_string(debitCard) + '$' + ';' + "\n"
			+ char(219) + char(221) + "		" + '|' + " Blood type: " + bloodType + ';' + "\n"
			+ char(219) + char(221) + "		" + '|' + "Insurance policy: " + to_string(policy) + ", series " + char(252) + ':' + ' ' + to_string(series) + " - " + to_string(additionalseries) + ' ' + "\n" + char(219) + char(221) + "		";
	}
}
//	"; alive = " + (alive ? "yes" : "no");
///////////////////////////////////////////////////////


void namesearch(People *arr, int i) {
	//TestPersons[size];
	cout << char(219) << char(221) << "		" << '|' << arr[i].getName() << " " << '|' << arr[i].getSurname() << " " << '|' << arr[i].getAlphabet() << ';' << endl;
	cout << char(219) << char(221) << "		" << '|' << " age = " << arr[i].getAge() << ';';
	cout << " |bank account " << char(252) << ' ' << arr[i].getNamberAccount() << " - " << arr[i].getMoney() << '$' << ' ' << ';' << endl;
	cout << char(219) << char(221) << "		" << '|' << "insurance policy: "
		<< arr[i].getPolicy() << ", series " << char(252) << ':' << ' ' << arr[i].getSeries() << " - " << arr[i].getAdditionalseries() << '|' << ' ' << endl;
	for (int i = 0; i < 98; i++) {
		cout << char(219);
	}
	cout << endl;
}


///

int namberaccount(People* arr, int size, int imputnamberaccount) {
	int index = 0;
	int i = 1;
	for (i; i < size; i++)
	{
		if (arr[i].getNamberAccount() == imputnamberaccount) {
			index = i;
			return index;
		}
	}
	if (arr[i].getNamberAccount() != imputnamberaccount) {
		cout << char(219) << char(221) << "		" << "this person was not found in the database!" << endl;
		return 0;
	}
}

int namberinsurancepolicy(People* arr, int size, int imputnamberinsurancepolicy) {
	int index = 0;
	int i = 1;
	for (i; i < size; i++)
	{
		if (arr[i].getPolicy() == imputnamberinsurancepolicy) {
			index = i;
			return index;
		}
	}
	if (arr[i].getPolicy() != imputnamberinsurancepolicy) {
		cout << char(219) << char(221) << "		" << "this person was not found in the database!" << endl;
		return 0;
	}
}

int searchtelephone(People* arr, int size, string telephone) {

	int index = 0;
	for (int i = 1; i < size; i++) {
		if (arr[i].getTelephone() == telephone) {
			index = i;
			return index;
		}
	}
}

int telephoneimput(People arr, int size) {
	string imputnambertelephonenamber = 0;
	cout << char(219) << char(221) << "		" << "imput search telephone namber: ";
	// +1(956)366 - 16 - 27
	cin >> imputnambertelephonenamber;
	cout << char(219) << char(221) << endl;
	cout << char(219) << char(221) << "		" << "name: " << endl;
	int q = searchtelephone(arr, size, imputnambertelephonenamber);

	namesearch(arr, q);
	return 0;
}


int policyimput(People arr, int size) {
	int imputnamberinsurancepolicy = 0;
	cout << char(219) << char(221) << "		" << "imput search insurance policy: ";
	cin >> imputnamberinsurancepolicy;
	cout << char(219) << char(221) << endl;
	cout << char(219) << char(221) << "		" << "name: " << endl;
	int q = namberinsurancepolicy(arr, size, imputnamberinsurancepolicy);

	namesearch(arr, q);
	return 0;
}

int bankimput(People arr, int size) {
	int imputnamberaccount = 0;
	cout << char(219) << char(221) << "		" << "imput search bank account: ";
	cin >> imputnamberaccount;
	cout << char(219) << char(221) << endl;
	cout << char(219) << char(221) << "		" << "name: " << endl;
	int i = namberaccount(arr, size, imputnamberaccount);

	namesearch(arr, i);
	return 0;

}


int searchname(People* arr, int size, string surname) {

	int index = 0;
	for (int i = 1; i < size; i++) {
		if (arr[i].getSurname() == surname) {
			index = i;
			return index;
		}
	}
}

int searchsurname(People* arr, int size, string name, string surname) {

	int index = 0;
	for (int i = 1; i < size; i++)
	{
		if (arr[i].getName() == name && arr[i].getSurname() == surname) {
			index = i;
			return index;
		}

	}
}

int searchpatronymic(People* arr, int size, string name, string surname, string patronymic) {

	int index = 0;
	for (int i = 1; i < size; i++)
	{
		if (arr[i].getName() == name && arr[i].getSurname() == surname && arr[i].getAlphabet() == patronymic) {
			index = i;
				return index;
		}

	}
}


int nameimput(People arr, int size) {
	string namewrite;
		string surnamewrite;
	string patronymicwrite;
	cout << char(219) << char(221) << "		" << "search by - " << "[ surname ]| or |[ name ] and [ surname ]| or |[ name ] and [ surname ] and [ patronymic ]|. ..." << endl;
	cout << char(219) << char(221) << "		" << "search by:  " << "[ firstname ]| or |       [ surname ]      | or |             [ patronymic ]                |     " << endl;
	cout << char(219) << char(221) << "		" << "imput search name: ";
	cin >> namewrite;
	if (namewrite == "firstname") {
		cout << char(219) << char(221) << "		" << "sample name - " << "name: ";
		cin >> namewrite;
		cout << char(219) << char(221) << endl;
		cout << char(219) << char(221) << "		" << "name: " << endl;
		int w = searchname(arr, size, namewrite);
		namesearch(arr, w);
	}
	else if (namewrite == "surname") {
		cout << char(219) << char(221) << "		" << "sample name - " << "name: ";
		cin >> namewrite;
		cout << char(219) << char(221) << "		" << "sample name - " << "surname: ";
		cin >> surnamewrite;
		cout << char(219) << char(221) << endl;
		cout << char(219) << char(221) << "		" << "name: " << endl;
		int w = searchsurname(arr, size, namewrite, surnamewrite);
		namesearch(arr, w);
	}
	else if (namewrite == "patronymic") {
		cout << char(219) << char(221) << "		" << "sample name - " << "name: ";
		cin >> namewrite;
		cout << char(219) << char(221) << "		" << "sample name - " << "surname: ";
		cin >> surnamewrite;
		cout << char(219) << char(221) << "		" << "sample name - " << "patronymic: ";
		cin >> patronymicwrite;
		cout << char(219) << char(221) << endl;
		cout << char(219) << char(221) << "		" << "name: " << endl;
		int w = searchpatronymic(arr, size, namewrite, surnamewrite, patronymicwrite);
		namesearch(arr, w);
	}

	return 0;
}