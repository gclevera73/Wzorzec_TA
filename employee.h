#ifndef __EMPLOYEE_H__
#define __EMPLOYEE_H__
#include <string>
#include <iostream>

class Employee
{
public:
	std::string nazwa, stanowisko;
	int wiek;

	/* konstruktor */
	Employee ( std::string nazwa2, std::string stanowisko2, int wiek2 )
	{
		nazwa = nazwa2;
		stanowisko = stanowisko2;
		wiek = wiek2;	
	}
};
#endif	/* __EMPLOYEE_H__ */
