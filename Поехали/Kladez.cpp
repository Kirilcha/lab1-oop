#include "Klad.h"
#include "Aforizm.h"
#include "Posl_Pogov.h"
#include <string>
#include <fstream>

using namespace std;

Klad* Klad::In(ifstream &ifst)   // количетво общее можно сюда присобачить
{
	Klad *klad;
	int key;
	ifst >> key;
	
	switch (key)  // в зависимости, от того, что в ключе, туда и отпраит новые данные 
	{
	case 1:
		klad = new Aforizm;  // отправляем в функцию(АФ) полученные данные
		break; // возвращаем полученный эл
	case 2:
		klad = new Posl_Pog;
		break;
	default:    // нет совпадений -> нет записи
		return 0;
	}
	ifst.get();
	getline(ifst, klad->fraza);
	klad->InData(ifst);
	return klad;
}
string Klad::fr()
{
	return fraza;
}
