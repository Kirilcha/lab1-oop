#include "Klad.h"
#include <fstream>

using namespace std;

#ifndef Posl_Pogov_h
#define Posl_Pogov_h
class Posl_Pog : public Klad
{
	char strana[200];
public:
	void Out(ofstream &ofst);
	void InData(ifstream &ifst);
	Posl_Pog() {};
};
#endif




