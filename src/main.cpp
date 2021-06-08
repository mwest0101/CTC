#include "stdafx.h"
#include <iostream>
#include <windows.h>

#include "config.h"

#include "ctc.h"
#include "help.h"
#include "functions.h"

using namespace std;

int main(int argc, char *argv[], char* envp[])
{
	int color1, color2;
	
	if (argc > 1)
	{

		if (isNumber(argv[1])){
			color1 = atoi(argv[1]);
		}else{
			color1=7;
		}
		
		if (isNumber(argv[2])){
			color2 = atoi(argv[2]);
		}else{
			color2=0;
		}		

		SetColor(color1, color2);
		int i = 3;

		string cad;
		
		for (i; i < argc; i++){			
			cad=cad+argv[i]+" ";
		}
		cad = cad.substr(0,cad.size()-1);
		anlizeString(cad);
	}else{		
		help();
		SetColor(7,0);
	}
	
	return 0;
}
