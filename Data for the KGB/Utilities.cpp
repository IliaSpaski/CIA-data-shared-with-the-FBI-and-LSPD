#include "Header.h"

int password = randomOfPassword();


void showAllStudents(Student* arr, int size) {
	for (int i = 0; i < size; i++) {
		cout << char(219) << char(221) << "	 			" << '|' << arr[i].name << arr[i].surname << ';';
		cout << " Age = " << arr[i].age << ';';
		cout << " |Bank account " << char (252) << ' ' << arr[i].namberAccount << " - " << arr[i].money << '$' << ' ' << ';';
		cout << " |Insurance policy: " << arr[i].policy << ", series " << char(252) << ':' << ' ' << arr[i].series << " - " << arr[i].additionalseries << '|' << ' ';
		cout << endl;
	}
}

int randomOfPassword() {
	srand(time(NULL));
	int i = (rand() % 99999999 + 10000000);
	int q = (rand() % 99999999 + 10555000);
	int w = (rand() % 99999999 + 10005000);
	int e = (rand() % 99999999 + 1700600);
	int r = (rand() % 99999999 + 10080000);
	int passwordone = i + q + w + e + r;
	return passwordone;
}

void initStudents(Student* arr, int size) {
	//////
	srand(time(NULL));

	//////
	const string NAME[]{
		"Aleksey", "Anatoli ", "Andrey	", "Anton	", "Arkady	", "Artem	", "Aleksan ", "Artur	", "Boris	", "Vadim	",
		"Valenti", "Vasily	", "Vitaly	", "Vladimi ", "Vladisl ", "Georgy  ", "Gleb	", "Grigory ", "Daniil	", "Denis	",
		"Valeriy", "Viktor	", "Ivan	", "Igor	", "Ilya	", "Innoken ", "Dmitry	", "Zakhar	", "Yevgeny ", "Yegor	",
		"Kirill ", "Konstan ", "Lev 	", "Leonid	", "Maksim	", "Matvey	", "Mikhail ", "Moisey	", "Nikita	", "Nikolay ",
		"Oleg	", "Pavel	", "Pyotr	", "Roman	", "Ruslan	", "Svyatos ", "Semyon	", "Sergey	", "Stanisl ", "Stepan	",
		"Timofey", "Timur	", "Fedor	", "Filipp	", "Eduard	", "Yuri	", "Yakov	", "Yan 	", "Yarosla ", "Alisa	",
		"Alina	", "Alla	", "Albina	", "Anastas ", "Angelin ", "Angela	", "Anna	", "Antonin ", "Valenti ", "Valeria ",
		"Vera	", "Victori ", "Galina	", "Darina	", "Darya	", "Diana	", "Dina	", "Elena	", "Zoya	", "Irina	",
		"Inna	", "Karina	", "Kira	", "Klara	", "Larisa	", "Lidia	", "Lilia	", "Lia 	", "Maria	", "Nina	",
		"Oxana	", "Olga	", "Polina	", "Raisa	", "Rosa	", "Tamara	", "Elina	", "Yulia	", "Yana	"
		
//		"		", "		", "		", "		", "		", "		", "		", "		", "		", "		",
	};


	const int NAME_COUNT = 99;
	//////

	//////
	const string SURNAME[]{
		"|Abramson	", "|Barnes  	", "|Bawerman	", "|Becker  	", "|Chesterton	", "|Conors  	", "|Cook		", "|Cramer  	", "|Creighton	", "|Croftoon	",
		"|Adamson	", "|Barrington	", "|Benson  	", "|Brickman	", "|Chapman 	", "|Crossman	", "|Daniels 	", "|Davidson	", "|Day 		", "|Dean		",
		"|Adderiy	", "|Birch   	", "|Bradshaw	", "|Brooks  	", "|Charlson	", "|Dodson  	", "|Derrick 	", "|Dickinson	", "|Donovan 	", "|Douglas 	",
		"|Addington	", "|Bishop  	", "|Bush		", "|Brown   	", "|Clapton 	", "|Eddington	", "|Dyson   	", "|Duncan  	", "|Dutton  	", "|Dowman  	",
		"|Adrian 	", "|Black   	", "|Calhoun 	", "|Campbell	", "|Clifford	", "|Edwards 	", "|Elmers  	", "|Enderson	", "|Erickson	", "|Evans   	",
		"|Albertson	", "|Blare   	", "|Carey   	", "|Carroll 	", "|Chandter	", "|Fane		", "|Farmer  	", "|Farrell 	", "|Ferguson	", "|Finch   	",
		"|Babcock	", "|Blomfield	", "|Coleman 	", "|Carter  	", "|Fisher  	", "|Fleming 	", "|Ford		", "|Forman  	", "|Forster 	", "|Foster  	",
		"|Archibald	", "|Boolman 	", "|Faber   	", "|Gill		", "|Garrison	", "|Gate		", "|Gardner 	", "|Freeman 	", "|Fulton  	", "|Galbraith	",
		"|Arthurs	", "|Bradberry	", "|Goodman 	", "|Hardman 	", "|Holmes  	", "|Jenkin  	", "|Kendal  	", "|Kirk		", "|Lawman  	", "|Little  	",
		"|Alsopp	", "|Gilson  	", "|Hailey  	", "|Harrison	", "|Howard  	", "|Johnson 	", "|Kennedy 	", "|Laird   	", "|Leapman 	", "|Livingston	",
		"|Backer 	", "|Gimson  	", "|Hamphrey	", "|Hawkins 	", "|James   	", "|Keat		", "|Kennett 	", "|Lamberts	", "|Leman   	", "|Longman 	",
		"|Baldwin	", "|Goldman 	", "|Hancock 	", "|Higgins 	", "|Jeff		", "|Kelly   	", "|Kingsman	", "|Larkins 	", "|Lewin   	", "|MacAdam 	",
		"|Mackenzie	", "|Mansfield	", "|Marlow  	", "|Marshman	", "|Mason   	", "|Mathews 	", "|Mercer  	", "|Michaelson	", "|Miers   	", "|Miller  	",
		"|Miln		", "|Milton  	", "|Nevill  	", "|Oakman  	", "|Ogden   	", "|Page		", "|Parson  	", "|Pass		", "|Porter  	", "|Ramacey 	",
		"|Reynolds	", "|Salomon 	", "|Samuels 	", "|Walter  	", "|Spaski 	", "|Shackley	", "|Taylor  	", "|Walkman 	", "|Walter  	", "|Youmans 	",
		

	};

	const int SURNAME_COUNT = 150;
	//////
	
	//////
	const string ALPHABET = "QWERTYUIOPASDFGHJKLZXCVBNM";

	const int ALPHABET_COUNT = 26;
	//////
	
	const int MAX_MONEY = 100000;
	const int MIN_MONEY = 0;

	const int MAX_AGE = 99;
	const int MIN_AGE = 12;

//	const int MAX_MARK = 10;
//	const int MIN_MARK = 0;

	const int MAX_INSURANCE_POLICY = 9999999999;
	long long int MIN_INSURANCE_POLICY = 1000000000;

	const int MAX_SERIES = 999999;
	const int MIN_SERIES = 900009;

	const int MAX_SERIES_ADDITIONAL = 99;
	const int MIN_SERIES_ADDITIONAL = 00;

	const int MAX_NAM_ACCOUNT = 9999999999;
	long long int MIN_NAM_ACCOUNT = 1000000000;


	for (int i = 0; i < size; i++) {
		long long int nam1 = MIN_INSURANCE_POLICY++ + i + rand() % 2 + 1;
		long long int nam2 = MIN_NAM_ACCOUNT++ + i + rand() % 2 + 1;
		arr[i].name = NAME[rand() % NAME_COUNT];
		arr[i].surname = ' ' + SURNAME[rand() % SURNAME_COUNT] + '|' + ALPHABET[rand() % ALPHABET_COUNT] + '.';
		arr[i].age = rand() % (MAX_AGE - MIN_AGE - 1) + MIN_AGE;
		//arr[i].mark = rand() % (MAX_MARK - MIN_MARK - 1) + MIN_MARK;
		arr[i].money = rand() % (MAX_MONEY - MIN_MONEY - 1) + MIN_MONEY;
		arr[i].policy = nam1;
		arr[i].series = rand() % (MAX_SERIES - MIN_SERIES - 1) + MIN_SERIES;
		arr[i].additionalseries = rand() % (MAX_SERIES_ADDITIONAL - MIN_SERIES_ADDITIONAL - 1) + MIN_SERIES_ADDITIONAL;
		arr[i].namberAccount = nam2;
	}
	//////
}


