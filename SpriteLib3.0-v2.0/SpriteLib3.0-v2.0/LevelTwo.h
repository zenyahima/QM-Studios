#pragma once

#include "Scene.h"
#include "PhysicsPlaygroundListener.h"
#include "ToneFire/ToneFire.h"
#include <string>
#include <fstream>
class LevelTwo :
	public Scene
{
public:
	LevelTwo(std::string name);

	void InitScene(float windowWidth, float windowHeight) override;

	void Update() override;
	int ChangeScene() override;
	void InitTexture() override;
	//Input overrides
	void KeyboardHold() override;
	void KeyboardDown() override;
	void KeyboardUp() override;

protected:
	bool m_firstWindow = false;
	bool m_secondWindow = false;

	std::string m_fileInput;

	PhysicsPlaygroundListener listener;

	int p_entity;

	float speed = 0;
	float theta = 0;

	//testing purposes
	int facing = 0;

	bool dashcooldown = true;
	double dash_timer;
	clock_t dashtime;
	float cooldown = 1.5f;
	int jspeed = 0;
	double jump_timer;
	clock_t jumptime;
	bool jumphold = false;

	bool jump_high = false;

	int invis1 = 0;
	int invis2 = 1;
	int invis3 = 2;
	int invis4 = 3;
	int invis5 = 4;
	int invis6 = 5;
	int invis7 = 6;
	int invis8 = 7;
	int invis9 = 8;
	int invis10 = 9;
	int invis11 = 10;
	int invis12 = 11;
	int invis13 = 12;

	int selection = -1;
	//tutorial controls
	int  tut1;
	int tut2;
	int tut3;
	ToneFire::FMODCore Fmod{};
	ToneFire::CoreSound Sound{ "tutorial slow.mp3" };
	int healthBar;
	int healthBarBack;
	int ghostBar;
	int ghostBarBack;
	int pcount;
	HealthBar hb;


	std::fstream inputS;

	//track enemies
	std::vector<int>enemies;
	std::vector<bool>alive;

	int rope1;
	bool attached = false;
	b2DistanceJoint* m_joint;
	std::vector<int>swings;
};

