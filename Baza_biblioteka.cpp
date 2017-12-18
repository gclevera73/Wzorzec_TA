#include <iostream>
using namespace std;

#include "biblioteka.h"
#include "map_template.h"
int main(void)
{
	typedef string ID;
	map_template<ID,Biblioteka> Database;

	Database.Add("W pustyni i w puszczy",Biblioteka("Henryk Sienkiewicz","Lektura", "Stan",28));
	Database.Add("Lokomotywa",Biblioteka("Jan Brzechwa","Bajka","Brak",54)); 
	Database.Add("Romeo i Julia",Biblioteka("Wiliam Szekspir", "Tragedia","Stan",205));

	cout << Database << endl;

	map_template<ID,Biblioteka> NewDatabase = Database;
	
	Biblioteka* pE;
	pE = NewDatabase.Find("Romeo i Julia");
	pE->Kategoria = "Lektura";

	pE = NewDatabase.Find("W pustyni i w puszczy");
	pE->Status = "Wypozyczono";

	Database = NewDatabase;	
	
	cout << Database << endl;
}
