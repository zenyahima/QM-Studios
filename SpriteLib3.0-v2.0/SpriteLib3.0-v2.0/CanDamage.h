#pragma once
#include "ECS.h"
class CanDamage
{
public:
	void InitBody(PhysicsBody b, AnimationController* a);
	bool m_candamage = true;
	bool m_stun = false;
	bool m_suck = false;
	int hp = 100;
	bool m_canbestun = false;
	bool is_boo = false;
	
	void set_player(int p);
	void Walk();
	void Attack();
	void Jump();
	int facing = 0;
	bool moving = false;
	bool attack = false;
	bool locked = false;
private:
	PhysicsBody body;
	AnimationController* anims;
	int player;
	//int& phealth;
	
};

