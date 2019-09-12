#include "Weapon.h"
#include <string>

class WeaponFactory{
public :
	static Weapon* Create(int type){
		switch (type){
		case 0: return new Sword;
		case 1: return new Gun;
		}
		return nullptr;
	}
};