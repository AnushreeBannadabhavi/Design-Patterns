#pragma once
class Weapon;

class PLayer
{
	Weapon* m_pWeapon;
public:
	PLayer();
	Weapon* UpholsterWeapon(int value);
	void Attack();
	~PLayer();
};

