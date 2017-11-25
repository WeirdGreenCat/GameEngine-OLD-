#include "includer.hpp"

class ControlLoad
{
	public:
	ControlLoad(string path)
	{
		string s;
		ifstream file;
		file.open(path);
		while(file)
		s = file.get();
	};

	private:
	enum key {up, rigth,down,left,jump};

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

 class Player abstract
{
	public:
	Player(float x,float y, float z, string path) : x(x),y(y),z(z) {};
	
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
		//if (Keyboard )
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
	
	//Inventory *inventory = new Inventory; // тут ошибка я хз че 
	double x, y, z; // положение персонажа
	double dx=0.0, dy=0.0, dz=0.0; // смещение персонажа
	float w, h, d; //Размер персонажа  ; width, height, depth ; ширина высота глубина
	float speed;
	int hp, mana;
	
	char *name; 
	bool onGround = false; 
	bool onStairs = false;
	bool onFigth = false;
	
};