#include<iostream>
#include <functional>
#include <unordered_set>
#include "employee.h"
#include "map_template.h"

using namespace std;

int main()
{
	map_template<unsigned int, Employee> BazaDanych;
	Employee emp("Tomasz", "Ktos", 25);
	BazaDanych.Add(2,emp);

	return 0;
}
