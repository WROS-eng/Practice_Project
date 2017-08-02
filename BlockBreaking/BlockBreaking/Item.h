#pragma once
#ifndef INCLUDED_Item_h
#define INCLUDED_Item_h

#include <gl/freeglut.h>
#include <time.h>
#include "Bar.h"
#include "ScoreManager.h"
#include "ObjectManager.h"
#include "Texture.h"

class ObjectManager;

class Item
{
public:
	Item();
	Item(float posX,float posY);
	~Item();
	void draw();
	void move();
	void collisionWithBar(Bar& bar, ScoreManager& scoreMgr, ObjectManager& objectMgr);
	void loadImage();
	float posX,posY;
	float deltaX, deltaY;
	float width, height;
	bool isDeleted = false;
	Texture texture;
};

#endif // !INCLUDED_ITEM_H
