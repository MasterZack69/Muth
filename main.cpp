#include <iostream>
#include "Muth.hpp"

int main()
{
	Add(7, 8.7);
	Sub(9, 8);
	Multi(3, 3);
	Div(6, 3);
	Percent(2, 5);
	PercentOf(1.5, 108);
	std::cout << "\n";
	AreaTri(6, 9);
	AreaSq(6);
	AreaRec(7, 9);
	AreaTrap(4, 5, 2);
	AreaRhom(4,7);
	AreaPara(3,8);
	std::cout << "\n";
	VolCube(8);
	VolCuboid(2,3,4);
	VolRightCyl(8,9);

}
