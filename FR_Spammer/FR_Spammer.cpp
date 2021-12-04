//FR_Spammer
//Filip Rokita
//filiprokita.com

#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;

string tempname, ffn;
int number;

int main()
{
	for (int i = 0; i <= 999999; i++)
	{
		number = i;
		ostringstream convert;
		convert << number;
		tempname = convert.str();
		cout << tempname << endl;



		fstream tempsave;
		tempsave.open("FR_Temp.txt", ios::out);
		tempsave << "FR_" << tempname << ".txt";
		tempsave.close();



		fstream tempopen;
		tempopen.open("FR_Temp.txt", ios::in);
		if (tempopen.good() == false) exit(0);
		getline(tempopen, ffn);
		tempopen.close();



		fstream f;
		f.open(ffn, ios::out);
		f << "filiprokita.com" << endl;
		f.close();
	}
	return 0;
}