#include "Header.h"

int main() {
	//
	showAllFields();
	//long int size = 10000000;
	long int size = 1000;

	showTask();

	Student* arr = new Student[size];
	//
	
	initStudents(arr, size);
	showAllStudents(arr, size);

	//
	int stop;
	do {
	string searchType;
	showTask();
	cout << char(219) << char(221) << endl;
	cout << char(219) << char(221) << "	 			" << "Sample data: " << "|XXXX	|XXXXXX	|X.; Age = XX; |Bank account" << char(252) << " 100XXXXXXX - XXXXX$ ; |Insurance policy: XXXXXXXXX, series" << char(252) << ": XXXXXX - XX | " << endl;
	cout << char(219) << char(221) << "	 			" << "Search by: " << "| First and last name [ Name ] |; | Bank account [ Bank ] |; | Insurance policy [ Policy ] |. " << endl;
	cout << char(219) << char(221) << "	 			" << "Search type: ";
	cin >> searchType;
	cout << char(219) << char(221) << endl;
	showTask();
	if (searchType == "Name"){
		cout << char(219) << char(221) << endl;
		nameImput(arr, size);
		cout << char(219) << char(221) << endl;
		//return 2;
	}


	else if (searchType == "Bank") {
		cout << char(219) << char(221) << endl;ö
		bankImput(arr, size);
		cout << char(219) << char(221) << endl;
	}


	else if(searchType == "Policy") {
		cout << char(219) << char(221) << endl;
		policyImput(arr, size);
		cout << char(219) << char(221) << endl;
	}


	cout << char(219) << char(221) << "	 			" << "Continue searching? (Yes(1) or No(0)): ";
	cin >> stop;
	cout << char(219) << char(221) << endl;
	while (stop >= 2){
	cout << char(219) << char(221) << "	 			" << "Value is incorrect, try again! Continue searching? (Yes(1) or No(0)): ";
	cin >> stop;
	cout << endl;
	} 
	} while (stop != 0);
	
	//
	delete[] arr;

	system("pause");

	return 0;
}
