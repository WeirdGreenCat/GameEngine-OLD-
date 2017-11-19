#include "includer.hpp"

 class Player abstract
{
	public:
	Player(float x,float y, float z) : x(x),y(y),z(z) {};

	void characterSize(float w, float h, float d)
	{
		this->w = w;
		this->h = h;
		this->d = d;
	}
	void charactersName(char *name)
	{
		this->name = name;
	}
	void collision(float dx, float dy,float dz)
	{
		
	}
	void control()
	{

	}
	void update()
	{
		if (onGround)
		{

		}
	}

	virtual ~Player() = 0
	{

	}
	private:
	//Inventory *inventory = new Inventory; // ��� ������ � �� �� 
	double x, y, z; // ��������� ���������
	double dx=0.0, dy=0.0, dz=0.0; // �������� ���������
	float w, h, d; //������ ���������  ; width, height, depth 
	float speed;
	int hp, mana;
	
	char *name; 
	bool onGround = false; 
	bool onStairs = false;
	bool onFigth = false;
	
};

 class Inventory 
 {
	 public:
	 Inventory()
	 {
	 }
	 ~Inventory()
	 {
	 }

	 private:
	

 };
