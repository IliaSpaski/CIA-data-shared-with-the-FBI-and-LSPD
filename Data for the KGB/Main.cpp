#include "Database_with_data.h"


int main() {

	StartScreenOutput();
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
	double creditCard = 0; //Кредитная карта
	double debitCard = 0; //Дебетовые карты
	string telephone;
	string bloodType; //Группа крови
	*/

	Group group1("10b");
	People s1("Name", "surname", "alphabet", 14, 1234, 124313431, 1231345, 131, 31253215123, 1421, 1424, 1243411213, 1);


	cout << "s1.getInfo(): " << s1.getInfo() << endl;

	//Student s2("Ilya", 15, 4, 'm', false);
	//Student s3("Anna", 15, 8, 'f', true);
	//Student s4("Diana", 15, 10, 'f', true);
	//Student s5("Alexeya", 15, 6, 'f', false);
	//Student s6("Igor", 15, 9, 'm', true);	
	//Student s7("Peter", 14, 7, 'm', true);

	//cout << "Count of students right now: " << s1.getCount() << endl;
	//cout << "Count of students right now: " << s2.getCount() << endl;
	//cout << "Count of students right now: " << s3.getCount() << endl;

	/*group1.add(s1);
	group1.add(s2);
	group1.add(s3);
	group1.add(s4);
	group2.add(s5);
	group2.add(s6);
	group2.add(s7);
	cout << group1.getInfo() << "\n\n";
	cout << group2.getInfo() << endl;
	for (int i = 0; i < group1.getSize(); i++)
	{
		cout << group1.get(i).getInfo() << endl;
	}*/

	return 0;

	//
	return 0;
}
