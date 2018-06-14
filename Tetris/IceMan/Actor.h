#ifndef ACTOR_H_
#define ACTOR_H_

#include "GraphObject.h"
class BaseBlock : GraphObject
{
public:
	BaseBlock(int imageID = 0, int startX = 0, int startY = 0, Direction dir = none, double size = 1.0, unsigned int depth = 0);
	void doSomething();
private:

};
#endif // ACTOR_H_
