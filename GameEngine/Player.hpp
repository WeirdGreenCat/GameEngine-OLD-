#include <iostream>

 class Player abstract
{
	public:
	Player(float x,float y, float z,int hp) : x(x),y(y),z(z),hp(hp) {};

	virtual void characterSize(float w, float h, float d)
	{
		this->w = w;
		this->h = h;
		this->d = d;
	}
	virtual ~Player() = 0
	{

	};
	private:
	float x, y, z; // ��������� ����� � ������� ��������� ��������
	int hp, mana;
	float w, h, d; //������ ��������� 
};