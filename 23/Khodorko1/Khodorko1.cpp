// Khodorko1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "iostream"
#include <string>
#include <fstream>

using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");


		string t = string(argv[1]);
		if (argc == 5 & (t == "1" | t == "2")) {
			string keyword = string(argv[2]);
			string infile = string(argv[3]);
			string outfile = string(argv[4]);
			ifstream in(infile);
			ofstream out(outfile);
			char symbol;
			char result;
			if (t == "1") {
				int i = 0;
			for (;;)
			{
				in.get(symbol);
				if (in.eof()) break;
					for ( i; i < keyword.size(); i++)
					{
					
						result = symbol + keyword[i];
						out << result;

						if (i = keyword.size() - 1)
						{
							i = 0;
						}
						break;
					}
				
				}
			}
			if (t == "2") {
				for (;;)
				{
					in.get(symbol);
					if (in.eof()) break;
					for (int i = 0; i < keyword.size(); i++)
					{
						result = symbol - keyword[i];
						out << result;

						if (i = keyword.size() - 1)
						{
							i = 0;
						}
			
						break;
					}
				}
			}
			out.close();
			in.close();
		}
	return 0;
}
