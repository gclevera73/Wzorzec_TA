#ifndef __BIBLIOTEKA_H__
#define __BIBLIOTEKA_H__
#include <string>
#include <iostream>

class Biblioteka
{
public:
	std::string Autor, Kategoria, Status;
	int l_stron;

	
	Biblioteka ()
	{
	}

	Biblioteka ( std::string Autor2, std::string Kategoria2, std::string Status2, int l_stron2 )
	{
		Autor = Autor2;
		Kategoria = Kategoria2;
		Status=Status2;
		l_stron = l_stron2;	
	}

	friend std::ostream& operator<< (std::ostream & o, const Biblioteka & e)
	{
		o << e.Autor << " " << e.Kategoria <<" " << e.Status << " " << e.l_stron;
		return o;
	};



};


#endif	/* __BIBLIOTEKA_H__ */
