#include <string> 
#include <iostream>
#include <stdlib.h> 

#include <bits/stdc++.h>
// libreria para cambia color
//#include <windows.h>

//using std::cout; using std::endl;
//using std::copy; using std::string;

using namespace std;

string convToHex(char *data){

//	char *resHex;
	//sprintf(resHex,"%x", stoi(data));
    //printf("Hex: %s", resHex);
    
//	int i = 12;
    stringstream ss;
    
    ss << hex << stoi(data);
    string res = ss.str(); 
    cout << "res " << res << " - ";
    
    return res;
}

int main(int argc,char *argv[],char *envp[]) {
	string par1;
	string par2;
	
		
	if (argc==3) cout << "Hay dos parametros"<< endl;

	par1=convToHex(argv[1]);
	par2=convToHex(argv[2]);
	

    
//    return res;
    
//	col2=stoi(scol2);
	
	/*
	col1=atoi(scol1);
	col2=atoi(scol2);
	
	strCol="color "+ col1+col2;
	cout << strCol<< endl;
	
	char arr[strCol.length() + 1]; 
 
    strcpy(arr, strCol.c_str()); 
		
	system (arr); //ejemplo  
//	system ("color 17"); //ejemplo 
    cout << "reset to default colors with NC" << endl;
    */
    return 1;
}
/*
    0 = Negro       8 = Gris
    1 = Azul        9 = Azul claro
    2 = Verde       A = Verde claro
    3 = Aguamarina        B = Aguamarina claro
    4 = Rojo        C = Rojo claro
    5 = Púrpura     D = Púrpura claro
    6 = Amarillo    E = Amarillo claro
    7 = Blanco      F = Blanco brillante
  */  
    
    
    /*
    
    if (argc > 0){
    	 nlines = argc;
         for ( int i = 0; i<argc ; ++i ){
         	cout << argv[i] << "\n";
         	
		 }
	}
	*/
