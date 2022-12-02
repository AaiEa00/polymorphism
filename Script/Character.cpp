#include "Character.h"

Character::Character():GameObject(Vector2::Zero)
{
	HitPoints = 0;
	MagicPoints = 0;
}

Character::Character(const Vector2& Position, int HP, int MP)
	:GameObject(Position)
{
	HitPoints = HP;
	MagicPoints = MP;
}

int Character::Update()
{
	cout << "Character::Update()" << endl;
	return 0;
}

int Character::Draw()
{
	cout << "Character::Draw()" << endl;
	return 0;
}
