#ifndef ACTOR_H_
#define ACTOR_H_
#include "GraphObject.h"
class TetrisWorld;
enum TETROMINOTYPE
{
	ZBlock = 0,
	LBlock = 1,
	OBlock = 2,
	SBlock = 3,
	IBlock = 4,
	JBlock = 5,
	TBlock = 6,
};
class BaseBlock : public GraphObject
{
public:
	BaseBlock(int imageID = 0, int startX = 0, int startY = 0, Direction dir = down, double size = 0.75, unsigned int depth = 1U);
	void move(int X, int Y);
private:
};
class SetBlock : public BaseBlock
	{
	public:
		SetBlock(int startX = 0, int startY = 0);
	private:
};

class ActiveBlock : public BaseBlock
{
public:
	ActiveBlock(int startX = 0, int startY = 0);
private:
};

class Tetromino //Should this be split? 
{
public:
	std::shared_ptr<BaseBlock> blocks[4];
	Tetromino(TETROMINOTYPE typ,int x, int y, TetrisWorld *inst);
	void move(GraphObject::Direction dir);
private:
	TetrisWorld *world;
	int originX;
	int originY;
	TETROMINOTYPE type;
	bool construct();
};


#endif // ACTOR_H_
