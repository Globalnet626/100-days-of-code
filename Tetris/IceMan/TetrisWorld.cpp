#include "TetrisWorld.h"
#include <string>
using namespace std;

GameWorld* createTetrisWorld(string assetDir)
{
	return new TetrisWorld(assetDir);
}

// Students:  Add code to this file (if you wish), StudentWorld.h, Actor.h and Actor.cpp