void showAllFields() {

	// static int password = randomOfPassword();
	int passwordWrite = 0;
	int privacy = 0;

	for (int i = 0; i < 98; i++) {
		cout << char(219); 
	}
	//////
	cout << endl  << char(219) << char(221) << "	 			" << "You password: " << password << " end privacy level: " << '3' << endl;
	for (int i = 0; i < 9; i++) {
		cout << char(219) << char(221) << endl;
	}
	//////


	cout << char(219) << char(221) << "				" << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << "		" << char(203) << "           " << char(201) << char(205) << char(203) << char(205) << char(205) << char(205) << char(205)  << char(187) << "				" << char(219) << char(221) << endl;
	//////
	for (int i = 0; i < 2; i++) {	
	cout << char(219) << char(221) << "				" << char(186) << ' '		<< ' '		 << ' '		  << ' ' << ' ' << "		"              << char(186) << "           " << char(186) << ' ' << char(186) << ' ' << ' ' << ' ' << ' ' << ' ' << char(186) <<  "				" << char(219) << char(221) << endl;
	}
	//////  
	cout << char(219) << char(221) << "				" << char(204) << char(205) << char(205) << char(205) << char(205) << char(205) << "		" << char(186) << "           " << char(186) << ' ' << char(204) << char(205) << char(205) << char(205) << char(205)  << char(188) << "				" << char(219) << char(221) << endl;
	cout << char(219) << char(221) << "				" << char(186) << ' '			<< ' '		<< ' ' << ' ' << ' ' << "		"				<< char(186) << "           " << char(186) << ' ' << char(204) << char(205) << char(205) << char(205) << char(205)  << char(187) << "				" << char(219) << char(221) << endl;
	//////
	for (int i = 0; i < 2; i++) {	
	cout << char(219) << char(221) << "				" << char(186) << ' '		<< ' '		<< ' '		  << ' ' << ' ' << "		"				<< char(186) << "           " << char(186) << ' ' << char(186) << ' ' << ' ' << ' ' << ' ' << ' ' << char(186) << "				" << char(219) << char(221) <<  endl; //<< char(219) << char(221) << "				"
	}
	//////
	cout << char(219) << char(221) << "	 			" << char(202) << ' '		<< ' '		 << ' '		  << ' ' << ' ' << "		"			<< char(202) << "           " << char(200) << char(205) << char(202) << char(205) << char(205) << char(205) << char(205)  << char(188) << "				" << char(219) << char(221) << endl;
	cout << char(219) << char(221) << "	 			" << "	 			" << "	 			" << char(219) << char(221) << endl;
	cout << char(219) << char(221) << "	 			" << "Federal	 Bureau	   of  	Investigation" << "	 			" << char(219) << char(221) << endl;
	cout << char(219) << char(221) << "	 			" << "	 			" << "	 			" << char(219) << char(221) << endl;
	cout << char(219) << char(221) << "	 			" << "Please enter your passcode and privacy level :" << "			" << char(219) << char(221) << endl;
	//////

	do {
		cout << char(219) << char(221) << "	 			" << "Imput password: ";
		cin >> passwordWrite;
		cout << char(219) << char(221) << "	 			" << "Imput privacy level: ";
		cin >> privacy;

	} while (passwordWrite != password);

	//////
	for (int i = 0; i < 10; i++) {
		cout << char(219) << char(221) << endl; 
	}
	//////
	for (int i = 0; i < 98; i++) {
		cout << char(219); 
	}

	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;

}

