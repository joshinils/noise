#include "Aether.h"
#include <stdlib.h>

int main()
{
	srand(0); // always same
	double scale = 20;
    double factor = 1080 / 9; // x / 9, x is the resulting actual vertical size
	Aether world;
	if (world.Construct((uint32_t)(16.0*scale), (uint32_t)(9.0*scale), (uint32_t)std::max(1.0, factor / scale), (uint32_t)std::max(1.0, factor / scale)))
	{
		world.Start();
	}
	return 0;
}
