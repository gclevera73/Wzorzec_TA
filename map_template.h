#include "employee.h"

using namespace std;

template <typename ID, class TYP>
class map_template
{
public:
	map_template(map_template &inny) //konstruktor kopiujący
	{
		pierwszy_elem = inny.pierwszy_elem;
		if(pierwszy_elem != nullptr)
		pierwszy_elem->ref++;
	}	
	struct Lista
	{
		Lista()
		{
			next = nullptr;
			ref = 0;
		}
		Lista* next;
		ID identyfikator;
		TYP obiekt;
		unsigned int ref;
	};
	
	Lista* pierwszy_elem;

	map_template()
	{
		pierwszy_elem = nullptr;
	}

	~map_template()
	{
		if(pierwszy_elem != nullptr)
		{
			if(pierwszy_elem->ref != 0)
			{
				pierwszy_elem->ref--;
				return;
			}
			Lista* tmp = pierwszy_elem;
			while(tmp->next != nullptr)
			{
				Lista* tmp2 = tmp;
				tmp = tmp->next;
				delete tmp2;
			}
			delete tmp;
		}
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
	
	TYP* Find(ID identyfikator2)
	{
		Lista* tmp = pierwszy_elem;
		if(tmp == nullptr)
		{
			return nullptr;
		} 
		
		while(tmp->identyfikator != identyfikator2 && tmp->next != nullptr)
		{
			tmp = tmp->next;
		}
		
		if(tmp->identyfikator == identyfikator2)
		{
			return &tmp->obiekt;
		}
		return nullptr;
	}
	

	friend std::ostream& operator<< (std::ostream & o, const map_template & e)
	{
		if(e.pierwszy_elem != nullptr)
		{
			Lista* tmp = e.pierwszy_elem;
			o << tmp->identyfikator << " " << tmp->obiekt << endl;
			while(tmp->next != nullptr)
			{
				tmp = tmp->next;
				o << tmp->identyfikator << " " << tmp->obiekt << endl;
			}
		}
		return o;
	};

	
	

};

