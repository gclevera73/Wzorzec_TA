#include "employee.h"
#include <map>
using namespace std;

template <typename ID, class TYP>
class map_template
{
public:
	
	map<ID, TYP> baza;
	
	
	void Add(ID identyfikator, TYP obiekt)
	{
		baza.insert(std::pair<ID, TYP>(identyfikator,obiekt));	
	}	
	
};
