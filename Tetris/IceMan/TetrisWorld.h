#ifndef TETRISWORLD_H_
#define TETRISWORLD_H_

#include "GameWorld.h"
#include "GameConstants.h"
#include "Actor.h"
#include <memory>
#include <string>


class TetrisWorld : public GameWorld
{
public:
	std::shared_ptr<BaseBlock> x;
	TetrisWorld(std::string assetDir)
		: GameWorld(assetDir)
	{
	}

	virtual int init()
	{
		x = std::make_shared<BaseBlock>(IID_BLOCK, 1, 1, GraphObject::Direction::none, 1.0, 0);
		return GWSTATUS_CONTINUE_GAME;
	}

	virtual int move()
	{
		// This code is here merely to allow the game to build, run, and terminate after you hit enter a few times.
		// Notice that the return value GWSTATUS_PLAYER_DIED will cause our framework to end the current level.
		/*decLives();
		return GWSTATUS_PLAYER_DIED;*/

		return GWSTATUS_CONTINUE_GAME;
	}

	virtual void cleanUp()
	{
	}

private:
};

#endif // TETRISWORLD_H_
