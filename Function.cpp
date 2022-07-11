#include <iostream>
#include "Muth.hpp"

std::string space = "------------------------------------\n";
std::string space2 = "------------------------------------\n\n";
constexpr double pi = 3.141592653589793238;

void jod(double a, double b)
{
	std::cout << space;
	std::cout << a << " जमा " << b << "\n"
			  << " = " << a + b << "\n";
	std::cout << space2;
}

void ghata(double a, double b)
{
	std::cout << space;
	std::cout << a << " घटा " << b << "\n"
			  << " = " << a - b << "\n";
	std::cout << space2;
}

void guna(double a, double b)
{
	std::cout << space;
	std::cout << a << " गुना " << b << "\n"
			  << " = " << a * b << "\n";
	std::cout << space2;
}

void bhag(double a, double b)
{
	std::cout << space;
	std::cout << a << " बटा " << b << "\n"
			  << " = " << a / b << "\n";
	std::cout << space2;
}

void pratishat(double a, double b)
{
	std::cout << space;
	double value1 = a * 100;
	double value2 = value1 / b;
	std::cout << a << " बटे " << b << " का प्रतिशत \n"
			  << " = " << value2 << "%\n";
	std::cout << space2;
}

void ka_pratishat(double a, double b)
{
	std::cout << space;
	double value1 = a * b;
	double value2 = value1 / 100;
	std::cout << a << " का " << b << " प्रतिशत \n"
			  << " = " << value2 << "\n";
	std::cout << space2;
}

void AreaTri(double a, double b)
{
	std::cout << space;
	std::cout << "त्रिकोण का क्षेत्रफल  "
			  << "\n"
			  << "आधार : " << a << ", उंचाई : " << b << "\n"
			  << " = " << 0.5 * a * b << "\n";
	std::cout << space2;
}

void AreaCir(double a)
{
	double value = a * a;

	std::cout << space;
	std::cout << "वृत्त का क्षेत्रफल\n"
			  << "त्रिज्या : " << a << "\n"
			  << " = " << pi * value << "\n";
	std::cout << space2;
}

void AreaSq(double a)
{
	std::cout << space;
	std::cout << "वर्ग का क्षेत्रफल"
			  << "\n"
			  << "कोना : " << a << "\n"
			  << " = " << a * a << "\n";
	std::cout << space2;
}

void AreaRec(double a, double b)
{
	std::cout << space;
	std::cout << "चतुर्भुज का क्षेत्रफल\n"
			  << "लंबाई : " << a << ", चौड़ाई : " << b << "\n"
			  << " = " << a * b << "\n";
	std::cout << space2;
}

void AreaTrap(double a, double b, double c)
{
	double value = a + b;
	std::cout << space;
	std::cout << "समलम्ब चतुर्भुज का क्षेत्रफल\n"
			  << "समानांतर कोने : " << a << " और " << b << ", ऊंचाई : " << c << "\n"
			  << " = " << 0.5 * value * c << "\n";
	std::cout << space2;
}

void AreaRhom(double a, double b)
{
	std::cout << space;
	std::cout << "समचतुर्भुज का क्षेत्रफल\n"
			  << "आधार : " << a << ", ऊंचाई  : " << b << "\n"
			  << " = " << a * b << "\n";
	std::cout << space2;
}

void AreaPara(double a, double b)
{
	std::cout << space;
	std::cout << "समांतर चतुर्भुज का क्षेत्रफल\n"
			  << "आधार : " << a << ", ऊंचाई : " << b << "\n"
			  << " = " << a * b << "\n";
	std::cout << space2;
}

void VolCube(double a)
{
	std::cout << space;
	std::cout << "घन का आयतन\n"
			  << "कोना : " << a << "\n"
			  << " = " << a * a * a << "\n";
	std::cout << space2;
}

void VolCuboid(double a, double b, double c)
{
	std::cout << space;
	std::cout << "घनाभ का आयतन\n"
			  << "लंबाई : " << a << ", चौड़ाई : " << b << "\n"
			  << " = " << a * b << "\n";
	std::cout << space2;
}

void AreaCyl(double a, double b)
{
	double value = a * a;
	std::cout << space;
	std::cout << "बेलन का आयतन \n"
			  << "त्रिज्या : " << a << ", ऊंचाई : " << b << "\n"
			  << " = " << pi * value * b << "\n";
	std::cout << space2;
}

void PeriSq(double a)
{
	std::cout << space;
	std::cout << "वर्ग की परिधि\n"
			  << "कोना : " << a << "\n"
			  << " = " << a * 4 << "\n";
	std::cout << space2;
}

void PeriRec(double a, double b)
{
	double value = a + b;
	std::cout << space;
	std::cout << "आयत का परिमाप \n"
				 "लंबाई : "
			  << a << ", चौड़ाई : " << b << "\n"
			  << " = " << 2 * value << "\n";
	std::cout << space2;
}

