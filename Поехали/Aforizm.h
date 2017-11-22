#include "Klad.h"
#include <fstream>

using namespace std;
#ifndef Aforizm_h
#define Aforizm_h
class Aforizm : public Klad
{
	char aftor[100];

public:
	void InData(ifstream &ifst);
	void Out(ofstream &ofst);
	Aforizm() {};
};
#endif