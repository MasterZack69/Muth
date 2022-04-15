#include <iostream>
#include "Muth.hpp"

std::string space = "----------------------------\n";
std::string space2 = "----------------------------\n\n";

void jod(float a, float b)
{
	std::cout << space;
	std::cout << a << " जमा " << b << "\n"
			  << " = " << a + b << "\n";
	std::cout << space2;
}

void ghata(float a, float b)
{
	std::cout << space;
	std::cout << a << " घटा " << b << "\n"
			  << " = " << a - b << "\n";
	std::cout << space2;
}

void guna(float a, float b)
{
	std::cout << space;
	std::cout << a << " गुना " << b << "\n"
			  << " = " << a * b << "\n";
	std::cout << space2;
}

void bhag(float a, float b)
{
	std::cout << space;
	std::cout << a << " बटा " << b << "\n"
			  << " = " << a / b << "\n";
	std::cout << space2;
}

void pratishat(float a, float b)
{
	std::cout << space;
	float value1 = a * 100;
	float value2 = value1 / b;
	std::cout << a << " बटे " << b << " का प्रतिशत \n"
			  << " = " << value2 << "%\n";
	std::cout << space2;
}

void ka_pratishat(float a, float b)
{
	std::cout << space;
	float value1 = a * b;
	float value2 = value1 / 100;
	std::cout << a << " का " << b << " प्रतिशत \n"
			  << " = " << value2 << "\n";
	std::cout << space2;
}

void trikon_ka_shetrafal(float a, float b)
{
	std::cout << space;
	std::cout << "त्रिकोण का क्षेत्रफल  "
			  << "\n"
			  << "आधार : " << a << ", उंचाई : " << b << "\n"
			  << " = " << 0.5 * a * b << "\n";
	std::cout << space2;
}

void vritt_ka_shetrafal(float a)
{
	float value1 = 2 * acos(0.0);
	float value2 = a * a;

	std::cout << space;
	std::cout << "वृत्त का क्षेत्रफल\n"
			  << "त्रिज्या : " << a << "\n"
			  << " = " << value1 * value2 << "\n";
	std::cout << space2;
}

void varg_ka_shetrafal(float a)
{
	std::cout << space;
	std::cout << "वर्ग का क्षेत्रफल"
			  << "\n"
			  << "कोना : " << a << "\n"
			  << " = " << a * a << "\n";
	std::cout << space2;
}

void chaturbhurj_ka_shetrafal(float a, float b)
{
	std::cout << space;
	std::cout << "चतुर्भुज का क्षेत्रफल\n"
			  << "लंबाई : " << a << ", चौड़ाई : " << b << "\n"
			  << " = " << a * b << "\n";
	std::cout << space2;
}

void samlambchaturbhurj_ka_shetrafal(float a, float b, float c)
{
	float value = a + b;
	std::cout << space;
	std::cout << "समलम्ब चतुर्भुज का क्षेत्रफल\n"
			  << "समानांतर कोने : " << a << " और " << b << ", ऊंचाई : " << c << "\n"
			  << " = " << 0.5 * value * c << "\n";
	std::cout << space2;
}

void samchaturbhurj_ka_shetrafal(float a, float b)
{
	std::cout << space;
	std::cout << "समचतुर्भुज का क्षेत्रफल\n"
			  << "आधार : " << a << ", ऊंचाई  : " << b << "\n"
			  << " = " << a * b << "\n";
	std::cout << space2;
}

void samantar_chaturbhurj_ka_shetrafal(float a, float b)
{
	std::cout << space;
	std::cout << "समांतर चतुर्भुज का क्षेत्रफल\n"
			  << "आधार : " << a << ", ऊंचाई : " << b << "\n"
			  << " = " << a * b << "\n";
	std::cout << space2;
}

void ghan_ka_aytan(float a)
{
	std::cout << space;
	std::cout << "घन का आयतन\n"
			  << "कोना : " << a << "\n"
			  << " = " << a * a * a << "\n";
	std::cout << space2;
}

void ghanabh_ka_aytan(float a, float b, float c)
{
	std::cout << space;
	std::cout << "घनाभ का आयतन\n"
			  << "लंबाई : " << a << ", चौड़ाई : " << b << "\n"
			  << " = " << a * b << "\n";
	std::cout << space2;
}

void belan_ka_aytan(float a, float b)
{
	float value1 = a * a;
	float value2 = 2 * acos(0.0);
	std::cout << space;
	std::cout << "बेलन का आयतन \n"
			  << "त्रिज्या : " << a << ", ऊंचाई : " << b << "\n"
			  << " = " << value2 * value1 * b << "\n";
	std::cout << space2;
}

