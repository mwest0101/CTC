#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <string.h>
using namespace std;


namespace{
	const char *spaces = " \t";
	const char *digits = "0123456789";
}

int IntLen(const char *cstr){
	int k, n = 0;
	if (cstr)
	{
		n = strspn(cstr, spaces);
		cstr += n;
		if (*cstr == '-' || *cstr == '+')
			++cstr, ++n;
		k = strspn(cstr, digits);
		n = k ? n + k : 0;
	}
	return n;
}

bool isNumber(const char *cstr){
	int n = IntLen(cstr);
	if (n)
	{
		cstr += n;
		if (*cstr == 'e' || *cstr == 'E')
			n = strspn(++cstr, digits);
	}

	return n > 0;
}


void anlizeString(char *cad){
	int count_find=0;
	char *result;
//	for(int i=0 ; i<strlen(cad);i++) {
//        //cout << cad[i];
//     	if((count_find==0) and cad[i]==FIND_STR_INI)){
//     		count_find++;	
//		}
//	 }
	result=strstr(cad,"((");
	if (result!=NULL){
//		result=result.substr(2,strlen());
//		cout << "Se encontro en " << result.substr();
	}

}

