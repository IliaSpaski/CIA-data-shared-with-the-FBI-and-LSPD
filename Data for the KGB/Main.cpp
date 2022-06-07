#pragma once
#include "Database_with_data.h"
#include "Management.h"

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



	//People TestPerson1("Name", "surname", "alphabet", 01, 0101, 010101010, 0101010, 010, 01010101010, 0101, 0101, "+375292375904", "2");


string password = randomOfPassword();
int privacy = 0;

int main() {


	StartScreenOutput();


	Group Wanted ("Search for persons who committed an offense");


	Group Agents("FBI and Interpol agents");


	Group Civil("Civilians");







	People TestPersons[4];



	People TestPerson1;
	People TestPerson2;
	People TestPerson3;

		

		TestPerson.setPeople(1);
		indentOne();
		cout << endl << TestPerson.getInfo() << endl;
		indentOne();

		TestPerson1.setPeople(2);
		indentOne();
		cout << endl << TestPerson1.getInfo() << endl;
		indentOne();

		TestPerson2.setPeople(3);
		indentOne();
		cout << endl << TestPerson2.getInfo() << endl;
		indentOne();

		TestPerson3.setPeople(4);
		indentOne();
		cout << endl << TestPerson3.getInfo() << endl;
		indentOne();


		Wanted.add(TestPerson);
		indentOne();
		cout << "\n\n" << Wanted.getInfo() << "\n\n";
		indentOne();


		Agents.add(TestPerson1);
		indentOne();
		cout << "\n\n" << Agents.getInfo() << "\n\n";
		indentOne();


		Civil.add(TestPerson2);
		Civil.add(TestPerson3);
		indentOne();
		
		cout << "\n\n" << Civil.getInfo() << "\n\n";
		indentOne();




















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
	system("pause");
	return 0;
}
