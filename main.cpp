//#include <iostream>
#include "employee.h"
#include "map_template.h"

using namespace std;

int main()
{
	map_template<unsigned int, Employee> BazaDanych;
	/*Employee emp("Tomasz", "Ktos", 25);
	BazaDanych.Add(2,emp);*/
	BazaDanych.Add(3,Employee("Tomasz", "Ktos", 255));
	BazaDanych.Add(44,Employee("Tomasssz", "Ktos", 255));
//*/
	return 0;
}
