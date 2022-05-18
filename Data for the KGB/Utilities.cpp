//#include "Header1.h"
//
//int password = randomOfPassword();
//int privacy = 0;
//
//int randonCardCredit(Student* arr, int i) {
//	if (privacy < 4){
//		cout << char(219) << char(221) << "		" << '|' << " Money for credit card: " << "In connection with the U.S. Attorney's ruling: 10.22363.2313-2337-2017-21-1-9-27 access to view information about bank accounts is limited to level 4." << ';' << endl;
//		return 0;
//	}
//	cout << char(219) << char(221) << "		" << '|' << " Money for credit card: " << arr[i].creditCard << '$' << ';' << endl;
//}
//
//int randonCardDebit(Student* arr, int i) {
//	if (privacy < 4) {
//		cout << char(219) << char(221) << "		" << '|' << " Money for debit card: " << "In connection with the U.S. Attorney's ruling: 10.22363.2313-2337-2017-21-1-9-27 access to view information about bank accounts is limited to level 4." << ';' << endl;
//		return 0;
//	}
//	cout << char(219) << char(221) << "		" << '|' << " Money for debit card: " << arr[i].debitCard << '$' << ';' << endl;
//}
//
//void randonBloodType(Student* arr, int i) {
//	cout << char(219) << char(221) << "		" << '|' << " Blood type: " << arr[i].bloodType << ';' << endl;
//}
//
//const string TELEP_CODE[]{
//	"956","903","863","979","205","682","812"
//};
//
//const int TELEP_CODE_COUNT = 7;
//
//void randonTelephone(Student* arr, int i	) {
//	cout << ' ' << '|' << arr[i].telephone;
//}
//
//void showAllStudents(Student* arr, int size) {
//	for (int i = 0; i < size; i++) {
//		/////////
//		int random = rand() % (3 - 1);
//		int randomOne = rand() % (3 - 1);
//		int randomToo = rand() % (3 - 1);
//		int randomThree = rand() % (3 - 1);
//		/////////
//		cout << char(219) << char(221) << "		" << '|' << arr[i].name << " " << '|' << arr[i].surname << " " << '|' << arr[i].alphabet << ';' << endl;
//		cout << char(219) << char(221) << "		" << '|' << " Age = " << arr[i].age << ';';
//		if (randomThree == 1) {
//			randonTelephone(arr, i);
//		}
//		cout << endl;
//		if (privacy < 4) {
//			cout << char(219) << char(221) << "		" << '|' << " Bank account " << char(252) << ' ' << arr[i].namberAccount << " - " << "In connection with the U.S.Attorney's ruling: 10.22363.2313-2337-2017-21-1-9-27 access to view information about bank accounts is limited to level 4." << ' ' << ';';
//		}
//		if (privacy >= 4) {
//			cout << char(219) << char(221) << "		" << '|' << " Bank account " << char(252) << ' ' << arr[i].namberAccount << " - " << arr[i].money << '$' << ' ' << ';';
//		}
//
//		cout << endl;
//		/////////
//		if (random == 1) {
//			randonCardCredit(arr, i);
//		}
//		if (randomOne == 1) {
//			randonCardDebit(arr, i);
//		}
//		if (randomToo == 1) {
//			randonBloodType(arr, i);
//		}
//		/////////
//		cout << char(219) << char(221) << "		" << '|' << "Insurance policy: " << arr[i].policy << ", series " << char(252) << ':' << ' ' << arr[i].series << " - " << arr[i].additionalseries << ' ' << endl;
//		for (int i = 0; i < 98; i++) {
//			cout << char(219);
//		}
//		cout << endl;
//	}
//}
//
//double creditCard = 0; //Креди́тная ка́рта 4444 0000 0000 1111
//double debitCards = 0; //Дебетовые карты 4444 0000 0000 1111
//string bloodtype; //Гру́ппа кро́ви O(I) Rh−	O(I) Rh +  A(II) Rh− A(II) Rh + B(III) Rh−	B(III) Rh + AB(IV) Rh−	AB(IV) Rh +
//
//int randomOfPassword() {
//	srand(time(NULL));
//	int i = (rand() % 99999999 + 10000000);
//	int q = (rand() % 99999999 + 10555000);
//	int w = (rand() % 99999999 + 10005000);
//	int e = (rand() % 99999999 + 1700600);
//	int r = (rand() % 99999999 + 10080000);
//	int passwordone = i + q + w + e + r;
//	return passwordone;
//}
//
//void initStudents(Student* arr, int size) {
//	//////
//	srand(time(NULL));
//
//	//////
//	/*
//	const string NAME[]{
//		"Aleksey", "Anatoli ", "Andrey	", "Anton	", "Arkady	", "Artem	", "Aleksan ", "Artur	", "Boris	", "Vadim	",
//		"Valenti", "Vasily	", "Vitaly	", "Vladimi ", "Vladisl ", "Georgy  ", "Gleb	", "Grigory ", "Daniil	", "Denis	",
//		"Valeriy", "Viktor	", "Ivan	", "Igor	", "Ilya	", "Innoken ", "Dmitry	", "Zakhar	", "Yevgeny ", "Yegor	",
//		"Kirill ", "Konstan ", "Lev 	", "Leonid	", "Maksim	", "Matvey	", "Mikhail ", "Moisey	", "Nikita	", "Nikolay ",
//		"Oleg	", "Pavel	", "Pyotr	", "Roman	", "Ruslan	", "Svyatos ", "Semyon	", "Sergey	", "Stanisl ", "Stepan	",
//		"Timofey", "Timur	", "Fedor	", "Filipp	", "Eduard	", "Yuri	", "Yakov	", "Yan 	", "Yarosla ", "Alisa	",
//		"Alina	", "Alla	", "Albina	", "Anastas ", "Angelin ", "Angela	", "Anna	", "Antonin ", "Valenti ", "Valeria ",
//		"Vera	", "Victori ", "Galina	", "Darina	", "Darya	", "Diana	", "Dina	", "Elena	", "Zoya	", "Irina	",
//		"Inna	", "Karina	", "Kira	", "Klara	", "Larisa	", "Lidia	", "Lilia	", "Lia 	", "Maria	", "Nina	",
//		"Oxana	", "Olga	", "Polina	", "Raisa	", "Rosa	", "Tamara	", "Elina	", "Yulia	", "Yana	"
//		
////		"		", "		", "		", "		", "		", "		", "		", "		", "		", "		",
//	};
//	*/
//	const string NAME[]{
//			"Aleksey", "Anatoli", "Andrey", "Anton", "Arkady", "Artem", "Aleksan", "Artur", "Boris", "Vadim",
//			"Valenti", "Vasily", "Vitaly", "Vladimi", "Vladisl", "Georgy ", "Gleb", "Grigory", "Daniil", "Denis",
//			"Valeriy", "Viktor", "Ivan", "Igor", "Ilya", "Innoken", "Dmitry", "Zakhar", "Yevgeny", "Yegor",
//			"Kirill", "Konstan", "Lev ", "Leonid", "Maksim", "Matvey", "Mikhail", "Moisey", "Nikita", "Nikolay",
//			"Oleg", "Pavel", "Pyotr", "Roman", "Ruslan", "Svyatos", "Semyon", "Sergey", "Stanisl", "Stepan",
//			"Timofey", "Timur", "Fedor", "Filipp", "Eduard", "Yuri", "Yakov", "Yan ", "Yarosla", "Alisa",
//			"Alina", "Alla", "Albina", "Anastas", "Angelin", "Angela", "Anna", "Antonin", "Valenti", "Valeria",
//			"Vera", "Victori", "Galina", "Darina", "Darya", "Diana", "Dina", "Elena", "Zoya", "Irina",
//			"Inna", "Karina", "Kira", "Klara", "Larisa", "Lidia", "Lilia", "Lia ", "Maria", "Nina",
//			"Oxana", "Olga", "Polina", "Raisa", "Rosa", "Tamara", "Elina", "Yulia", "Yana", "Ilia"
//
//			//		"		", "		", "		", "		", "		", "		", "		", "		", "		", "		",
//	};
//
//
//	const int NAME_COUNT = 100;
//	//////
//
//	//////
//	const string SURNAME[]{
//		"Abramson", "Barnes", "Bawerman", "Becker", "Chesterton", "Conors", "Cook", "Cramer", "Creighton", "Croftoon",
//		"Adamson", "Barrington", "Benson", "Brickman", "Chapman", "Crossman", "Daniels", "Davidson", "Day", "Dean",
//		"Adderiy", "Birch", "Bradshaw", "Brooks", "Charlson", "Dodson", "Derrick", "Dickinson", "Donovan", "Douglas",
//		"Addington", "Bishop", "Bush", "Brown", "Clapton", "Eddington", "Dyson", "Duncan", "Dutton", "Dowman",
//		"Adrian", "Black", "Calhoun", "Campbell", "Clifford", "Edwards", "Elmers", "Enderson", "Erickson", "Evans",
//		"Albertson", "Blare", "Carey", "Carroll", "Chandter", "Fane", "Farmer", "Farrell", "Ferguson", "Finch",
//		"Babcock", "Blomfield", "Coleman", "Carter", "Fisher", "Fleming", "Ford", "Forman", "Forster", "Foster",
//		"Archibald", "Boolman", "Faber", "Gill", "Garrison", "Gate", "Gardner", "Freeman", "Fulton", "Galbraith",
//		"Arthurs", "Bradberry", "Goodman", "Hardman", "Holmes", "Jenkin", "Kendal", "Kirk", "Lawman", "Little",
//		"Alsopp", "Gilson", "Hailey", "Harrison", "Howard", "Johnson", "Kennedy", "Laird", "Leapman", "Livingston",
//		"Backer", "Gimson", "Hamphrey", "Hawkins", "James", "Keat", "Kennett", "Lamberts", "Leman", "Longman",
//		"Baldwin", "Goldman", "Hancock", "Higgins", "Jeff", "Kelly", "Kingsman", "Larkins", "Lewin", "MacAdam",
//		"Mackenzie", "Mansfield", "Marlow", "Marshman", "Mason", "Mathews", "Mercer", "Michaelson", "Miers", "Miller",
//		"Miln", "Milton", "Nevill", "Oakman", "Ogden", "Page", "Parson", "Pass", "Porter", "Ramacey",
//		"Reynolds", "Salomon", "Samuels", "Walter", "Spaski", "Shackley", "Taylor", "Walkman", "Walter", "Youmans",
//		
//	};
//
//	const int SURNAME_COUNT = 150;
//	//////
//	//////
//	const string ALPHABET = "QWERTYUIOPASDFGHJKLZXCVBNM";
//
//	const int ALPHABET_COUNT = 26;
//	//////
//	const string BLOOD_TYPE[]{
//		" O(I) Rh -", "O(I) Rh +", " A(II) Rh -",  "A(II) Rh +",  "B(III) Rh -",  "B(III) Rh +", "AB(IV) Rh -", "AB(IV) Rh +",
//	};
//	//////
//	const int BLOOD_TYPE_COUNT = 8;
//	
//	const int MAX_MONEY = 1000000;
//	const int MIN_MONEY = 0;
//
//	const int MAX_MONEY_CREDIT_CARD = 1000000;
//	const int MIN_MONEY_CREDIT_CARD = -100000;
//
//	const int MAX_MONEY_DEBIT_CARD = 1000000;
//	const int MIN_MONEY_DEBIT_CARD = -100000;
//
//
//	const int MAX_AGE = 99;
//	const int MIN_AGE = 12;
//
////	const int MAX_MARK = 10;
////	const int MIN_MARK = 0;
//
//
//	const long long int MAX_INSURANCE_POLICY = 9999999999;
//	long long int MIN_INSURANCE_POLICY = 1000000000;
//
//	const int MAX_SERIES = 999999;
//	const int MIN_SERIES = 900009;
//
//	const int MAX_SERIES_ADDITIONAL = 99;
//	const int MIN_SERIES_ADDITIONAL = 00;
//
//	const int MAX_NAM_ACCOUNT = 9999999999;
//	long long int MIN_NAM_ACCOUNT = 1000000000;
//	
//
//	for (int i = 0; i < size; i++) {
//		const int x = rand() % (999 - 100);
//	const int z = rand() % (99 - 10);
//	const int a = rand() % (99 - 10);
//		long long int nam2 = MIN_INSURANCE_POLICY++ + i + rand() % 2 + 1;
//		long long int nam1 = MIN_NAM_ACCOUNT++ + i + rand() % 2 + i;
//		arr[i].name = NAME[rand() % NAME_COUNT];
//		arr[i].surname = SURNAME[rand() % SURNAME_COUNT];
//		arr[i].alphabet = ALPHABET[rand() % ALPHABET_COUNT];
//		arr[i].age = rand() % (MAX_AGE - MIN_AGE - 1) + MIN_AGE;
//		//arr[i].mark = rand() % (MAX_MARK - MIN_MARK - 1) + MIN_MARK;
//		arr[i].policy = nam1;
//		arr[i].series = rand() % (MAX_SERIES - MIN_SERIES - 1) + MIN_SERIES;
//		arr[i].additionalseries = rand() % (MAX_SERIES_ADDITIONAL - MIN_SERIES_ADDITIONAL - 1) + MIN_SERIES_ADDITIONAL;
//		arr[i].namberAccount = nam2;
//		arr[i].bloodType = BLOOD_TYPE[rand() % BLOOD_TYPE_COUNT];
//		arr[i].telephone = "+1(" + TELEP_CODE[rand() % TELEP_CODE_COUNT] + ')' + to_string(x) + '-' + to_string(z) + '-' + to_string(a);
//		if (privacy >= 4){
//			arr[i].money = rand() % (MAX_MONEY - MIN_MONEY - 1) + MIN_MONEY;
//			arr[i].creditCard = rand() % (MAX_MONEY_CREDIT_CARD - MIN_MONEY_CREDIT_CARD) / 1.5 + (MAX_MONEY_CREDIT_CARD / 4.2);
//			arr[i].debitCard = rand() % (MAX_MONEY_DEBIT_CARD - MIN_MONEY_DEBIT_CARD) / 1.5 + (MAX_MONEY_DEBIT_CARD / 3.4);
//		}
//
//	}
//	//////
//}
//
//void showAllFields() {
//
//	// static int password = randomOfPassword();
//	int passwordWrite = 0;
//	
//
//	for (int i = 0; i < 98; i++) {
//		cout << char(219); 
//	}
//	//////
//	ofstream fout;
//	char outfilename[] = "C:/hack/out.txt";
//	fout.open(outfilename);
//	fout << password << endl;
//
//	fout.close();
////	cout << endl  << char(219) << char(221) << "	 			" << "You password: " << password << " end privacy level: " << '3' << endl;
//	for (int i = 0; i < 9; i++) {
//		cout << char(219) << char(221) << endl;
//	}
//	//////
//
//
//	cout << char(219) << char(221) << "				" << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << "           " << char(201) << char(205) << char(203) << char(205) << char(205) << char(205) << char(205)  << char(187) << "		" << char(203) << "			" << char(219) << char(221) << endl;
//	//////
//	for (int i = 0; i < 2; i++) {	
//	cout << char(219) << char(221) << "				" << char(186) << ' '		<< ' '		 << ' '		  << ' ' << ' '  << "           " << char(186) << ' ' << char(186) << ' ' << ' ' << ' ' << ' ' << ' ' << char(186) << "		" << char(186) <<  "			" << char(219) << char(221) << endl;
//	}
//	//////  
//	cout << char(219) << char(221) << "				" << char(204) << char(205) << char(205) << char(205) << char(205) << char(205) << "           " << char(186) << ' ' << char(204) << char(205) << char(205) << char(205) << char(205)  << char(188) << "		" << char(186) << "			" << char(219) << char(221) << endl;
//	cout << char(219) << char(221) << "				" << char(186) << ' '			<< ' '		<< ' ' << ' ' << ' ' << "           " << char(186) << ' ' << char(204) << char(205) << char(205) << char(205) << char(205)  << char(187) << "		" << char(186) << "			" << char(219) << char(221) << endl;
//	//////
//	for (int i = 0; i < 2; i++) {	
//	cout << char(219) << char(221) << "				" << char(186) << ' '		<< ' '		<< ' '		  << ' ' << ' '  << "           " << char(186) << ' ' << char(186) << ' ' << ' ' << ' ' << ' ' << ' ' << char(186) << "		" << char(186) << "			" << char(219) << char(221) <<  endl; //<< char(219) << char(221) << "				"
//	}
//	//////
//	cout << char(219) << char(221) << "	 			" << char(202) << ' '		<< ' '		 << ' '		  << ' ' << ' ' << "           " << char(200) << char(205) << char(202) << char(205) << char(205) << char(205) << char(205)  << char(188) << "		" << char(202) << "			" << char(219) << char(221) << endl;
//	cout << char(219) << char(221) << "	 			" << "	 			" << "	 			" << char(219) << char(221) << endl;
//	cout << char(219) << char(221) << "	 			" << "Federal	 Bureau	   of  	Investigation" << "	 			" << char(219) << char(221) << endl;
//	cout << char(219) << char(221) << "	 			" << "	 			" << "	 			" << char(219) << char(221) << endl;
//	cout << char(219) << char(221) << "	 			" << "Please enter your passcode and privacy level :" << "			" << char(219) << char(221) << endl;
//	//////
//
//	do {
//		cout << char(219) << char(221) << "	 			" << "Imput password: ";
//		cin >> passwordWrite;
//	} while (passwordWrite != password);
//
//	cout << char(219) << char(221) << "	 			" << "Imput privacy level: ";
//	cin >> privacy;
//
//	//////
//	for (int i = 0; i < 10; i++) {
//		cout << char(219) << char(221) << endl; 
//	}
//	//////
//	for (int i = 0; i < 98; i++) {
//		cout << char(219); 
//	}
//
//	cout << endl;
//	cout << endl;
//	cout << endl;
//	cout << endl;
//
//}
//
//
//void showTask() {
//	Sleep(1000);
//	for (int i = 0; i < 169; i++) {
//		cout << char(219);
//	}
//	cout << endl;
//}
//
//
//int nameSearch(Student* arr, int i) {
//	cout << char(219) << char(221) << "		" << '|' << arr[i].name << " " << '|' << arr[i].surname << " " << '|' << arr[i].alphabet << ';' << endl;
//	cout << char(219) << char(221) << "		" << '|' << " Age = " << arr[i].age << ';';
//	cout << " |Bank account " << char(252) << ' ' << arr[i].namberAccount << " - " << arr[i].money << '$' << ' ' << ';' << endl;
//	cout << char(219) << char(221) << "		" << '|' << "Insurance policy: " 
//		<< arr[i].policy << ", series " << char(252) << ':' << ' ' << arr[i].series << " - " << arr[i].additionalseries << '|' << ' ' << endl;
//	for (int i = 0; i < 98; i++) {
//		cout << char(219);
//	}
//	cout << endl;
//	return 0;
//}
//
//
///// 
//
//int namberAccount(Student* arr, int size, int imputNamberAccount) {
//	int index = 0;
//	int i = 1;
//	for (i; i < size; i++)
//	{
//		if (arr[i].namberAccount == imputNamberAccount) {
//			index = i;
//			return index;
//		}
//	}
//	if (arr[i].namberAccount != imputNamberAccount) {
//	cout << char(219) << char(221) << "		" << "This person was not found in the database!" << endl;
//	return 0; 
//	}
//}
//
//int namberInsurancePolicy(Student* arr, int size, int imputNamberInsurancePolicy) {
//	int index = 0;
//	int i = 1;
//	for (i; i < size; i++)
//	{
//		if (arr[i].policy == imputNamberInsurancePolicy) {
//			index = i;
//			return index;
//		}
//	}
//	if (arr[i].policy != imputNamberInsurancePolicy) {
//	cout << char(219) << char(221) << "		" << "This person was not found in the database!" << endl;
//	return 0;
//		}
//}
//
//int searchTelephone(Student* arr, int size, string telephone) {
//
//	int index = 0;
//	for (int i = 1; i < size; i++) {
//		if (arr[i].telephone == telephone) {
//			index = i;
//			return index;
//	}
//}
//}
//
//int telephoneImput(Student* arr, int size) {
//	string imputNamberTelephoneNamber = 0;
//	cout << char(219) << char(221) << "		" << "Imput search telephone namber: ";
// // +1(956)366 - 16 - 27
//	cin >> imputNamberTelephoneNamber;
//	cout << char(219) << char(221) << endl;
//	cout << char(219) << char(221) << "		" << "Name: " << endl;
//	int q = searchTelephone(arr, size, imputNamberTelephoneNamber);
//
//	nameSearch(arr, q);
//	return 0;
//}
//
//
//	int policyImput(Student * arr, int size) {
//		int imputNamberInsurancePolicy = 0;
//		cout << char(219) << char(221) << "		" << "Imput search Insurance policy: ";
//		cin >> imputNamberInsurancePolicy;
//		cout << char(219) << char(221) << endl;
//		cout << char(219) << char(221) << "		" << "Name: " << endl;
//		int q = namberInsurancePolicy(arr, size, imputNamberInsurancePolicy);
//
//		nameSearch(arr, q);
//		return 0;
//	}
//
//	int bankImput(Student * arr, int size) {
//		int imputNamberAccount = 0;
//		cout << char(219) << char(221) << "		" << "Imput search Bank account: ";
//		cin >> imputNamberAccount;
//		cout << char(219) << char(221) << endl;
//		cout << char(219) << char(221) << "		" << "Name: " << endl;
//		int i = namberAccount(arr, size, imputNamberAccount);
//
//		nameSearch(arr, i);
//		return 0;
//
//	}
//
//
//	int searchName(Student* arr, int size, string surname) {
//
//		int index = 0;
//			for (int i = 1; i < size; i++) {
//				if (arr[i].surname == surname) {
//					index = i;
//					return index;
//				}
//			}
//	}
//
//	int searchSurname(Student* arr, int size, string name, string surname) {
//
//		int index = 0;
//		for (int i = 1; i < size; i++)
//		{
//			if (arr[i].name == name && arr[i].surname == surname) {
//				index = i;
//				return index;
//			}
//
//		}
//	}
//
//	int searchPatronymic(Student* arr, int size, string name, string surname, string patronymic) {
//
//		int index = 0;
//		for (int i = 1; i < size; i++)
//		{
//			if (arr[i].name == name && arr[i].surname == surname && arr[i].alphabet == patronymic) {
//				index = i;
//				return index;
//			}
//
//		}
//	}
//
//
//	int nameImput(Student * arr, int size) {
//		string nameWrite;
//		string NameWrite;
//		string SurnameWrite;
//		string PatronymicWrite;
//		cout << char(219) << char(221) << "		" << "Search by - " << "[ Surname ]| or |[ Name ] and [ Surname ]| or |[ Name ] and [ Surname ] and [ Patronymic ]|. ..." << endl;
//		cout << char(219) << char(221) << "		" << "Search by:  " << "[ Firstname ]| or |       [ Surname ]      | or |             [ Patronymic ]                |     " << endl;
//		cout << char(219) << char(221) << "		" << "Imput search name: ";
//		cin >> nameWrite;
//		if (nameWrite == "Firstname") {
//			cout << char(219) << char(221) << "		" << "Sample name - " << "Name: ";
//			cin >> NameWrite;
//			cout << char(219) << char(221) << endl;
//			cout << char(219) << char(221) << "		" << "Name: " << endl;
//			int w = searchName(arr, size, NameWrite);
//			nameSearch(arr, w);
//		}
//		else if (nameWrite == "Surname") {
//			cout << char(219) << char(221) << "		" << "Sample name - " << "Name: ";
//			cin >> NameWrite;
//			cout << char(219) << char(221) << "		" << "Sample name - " << "Surname: ";
//			cin >> SurnameWrite;
//			cout << char(219) << char(221) << endl;
//			cout << char(219) << char(221) << "		" << "Name: " << endl;
//			int w = searchSurname(arr, size, NameWrite, SurnameWrite);
//			nameSearch(arr, w);
//		}
//		else if (nameWrite == "Patronymic") {
//			cout << char(219) << char(221) << "		" << "Sample name - " << "Name: ";
//			cin >> NameWrite;
//			cout << char(219) << char(221) << "		" << "Sample name - " << "Surname: ";
//			cin >> SurnameWrite;
//			cout << char(219) << char(221) << "		" << "Sample name - " << "Patronymic: ";
//			cin >> PatronymicWrite;
//			cout << char(219) << char(221) << endl;
//			cout << char(219) << char(221) << "		" << "Name: " << endl;
//			int w = searchPatronymic(arr, size, NameWrite, SurnameWrite, PatronymicWrite);
//			nameSearch(arr, w);
//		}
//		
//		return 0;
//	}
//
