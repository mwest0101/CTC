#include <string.h> 
#include <iostream>
#include <stdlib.h> // libreria para cambia color
//#include <windows.h>



using std::cout; using std::endl;
using std::copy; using std::string;


int main(int argc,char *argv[],char *envp[]) {
	int nlines=0;
	string scol1,scol2;
	int col1=0,col2=7;
	char num1[1];
	char num2[1];
	string strCol;
	
	scol1=argv[1];scol2=argv[2];
	col1=stoi(scol1);	
	col2=stoi(scol2);
	
	if (argc > 0){
    	 nlines = argc;
         for ( int i = 0; i<argc ; ++i ){
         	cout << argv[i] << "\n";
         	
		 }
	}
	
	if (argc==3) cout << "Hay dos parametros"<< endl;

	
	

	sprintf(num,"%x", col1); //it will print EC
    printf("Hex: %s", num);

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
    return 0;
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
    
