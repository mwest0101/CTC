

#include "stdafx.h"
#include "config.h"
#include <iostream>
#include <windows.h>
#include "ctc.h"



using namespace std;
//using std::cout; using std::endl;
//using std::copy; using std::string;

void help(){	
	int cbf2=2;
	int cbb2=0;
		
	SetColor(12,0);
	cout << "**********************************************" << endl;
	cout << "*   ____                        _            *" << endl;
	cout << "*  / ____|                     | |           *" << endl;
	cout << "* | |      ___  _ __  ___  ___ | | ___       *" << endl;
	cout << "* | |     / _ \\| '_ \\/ __|/ _ \\| |/ _ \\      *" << endl;
	cout << "* | |____| (_) | | | \\__ \\ (_) | |  __/      *" << endl;
	cout << "*  \\_____|\\___/|_| |_|___/\\___/|_|\\___|      *" << endl;	
	cout << "*                                            *" << endl;
	cout << "*  _______         _                         *" << endl;
	cout << "* |__   __|      | |                         *" << endl;
	cout << "*   | | _____  __| |                         *" << endl;
	cout << "*   | |/ _ \\ \\/ /| __|                       *" << endl;
	cout << "*   | |  __/>  < | |_                        *" << endl;
	cout << "*   |_|\\___/_/\\_\\ \\__|  V 2.0                *" << endl;
	cout << "*                                            *" << endl;
	cout << "*   _____       _                            *" << endl;
	cout << "*  / ____|     | |                           *" << endl;
	cout << "* | |      ___ | | ___  _ __                 *" << endl;
	cout << "* | |     / _ \\| |/ _ \\| '__|                *" << endl;
	cout << "* | |____| (_) | | (_) | |                   *" << endl;
	cout << "*  \\_____|\\___/|_|\\___/|_|                   *" << endl;
	cout << "*                                            *" << endl;
	cout << "**********************************************" << endl;
    
	cout << endl;
		 SetColor(6,0);
	cout << "*******************************************************" << endl;
	cout << " Example: ctc [Back Color] [Font color] [Any text]" << endl;	
	cout << "*******************************************************" << endl << endl;
	
	SetColor(cbf2,cbb2);                           
	cout << "****************************************" << endl;
	SetColor(cbf2,cbb2);cout <<  "*";
	SetColor(0,7);
	cout << " 0 = Black       ";
	SetColor(cbf2,cbb2);cout <<  "*";		
		SetColor(8,0);		         
		cout << "  8 = Dark Grey     "; 
		SetColor(cbf2,cbb2);cout <<  "*" << endl;
	
	SetColor(cbf2,cbb2);cout <<  "*";			    
	SetColor(1,0);		     
	cout << " 1 = Blue        ";	
	SetColor(cbf2,cbb2);cout <<  "*";
		SetColor(9,0);		         
		cout << "  9 = Light Blue    ";
		SetColor(cbf2,cbb2);cout <<  "*" << endl;
		
	SetColor(cbf2,cbb2);cout <<  "*";
	SetColor(2,0);	         
	cout << " 2 = Green       ";
	SetColor(cbf2,cbb2);cout <<  "*";
		SetColor(10,0);
		cout << " 10 = Light Green   ";
		SetColor(cbf2,cbb2);cout <<  "*" << endl; 
	
	SetColor(cbf2,cbb2);cout <<  "*";
	SetColor(3,0);	         
	cout << " 3 = Cyan        ";
	SetColor(cbf2,cbb2);cout <<  "*";
		SetColor(11,0);
		cout << " 11 = Light Cyan    ";
		SetColor(cbf2,cbb2);cout <<  "*" << endl;             

	SetColor(cbf2,cbb2);cout <<  "*";
	SetColor(4,0);	         
	cout << " 4 = Red         ";
	SetColor(cbf2,cbb2);cout <<  "*";
		SetColor(12,0);
		cout << " 12 = Light Red     ";
			SetColor(cbf2,cbb2);cout <<  "*" << endl;
             
	SetColor(cbf2,cbb2);cout <<  "*";
	SetColor(5,0);	         
	cout << " 5 = Magenta     ";
	SetColor(cbf2,cbb2);cout <<  "*";
		SetColor(13,0);
		cout << " 13 = Light Magenta ";
		SetColor(cbf2,cbb2);cout <<  "*" << endl;

	SetColor(cbf2,cbb2);cout <<  "*";
	SetColor(6,0);		         
	cout << "  6 = Brown      ";	
	SetColor(cbf2,cbb2);cout <<  "*";
		SetColor(14, 0);
		cout << " 14 = Yellow        ";
		SetColor(cbf2,cbb2);cout <<  "*" << endl;
	         
	SetColor(cbf2,cbb2);cout <<  "*";
	SetColor(7,0);	         
	cout << " 7 = Light Grey  ";
	SetColor(cbf2,cbb2);cout <<  "*";
		SetColor(15,0);		     
		cout << " 15 = White         ";
		SetColor(cbf2,cbb2);cout <<  "*" << endl;
	
	SetColor(cbf2,cbb2);
	cout << "****************************************" << endl;
	
	cout << endl;
		
	cout << "Example	     	" << endl;
	cout << "# ctc 7 0 Example test	" << endl;
	cout << endl << endl;
	cout << "(Developed by:                                       )" << endl;
	cout << "(Maurcio West                                        )" << endl;
	cout << "(e-mail:mauriciowest@gmail.com                       )" << endl;
	cout << "(https://github.com/mwest0101/                       )" << endl;
	cout << "(https://www.facebook.com/groups/322699759016752     )" << endl;
	
}
