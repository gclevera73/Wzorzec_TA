#include "employee.h"

using namespace std;

template <typename ID, class TYP>
class map_template
{
public:
	
	struct Lista
	{
		Lista()
		{
			next = nullptr;
		}
		Lista* next;
		ID identyfikator;
		TYP obiekt;
	};
	
	Lista* pierwszy_elem;

	map_template()
	{
		pierwszy_elem = nullptr;
	}

	~map_template()
	{
	
	}

	
	void Add(ID identyfikator2, TYP obiekt2)
	{
		if(pierwszy_elem == nullptr)		/*nullptr-wskaznik na nic*/	
		{
			pierwszy_elem = new Lista();
			pierwszy_elem->obiekt = obiekt2;
			pierwszy_elem->identyfikator = identyfikator2;
		}
		else
		{
			Lista* tmp = pierwszy_elem;
			while(tmp->next != nullptr)
			{
				tmp = tmp->next;
			}
			
			tmp->next = new Lista();
			tmp->next->obiekt = obiekt2;
			tmp->next->identyfikator = identyfikator2;
			
		}
	}
	
	TYP* Find(ID identyfikator)
	{
		
	}
};
