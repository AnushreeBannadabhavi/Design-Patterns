#include "PLayer.h"
#include "Weapon.h"
#include "WeaponFactory.h"

PLayer::PLayer()
{
}


PLayer::~PLayer()
{
	delete m_pWeapon;
}

Weapon* PLayer::UpholsterWeapon(int value)
{
	m_pWeapon = WeaponFactory::Create(value);
}

void PLayer::Attack()
{
	if (m_pWeapon)
		m_pWeapon->Use();
}