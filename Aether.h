#ifndef AETHER_H
#define AETHER_H

#include "olcPixelGameEngine/olcPixelGameEngine.h"
#include "plane/Plane.h"

class Aether
	: public Plane
{

private:

public:
	Aether();
	~Aether();

	virtual bool OnUserCreate();
	virtual bool OnUserUpdate(float fElapsedTime);
};

#endif // AETHER_H
