#include "Posl_Pogov.h"
#include <fstream>

using namespace std;

void Posl_Pog:: InData(ifstream &ifst)
{
	ifst.getline(strana, 100, '\n');
}

void Posl_Pog:: Out(ofstream &ofst)
{
	ofst << " Страна данной пословицы/поговорки: " << strana << endl;
}