void Circum(double a)
{
	std::cout << space;
	std::cout << "वृत्त की परिधि \n"
			  << "त्रिज्या :" << a << "\n"
			  << " = " << 2 * pi * a << "\n";
	std::cout << space2;
}

void PeriTri(double a)
{
	std::cout << space;
	std::cout << "समतुल्य त्रिभुज का परिमाप\n"
			  << "कोना : " << a << "\n"
			  << " = " << a * 3 << "\n";
	std::cout << space2;
}

void Force(double a, double b)
{
	std::cout << space;
	std::cout << "वस्तु का बल \n"
			  << "द्रव्यमान : " << a << ", त्वरण : " << b << "\n"
			  << " = " << a * b << "\n";
	std::cout << space2;
}

void KinEnergy(double a, double b)
{
	double value = b * b;
	std::cout << space;
	std::cout << "गतिज ऊर्जा\n"
			  << "द्रव्यमान : " << a << ", वेग : " << b << "\n"
			  << " = " << 0.5 * a * value << "\n";
	std::cout << space2;
}

void Accel(double a, double b, double c)
{
	double value = b - a;
	std::cout << space;
	std::cout << "त्वरण \n"
			  << "प्रारंभिक वेग : " << a << ", अंतिम वेग : " << b << ", समय : " << c << "\n"
			  << " = " << value / c << "\n";
	std::cout << space2;
}

void Mass(double a, double b)
{
	std::cout << space;
	std::cout << "द्रव्यमान \n"
			  << "घनत्व : " << a << ", मात्रा : " << b << "\n"
			  << " = " << a * b << "\n";
	std::cout << space2;
}

void Speed(double a, double b)
{
	std::cout << space;
	std::cout << "रफ़्तार  \n"
			  << "दूरी : " << a << ", समय : " << b << "\n"
			  << " = " << a / b << "\n";
	std::cout << space2;
}

void Time(double a, double b)
{
	std::cout << space;
	std::cout << "समय \n"
			  << "दूरी : " << a << ", रफ़्तार : " << b << "\n"
			  << " = " << a / b << "\n";
	std::cout << space2;
}

void Distance(double a, double b) {
	std::cout << space;
	std::cout << "दूरी \n" << "रफ़्तार : " <<  a << ", समय : " << b << "\n" << " = " << a * b << "\n";
	std::cout << space2;
}

void Density(double a,double b) {
	std::cout << space;
	std::cout << "घनत्व \n" << "द्रव्यमान : " << a << ", मात्रा : " << b << "\n" << " = " << a / b << "\n" ;
	std::cout << space2;
}

void FinVelocity(double a, double b, double c) {
	double value = b * c;
	std::cout << space;
	std::cout << "अंतिम वेग \n" << "प्रारंभिक वेग : " << a << ", त्वरण : " << b << ", समय : " << c << "\n" << " = " << a + value << "\n"; 
	std::cout << space2;
}

void InVelocity(double a, double b, double c) {
	double value = b * c;
	std::cout << space;
	std::cout << "प्रारंभिक वेग \n" << "अंतिम वेग : " << a << ", त्वरण : " << b << ", समय : " << c << "\n" << " = " << a - value << "\n"; 
	std::cout << space2; 
}

void CelFahr(double a) {
	double value = a * 1.8;
	std::cout << space;
	std::cout << "सेल्सियस फारेनहाइट में \n" << "सेल्सीयस : " << a << "\n" << " = " << value + 32 << "°F\n";
	std::cout << space2;
}

void CelKel(double a) {
	std::cout << space;
	std::cout << "सेल्सियस केल्विन में \n" << "सेल्सियस : " << a << "\n" << " = " << a + 273.15 << "°K\n";
	std::cout << space2;
}

void FahrCel(double a) {
	double value = a - 32;
	std::cout << space;
	std::cout << "फ़ारेनहाइट सेल्शियस में \n" << "फ़ारेनहाइट : " << a << "\n" << " = " << value * 0.555555556 << "°C \n";
	std::cout << space2;
}

void FahrKel(double a) {
	double value = a - 32;
	double value2 = value * 0.555555556;
	std::cout << space;
	std::cout << "फारेनहाइट केल्विन में \n" << "फारेनहाइट :\n " << a << "\n" << " = " << value2 + 273.15 << "°K\n";
	std::cout << space2;
}

void KelCel(double a) {
	std::cout << space;
	std::cout << "केल्विन सेल्शियस मे  \n" << "केल्विन : " << a << "\n" << " = " << a - 273.15 << "°C\n";
	std::cout << space2;
}

void KelFahr(double a) {
	double value = a - 273.15;
	double value2 = value * 1.8;
	std::cout << space2;
	std::cout << "केल्विन फारेनहाइट मे \n" << "केल्विन : " << a << "\n" << " = " << value2 + 32 << "°F\n";
	std::cout << space2;
}