void showTask() {
	Sleep(1000);
	for (int i = 0; i < 169; i++) {
		cout << char(219);
	}
	cout << endl;
}

int nameSearch(Student* arr, int i) {
	cout << '|' << arr[i].name << arr[i].surname << ';';
	cout << " Age = " << arr[i].age << ';';
	//cout << ", mark: " << arr[i].mark << ' ';
	cout << " |Bank account " << char(252) << ' ' << arr[i].namberAccount << " - " << arr[i].money << '$' << ' ' << ';';
	cout << " |Insurance policy: " << arr[i].policy << ", series " << char(252) << ':' << ' ' << arr[i].series << " - " << arr[i].additionalseries << '|' << ' ';
	cout << endl << char(219) << char(221) << endl;
	return 0; 
}

/// 

int searchName (Student* arr, int size, string name) {

	int index = 0;
	for (int i = 1; i < size; i++)
	{
		if (arr[i].name == name) {
			index = i;
			return index;
		}
		/*
		else {
			cout << char(219) << char(221) << "	 			" << "This person was not found in the database!" << endl;
			return 0;
		}
		*/
	}
}

int namberAccount(Student* arr, int size, int imputNamberAccount) {
	int index = 0;
	int i = 1;
	for (i; i < size; i++)
	{
		if (arr[i].namberAccount == imputNamberAccount) {
			index = i;
			return index;
		}
	}
	if (arr[i].namberAccount != imputNamberAccount) {
	cout << char(219) << char(221) << "	 			" << "This person was not found in the database!" << endl;
	return 0;
		}
}

