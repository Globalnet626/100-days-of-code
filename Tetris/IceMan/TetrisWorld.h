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
	std::shared_ptr<BaseBlock> background[10][20];
	std::shared_ptr<BaseBlock> gameSpace[10][20];
	std::shared_ptr<Tetromino> activePiece;
	
	TetrisWorld(std::string assetDir)
		: GameWorld(assetDir)
	{
	}

	virtual int init()
	{
		populateBackground();
		debug();
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
	static int XYLoc(int x)	// each unit is .25 of the actual x/y distance.
	{
		if (x == 0)
		{
			return 0;
		}
		else
		{
			int temp = x * 3;
			std::cout << temp << std::endl;
			return temp;
		}
	}

private:

	void debug()
	{
		//std::shared_ptr<BaseBlock> testActive = std::make_shared<ActiveBlock>(XYLoc(5), XYLoc(19));
		/*gameSpace[5][19] = testActive;*/
	}
	void updateActive()
	{
		
	}
	bool populateBackground()
	{
		//background[0][0] = std::make_shared<BaseBlock>(IID_BLOCK, XYLoc(0), XYLoc(0));
		//background[1][0] = std::make_shared<BaseBlock>(IID_BLOCK, XYLoc(1), XYLoc(0));
		//background[2][0] = std::make_shared<BaseBlock>(IID_BLOCK, XYLoc(2), XYLoc(0));
		for (size_t i = 0; i < 10; i++)
		{
			for (size_t z = 0; z < 20; z++)
			{
				try
				{

					background[i][z] = std::make_shared<BaseBlock>(IID_BLOCK,XYLoc(i), XYLoc(z));
				}
				catch (const std::exception&)
				{
					return false;
				}
			}
		}
		return true;
	}

};

#endif // TETRISWORLD_H_
