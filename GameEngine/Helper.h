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
		//delete[] s; // ���� ��� �� ����������� ������ �� ��� ���������� string
	}
	private:
	string s;	
};