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


void anlizeString(){
	int count_find=0;
	//char *result;
	//char* result2;

	string str,result1,result2,result3,result4;
	string subStr,trimStr;
	str = "test de cadena ((4,0)) test de cadena ((4,0)) test de cadena ";
	int oldPos = 0;
	int newPos = 0;

	subStr = str;
	int band = 1;
	cout << str << endl;
	while (band) {
		if ((count_find == 0) and ((newPos = str.find("((")) != -1)) {
			cout << endl << "-------------pase 1-------------" << endl << endl;

			subStr = str.substr(0, newPos);
			//subStr = str.substr(oldPos, newPos);
			cout << "-" << subStr << "-" << endl;

			str = str.substr(newPos + 2);
			cout << "- str:" << str << "-" << endl;
			oldPos = newPos;

			count_find=1;
			
		}else if ((count_find == 1) and ((newPos = str.find("))")) != -1)) {
			cout << endl << "-------------pase 2-------------" << endl << endl;
			subStr = str.substr(0, newPos);			
			cout << "-" << subStr << "-"<< endl;
			str = str.substr(newPos+2);			
			cout << "- str:" << str << "-" << endl;
			//oldPos = newPos;
			oldPos += 2;
			count_find=0;

		}else{
			
			cout << endl << "-------------pase 3-------------" << endl << endl;
			cout << "-" << str << "-" << endl;
			//cout << str << endl;
			band = 0;
		}

	}
	/*
	if ((count_find == 2) and ((newPos = str.find("))")) != -1)) {
		cout << "pase 2" << endl;
		subStr = str.substr(0, newPos);
		cout << subStr << endl;
		count_find++;
	}*/

	/*
	cout << str <<endl;
	cout << endl << endl;

	
	int pos1 = str.find("((");
	
	result1 = str.substr(0,pos1);
	cout << " pos1 -> " << pos1 << endl;
	pos1 += 2;
	
	cout << result1; //test de cadena |
	cout << endl << endl;

	cout << " pos1 -> " << pos1 << endl;
	result2 = str.substr(pos1);
	cout << " pos1 -> " << pos1 << endl;
	cout << result2; //4,0)) prueba de color
	cout << endl << endl;

	int pos2 = result2.find("))");
	result3 = result2.substr(0,pos2);
	cout << " pos2 -> " << pos2 << endl;
	cout << result3; //4,0
	cout << endl << endl;
	
	pos2 += 2;
	result4 = result2.substr(pos2);
	cout << " pos2 -> " << pos2 << endl;
	cout << result4; //4,0)) prueba de color
	cout << endl << endl;

	//result2 = str.substr(pos1,(pos2-pos1));
	//cout << result2 << endl;
	*/

	/*
	for(int i=0 ; i<strlen(cad);i++) {
        //cout << cad[i];
		result = strstr(cad, "((");
     	if((count_find==0) && (result!=NULL)){
			cout strncpy(result2,2, strlen());
     		count_find++;	
		}
	 }
	 */
	/*
	result=strstr(cad,"((");
	if (result!=NULL){
//		result=result.substr(2,strlen());
//		cout << "Se encontro en " << result.substr();
	}*/

}

