#include "includer.hpp"

 class Player abstract
{
	public:
	Player(float x,float y, float z,int hp) : x(x),y(y),z(z),hp(hp) {};

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
	virtual ~Player() = 0
	{

	};
	private:
	Inventory *inventory = new Inventory();
	float x, y, z; // начальна€ точка в которой находитс€ персонаж
	float dx, dy, dz; // ѕеремещение персонажа
	int hp, mana;
	float w, h, d; //–азмер персонажа 
	char *name; 
	bool onGround = false; 
	bool onStairs = false;
	bool onFigth = false;
	
};

 class Inventory 
 {
	 public:
	 Inventory ();
	  ~Inventory ();

	 private:

 };
