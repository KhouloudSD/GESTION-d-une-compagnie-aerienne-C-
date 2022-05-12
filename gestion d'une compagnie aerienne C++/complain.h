#ifndef COMPLAIN_H
#define COMPLAIN_H

#include<unistd.h>
#include<conio.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
#include<fstream>
#include "passager.h"
using namespace std;

class complain
{
    public:
        //complain(string,string ,string );
        complain (passager );
        void type();
        virtual ~complain();
        friend ostream& operator<<(ostream& ,complain&);

    private:
        string f_name, l_name, p_num;
		int choice;
		string sentence;
		string types;
		char ch;

};


#endif // COMPLAIN_H
