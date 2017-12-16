#ifndef __EMPLOYEE_H__
#define __EMPLOYEE_H__
#include <string>
#include <iostream>

class Employee
{
public:
	std::string Name, Position;
	int Age;

	/* konstruktor */
	Employee ()
	{
	}

	Employee ( std::string nazwa2, std::string stanowisko2, int wiek2 )
	{
		Name = nazwa2;
		Position = stanowisko2;
		Age = wiek2;	
	}
};
#endif	/* __EMPLOYEE_H__ */
