#include "Management.h"


string randomOfPassword() {
	srand((unsigned int)time(NULL));
	int i = (rand() % 99 + 10);
	int q = (rand() % 99 + 10);
	int w = (rand() % 99 + 10);
	int e = (rand() % 99 + 10);
	int r = (rand() % 99 + 10);
	string password = to_string(i) + to_string(q) + to_string(w) + to_string(e) + to_string(r);
	return password;
}

extern string password;
extern int privacy;

void indent() {
	cout << char(219) << char(221) << "				";
}

void indentOne() {
	for (int i = 0; i < 98; i++) {
		cout << char(219);
	}
	cout << char(219);
}

void StartScreenOutput() {

	// static int password = randomOfPassword();
	string passwordWrite;


	for (int i = 0; i < 97; i++) {
		cout << char(219);
	}
	cout << char(221) << endl;
	//////
	ofstream fout;
	char outfilename[] = "C:/hack/out.txt";
	fout.open(outfilename);
	fout << password << endl;

	fout.close();
	//	cout << endl  << char(219) << char(221) << "	 			" << "You password: " << password << " end privacy level: " << '3' << endl;
	for (int i = 0; i < 9; i++) {
		cout << char(219) << char(221) << "												" << char(219) << char(221) << endl;
	}
	//////


	indent(); cout << char(201) << char(205) << char(205) << char(205) << char(205) << char(205) << "           " << char(201) << char(205) << char(203) << char(205) << char(205) << char(205) << char(205) << char(187) << "		" << char(203) << "			" << char(219) << char(221) << endl;
	//////
	for (int i = 0; i < 2; i++) {
		indent(); cout << char(186) << ' ' << ' ' << ' ' << ' ' << ' ' << "           " << char(186) << ' ' << char(186) << ' ' << ' ' << ' ' << ' ' << ' ' << char(186) << "		" << char(186) << "			" << char(219) << char(221) << endl;
	}
	//////  
	indent(); cout << char(204) << char(205) << char(205) << char(205) << char(205) << char(205) << "           " << char(186) << ' ' << char(204) << char(205) << char(205) << char(205) << char(205) << char(188) << "		" << char(186) << "			" << char(219) << char(221) << endl;
	indent(); cout << char(186) << ' ' << ' ' << ' ' << ' ' << ' ' << "           " << char(186) << ' ' << char(204) << char(205) << char(205) << char(205) << char(205) << char(187) << "		" << char(186) << "			" << char(219) << char(221) << endl;
	//////
	for (int i = 0; i < 2; i++) {
		indent(); cout << char(186) << ' ' << ' ' << ' ' << ' ' << ' ' << "           " << char(186) << ' ' << char(186) << ' ' << ' ' << ' ' << ' ' << ' ' << char(186) << "		" << char(186) << "			" << char(219) << char(221) << endl; //<< char(219) << char(221) << "				"
	}
	//////
	indent(); cout << char(202) << ' ' << ' ' << ' ' << ' ' << ' ' << "           " << char(200) << char(205) << char(202) << char(205) << char(205) << char(205) << char(205) << char(188) << "		" << char(202) << "			" << char(219) << char(221) << endl;
	indent(); cout << "	 			" << "	 			" << char(219) << char(221) << endl;
	indent(); cout << "Federal	 Bureau	   of  	Investigation" << "	 			" << char(219) << char(221) << endl;
	indent(); cout << "	 			" << "	 			" << char(219) << char(221) << endl;
	indent(); cout << "Please enter your passcode and privacy level :" << "			" << char(219) << char(221) << endl;
	//////

	do {
		indent(); cout << "Imput password: ";
		cin >> passwordWrite;
	} while (passwordWrite != password);

	indent(); cout << "Imput privacy level: ";
	cin >> privacy;

	//////
	for (int i = 0; i < 10; i++) {
		cout << char(219) << char(221) << endl;
	}
	//////
	for (int i = 0; i < 98; i++) {
		cout << char(219);
	}
	//////
	for (int i = 0; i < 4; i++) {
		cout << endl;
	}

}