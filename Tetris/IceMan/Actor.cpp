#include "Actor.h"
#include "TetrisWorld.h"

BaseBlock::BaseBlock(int imageID, int startX, int startY, Direction dir, double size, unsigned int depth) :
	GraphObject(imageID, startX, startY, dir, size, depth) { setVisible(true); }

//SetBlock::SetBlock(int imageID, int startX, int startY, Direction dir, double size, unsigned int depth) :
//	GraphObject(imageID, startX, startY, dir, size, depth)
//{
//	setVisible(true);
//}