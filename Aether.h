#ifndef AETHER_H
#define AETHER_H

#include "olcPixelGameEngine/olcPixelGameEngine.h"
#include "plane/Plane.h"
#include "OpenSimplexNoise.h"

class Aether
	: public Plane
{
private:
    double _totalElapsedTime = 0;
    OpenSimplexNoise _noise;
    OpenSimplexNoise _small;

public:
	Aether();
	~Aether() = default;

	virtual bool OnUserCreate();
	virtual bool OnUserUpdate(float fElapsedTime);
};

#endif // AETHER_H
