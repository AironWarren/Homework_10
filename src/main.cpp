// Homework_10.cpp: определяет точку входа для приложения.
//

#include "main.h"
#include "function.h"
#include "game.h"

int main()
{
	setlocale(LC_ALL, "ru");
	/*twoPoint k, l(4, 38);
	std::cout << rasst(k, l);
	std::cout << std::endl;

	treePoint m(1,2,3), n(5,4,2);
	std::cout << rasst(m, n);
	std::cout << std::endl;

	twoPoint point[11];
	int arr[10] = {0};

	for (int i = 0; i < 11; i++)
	{
		point[i].setX(std::rand());
		point[i].setY(std::rand());
	}

	for (int i = 0; i < 10; i++)
	{
		arr[i] = rasst(point[i], point[i+1]);
		std::cout << arr[i] << std::endl;
	}*/

	/*Person Pers1;
	std::string name;
	std::cout << "Введите имя персонажа: \n";
	std::cin >> name;
	std::cout << std::endl;
	Pers1.setName(name);
	std::cout << "Персонаж создан!\n";
	Pers1.infoPerson();

	int n = 0;
	std::cout << "Введите колличество персонажей: \n";
	std::cin >> n;
	std::cout << std::endl;

	Person* arrPers = new Person[n];

	for (int i = 0; i < n; i++)
	{
		std::cout << "Введите имя персонажа: \n";
		std::cin >> name;
		std::cout << std::endl;
		arrPers[i].setName(name);
		std::cout << "Персонаж создан!\n";
	}

	for (int i = 0; i < n; i++)
	{
		arrPers[i].infoPerson();
	}
	
	delete[] arrPers;
	*/

	/*Fairy fairy1;

	ForestFairy fairy2;

	fairy1.setName("Floa");
	fairy1.infoPerson();
	
	fairy2.setName("Stella");
	fairy2.infoPerson();

	Person* ptrPers = new Fairy;

	ptrPers->setName("Stiv");
	ptrPers->infoPerson();

	Person* ptrPers2 = new ForestFairy;

	ptrPers2->setName("Nina");
	ptrPers2->infoPerson();


	Fairy* ptrFair = new ForestFairy;

	ptrFair->setName("Test");
	ptrFair->infoPerson();

	Fairy* ptrFair2 = new Fairy;

	ptrFair2->setName("Nix");
	ptrFair2->infoPerson();*/

	Person** ptrPerson = new Person* [10];

	ptrPerson[0] = new ForestFairy;
	ptrPerson[0]->setName("Hz");
	ptrPerson[0]->infoPerson();

	ptrPerson[3] = new StoneManVer2;
	ptrPerson[3]->setName("Igor");
	ptrPerson[3]->infoPerson();

	for (int i = 0; i < 10; i++)
	{
		delete ptrPerson[i];
	}


	delete[] ptrPerson;
	

	return 0;
}
