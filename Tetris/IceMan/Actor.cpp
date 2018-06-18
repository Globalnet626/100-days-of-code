#include "Actor.h"
#include "TetrisWorld.h"

BaseBlock::BaseBlock(int imageID, int startX, int startY, Direction dir, double size, unsigned int depth) :
	GraphObject(imageID, startX, startY, dir, size, depth) { setVisible(true); }

void BaseBlock::move(int X, int Y)
{
	
}

SetBlock::SetBlock(int startX, int startY) : BaseBlock(IID_SETBLOCK,startX,startY,down,.75,0U)
{

}

ActiveBlock::ActiveBlock(int startX, int startY) : BaseBlock(IID_ACTIVEBLOCK, startX, startY, down, .75, 0U)
{
}

Tetromino::Tetromino(TETROMINOTYPE typ, int x, int y, TetrisWorld *inst)
	: type(typ), world(inst)
{
	originX = x;
	originY = y;
	construct();
}

void Tetromino::move(GraphObject::Direction dir)
{
	switch (dir)
	{
	case GraphObject::up:
		originY = TetrisWorld::XYLoc((originY / 4) + 1);
		for (int i = 0; i < 4; i++)
		{
			blocks[i]->move(blocks[i]->getX(), (blocks[i]->getY()/4 + 1));
		}
		break;
	case GraphObject::down:
		originY = TetrisWorld::XYLoc((originY / 4) - 1);
		for (int i = 0; i < 4; i++)
		{
			blocks[i]->move(blocks[i]->getX(), (TetrisWorld::XYLoc((blocks[i]->getY() / 4) - 1)));
		}
		break;
	case GraphObject::left:
		originX = TetrisWorld::XYLoc((originX / 4) - 1);
		for (int i = 0; i < 4; i++)
		{
			blocks[i]->move(blocks[i]->getX(), (blocks[i]->getY();
		}
		break;
	case GraphObject::right:
		originY = TetrisWorld::XYLoc((originY / 4) + 1);
		for (int i = 0; i < 4; i++)
		{
			blocks[i]->move(blocks[i]->getX(), (blocks[i]->getY() / 4 + 1));
		}
		break;
	default:
		break;
	}
}

bool Tetromino::construct()
{
	switch (type)
	{
	case ZBlock:
		break;
	case LBlock:
		break;
	case OBlock:
		break;
	case SBlock:
		break;
	case IBlock:
		break;
	case JBlock:
		break;
	case TBlock:
		blocks[0] = std::make_shared<BaseBlock>(originX, originY);
		blocks[1] = std::make_shared<BaseBlock>(TetrisWorld::XYLoc(originX - 1), TetrisWorld::XYLoc(originY));
		blocks[2] = std::make_shared<BaseBlock>(TetrisWorld::XYLoc(originX + 1), TetrisWorld::XYLoc(originY));
		blocks[3] = std::make_shared<BaseBlock>(TetrisWorld::XYLoc(originX), TetrisWorld::XYLoc(originY - 1));
		break;
	default:
		break;
	}
}
