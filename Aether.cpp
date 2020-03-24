#include "Aether.h"
#include "plane/Plane.h"
#include <iostream>

#include "OpenSimplexNoise.h"

Aether::Aether()
  : _noise(0)
{

}

bool Aether::OnUserCreate()
{
	olc::PixelGameEngine::SetPixelMode(olc::Pixel::ALPHA);

	Plane::OnUserCreate();
	std::cout << __FUNCTION__ << std::endl;


	return true;
}

bool Aether::OnUserUpdate(float fElapsedTime)
{
    this->_totalElapsedTime += fElapsedTime;
	Clear(olc::BLACK);
	Plane::OnUserUpdate(fElapsedTime);

	/**/
	double minx = minX();
	double miny = minY();
	double maxx = maxX();
	double maxy = maxY();


	for (int x = 0; x < Plane::ScreenWidth(); x++)
	{
		for (int y = 0; y < Plane::ScreenHeight(); y++)
		{
            double value = (this->_noise.Evaluate(Plane::stocx(x), Plane::stocy(y), this->_totalElapsedTime/3) +1)* 128;
			Draw(Plane::stocx(x), Plane::stocy(y), olc::Pixel(value, value, value, 255));
		}
	}

	return true;
}