int namberInsurancePolicy(Student* arr, int size, int imputNamberInsurancePolicy) {
	int index = 0;
	int i = 1;
	for (i; i < size; i++)
	{
		if (arr[i].policy == imputNamberInsurancePolicy) {
			index = i;
			return index;
		}
	}
	if (arr[i].policy != imputNamberInsurancePolicy) {
	cout << char(219) << char(221) << "	 			" << "This person was not found in the database!" << endl;
	return 0;
		}
}


	int policyImput(Student * arr, int size) {
		int imputNamberInsurancePolicy = 0;
		cout << char(219) << char(221) << "	 			" << "Imput search insurance policy: ";
		cin >> imputNamberInsurancePolicy;
		cout << char(219) << char(221) << endl;
		cout << char(219) << char(221) << "	 			" << "Name: ";
		int q = namberInsurancePolicy(arr, size, imputNamberInsurancePolicy);

		nameSearch(arr, q);
		return 0;
	}

	int bankImput(Student * arr, int size) {
		int imputNamberAccount = 0;
		cout << char(219) << char(221) << "	 			" << "Imput search Bank account: ";
		cin >> imputNamberAccount;
		cout << char(219) << char(221) << endl;
		cout << char(219) << char(221) << "	 			" << "Name: ";
		int i = namberAccount(arr, size, imputNamberAccount);

		nameSearch(arr, i);
		return 0;

	}

	int nameImput(Student * arr, int size) {
		string nameWrite;
		cout << char(219) << char(221) << "	 			" << "Sample name:		 " << "Name	|Supername  |Patronymic. ..." << endl;
		cout << char(219) << char(221) << "	 			" << "Imput search name: ";
		cin >> nameWrite;
		cout << char(219) << char(221) << endl;
		cout << char(219) << char(221) << "	 			" << "Name: ";
		int w = searchName(arr, size, nameWrite);

		nameSearch(arr, w);
		return 0;
	}

