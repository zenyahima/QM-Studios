#ifndef __PLAYER_H__
#define __PLAYER_H__

#include "BackEnd.h"

#define TOPDOWN

enum AnimEnums
{
	IDLELEFT,
	IDLERIGHT,
	WALKLEFT,
	WALKRIGHT,

	ATTACKLEFT,
	ATTACKRIGHT,

};

enum AnimTypes
{
	IDLE = 0,
	WALK = 2,
	JUMP = 4,
	FALL = 6,
	DEATH = 8,
	DASH = 10,
	ATTACK = 12,
	WOLF = 14

};

enum AnimDir
{
	LEFT,
	RIGHT,

};

class Player
{
public:
	Player();
	Player(std::string& fileName, std::string& animationJSON, int width, int height, 
		Sprite* sprite, AnimationController* controller, Transform* transform, bool hasPhys = false, PhysicsBody* body = nullptr);

	void InitPlayer(std::string& fileName, std::string& animationJSON, int width, int height, 
		Sprite* sprite, AnimationController* controller, Transform* transform, bool hasPhys = false, PhysicsBody* body = nullptr);

	void ReassignComponents(AnimationController* controller, Sprite* sprite);

	void Update();
	void MovementUpdate();
	void AnimationUpdate();
	//Default animation direction (feel free to change this to suit your game. If you're making a side-scroller, left or right would be better
	AnimDir m_facing = LEFT;
	bool m_dash = false;
	bool m_moving = false;
	bool m_locked = false;
	bool m_attack = false;

	bool m_jump = false;
	bool m_fall = false;

private:
	void SetActiveAnimation(int anim);

	//Basically, any animation OTHER than moving will not have a cancel, and we'll be checking whether or not that animation is done
	
	//Are you currently jumping
	//bool m_jump = false;
	//Have we locked the player from moving during this animation?
	

	
	//A reference to our sprite
	Sprite* m_sprite = nullptr;
	//A reference to our animation controller
	AnimationController* m_animController = nullptr;
	//A reference to our player transform
	Transform* m_transform = nullptr;

	
	//Physics importance
	//A reference to our physics body
	PhysicsBody* m_physBody = nullptr;
	//Does this player have physics?
	bool m_hasPhysics = false;

	
};

#endif // !__PLAYER_H__