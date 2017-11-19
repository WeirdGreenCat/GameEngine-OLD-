#include "includer.hpp"

class WorksWithFile
{
	public:
	WorksWithFile(string path)
	{
		ifstream file(path);
		while (getline(file, s)){}
		file.close(); 
	}
	~WorksWithFile()
	{
		//delete[] s; // надо как то освобождать память ХЗ как освободить string
	}
	private:
	string s;	
};