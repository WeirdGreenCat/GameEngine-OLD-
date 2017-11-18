#include "includer.hpp"
class PhisicsMap
{

	public:
	PhisicsMap()
	{
	
	
	};

	~PhisicsMap()
	{
		delete[] mass;
	}
	private:

	bool mass[1000][1000][1000];

};

