class Weapon {
public:
	virtual void Use()= 0;
};

class Sword : public Weapon{
public:
	virtual void Use(){

	}
};

class Gun : public Weapon{
public:
	virtual void Use(){

	}
};