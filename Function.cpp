#include <iostream>
#include "Muth.hpp"

std::string space = "------------------------------------\n";
std::string space2 = "------------------------------------\n\n";
float pi = 2 * acos(0.0);

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
	float value = a * a;

	std::cout << space;
	std::cout << "वृत्त का क्षेत्रफल\n"
			  << "त्रिज्या : " << a << "\n"
			  << " = " << pi * value << "\n";
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

void aayat_ka_shetrafal(float a, float b)
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
	float value = a * a;
	std::cout << space;
	std::cout << "बेलन का आयतन \n"
			  << "त्रिज्या : " << a << ", ऊंचाई : " << b << "\n"
			  << " = " << pi * value * b << "\n";
	std::cout << space2;
}

void varg_ki_paridhi(float a)
{
	std::cout << space;
	std::cout << "वर्ग की परिधि\n"
			  << "कोना : " << a << "\n"
			  << " = " << a * 4 << "\n";
	std::cout << space2;
}

void aayat_ka_parimap(float a, float b)
{
	float value = a + b;
	std::cout << space;
	std::cout << "आयत का परिमाप \n"
				 "लंबाई : "
			  << a << ", चौड़ाई : " << b << "\n"
			  << " = " << 2 * value << "\n";
	std::cout << space2;
}

void vritt_ki_paridhi(float a)
{
	std::cout << space;
	std::cout << "वृत्त की परिधि \n"
			  << "त्रिज्या :" << a << "\n"
			  << " = " << 2 * pi * a << "\n";
	std::cout << space2;
}

void samtulya_tribhuj_ka_parimap(float a)
{
	std::cout << space;
	std::cout << "समतुल्य त्रिभुज का परिमाप\n"
			  << "कोना : " << a << "\n"
			  << " = " << a * 3 << "\n";
	std::cout << space2;
}

void bal(float a, float b)
{
	std::cout << space;
	std::cout << "वस्तु का बल \n"
			  << "द्रव्यमान : " << a << ", त्वरण : " << b << "\n"
			  << " = " << a * b << "\n";
	std::cout << space2;
}

void gatij_urja(float a, float b)
{
	float value = b * b;
	std::cout << space;
	std::cout << "गतिज ऊर्जा\n"
			  << "द्रव्यमान : " << a << ", वेग : " << b << "\n"
			  << " = " << 0.5 * a * value << "\n";
	std::cout << space2;
}

void tvaran(float a, float b, float c)
{
	float value = b - a;
	std::cout << space;
	std::cout << "त्वरण \n"
			  << "प्रारंभिक वेग : " << a << ", अंतिम वेग : " << b << ", समय : " << c << "\n"
			  << " = " << value / c << "\n";
	std::cout << space2;
}

void dravyaman(float a, float b)
{
	std::cout << space;
	std::cout << "द्रव्यमान \n"
			  << "घनत्व : " << a << ", मात्रा : " << b << "\n"
			  << " = " << a * b << "\n";
	std::cout << space2;
}

void raftaar(float a, float b)
{
	std::cout << space;
	std::cout << "रफ़्तार  \n"
			  << "दूरी : " << a << ", समय : " << b << "\n"
			  << " = " << a / b << "\n";
	std::cout << space2;
}

void samay(float a, float b)
{
	std::cout << space;
	std::cout << "समय \n"
			  << "दूरी : " << a << ", रफ़्तार : " << b << "\n"
			  << " = " << a / b << "\n";
	std::cout << space2;
}

void doori(float a, float b) 
{
	std::cout << space;
	std::cout << "दूरी \n" 
<< "रफ़्तार : " <<  a << ", समय : " << b << "\n" 
<< " = " << a * b << "\n";
	std::cout << space2;
}

void ghanatva(float a,float b) 
{
	std::cout << space;
	std::cout << "घनत्व \n"
 << "द्रव्यमान : " << a << ", मात्रा : " << b << "\n" 
<< " = " << a / b << "\n" ;
	std::cout << space2;
}
