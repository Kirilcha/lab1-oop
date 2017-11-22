#include "Aforizm.h"
#include <fstream>
using namespace std;

void Aforizm:: InData(ifstream &ifst)   
{
	ifst.getline(aftor, 100, '\n');
}

void Aforizm:: Out(ofstream &ofst)
{
	ofst << " Автор данного высказывания: " << aftor << endl;
}
