#include "stdafx.h"
#include <iostream>
#include <windows.h>



#include "config.h"
#include "functions.h"
#include "ctc.h"
#include "help.h"

using namespace std;

int main(int argc, char *argv[])
{
	int color1, color2;
	anlizeString();
	/*
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
		char *cadTemp;
		for (i; i < argc; i++){
			cout << argv[i];
			cadTemp=argv[i];
			anlizeString(cadTemp);
//			cout << cadTemp;
			
		}
	}else{		
		help();
		SetColor(7,0);
	}
	*/
	return 0;
}
