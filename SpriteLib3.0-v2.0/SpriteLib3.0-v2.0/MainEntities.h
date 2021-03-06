#ifndef __MAINENTITIES_H__
#define __MAINENTITIES_H__
#include "Vector.h"

class MainEntities
{
public:
	//Getters
	static int MainCamera();
	static int MainPlayer();
	
	static std::vector<bool> Powerups();

	//Setters
	static void MainCamera(int main);
	static void MainPlayer(int main);
	
	static void Powerups(std::vector<bool> p);

private:
	static int m_mainCamera;
	static int m_mainPlayer;
	
	static std::vector<bool> powerups;
};

#endif // !__MAINENTITIES_H__
