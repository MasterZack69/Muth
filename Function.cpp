#include <iostream>
#include "Muth.hpp"

void Add(float a, float b)
{
	std::cout << a << " + " << b << " = " << a + b << "\n";
}

void Sub(float a, float b)
{
	std::cout << a << " - " << b << " = " << a - b << "\n";
}

void Multi(float a, float b)
{
	std::cout << a << " * " << b << " = " << a * b << "\n";
}

void Div(float a, float b)
{
	std::cout << a << " / " << b << " = " << a / b << "\n";
}

void Percent(float a, float b)
{
	float value1 = a * 100;
	float value2 = value1 / b;
	std::cout << "Percentage of " << a << "/" << b << " = " << value2 << "%\n";
}

void PercentOf(float a, float b)
{
	float value1 = a * b;
	float value2 = value1 / 100;
	std::cout << a << "% "
			  << "of " << b << " = " << value2 << "\n";
}

void AreaTri(float a, float b)
{
	std::cout << "Area of ∆ :- base : " << a << ", height : " << b << " = " << 0.5 * a * b << "\n";
}

void AreaSq(float a)
{
	std::cout << "Area of Sq. :- side : " << a << " = " << a * a << "\n";
}

void AreaRec(float a, float b)
{
	std::cout << "Area of Rectangle :- length : " << a << ", breadth : " << b << " = " << a * b << "\n";
}

void AreaTrap(float a, float b, float c)
{
	float value = a + b;
	std::cout << "Area of Trapezium :- Parallel Sides : " << a << " and " << b << ",height : " << c << " = " << 0.5 * value * c << "\n";
}

void AreaRhom(float a, float b)
{
	std::cout << "Area of Rhombus :- Diagonals : " << a << " and " << b << " = " << a * b << "\n";
}

void AreaPara(float a, float b)
{
	std::cout << "Area of Parallelogram :- base : " << a << ", height : " << b << " = " << a * b << "\n";
}

void VolCube(float a)
{
	std::cout << "Volume of Cube :- side : " << a << " = " << a * a * a << "\n";
}

void VolCuboid(float a, float b, float c)
{
	std::cout << "Volume of Cuboid :- length : " << a << ", breadth : " << b << ", Height : " << c << " = " << a * b * c << "\n";
}

void VolRightCyl(float a, float b)
{
	float value1 = a * a;
    float value2 = 2*acos(0.0);
	std::cout << "Volume of Right Cylinder :- Radius : " << a << ", Height : " << b << " = " << value2 * value1 * b << "\n";
} 