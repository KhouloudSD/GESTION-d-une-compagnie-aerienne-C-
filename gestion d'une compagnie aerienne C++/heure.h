#ifndef HEURE_H
#define HEURE_H
#include <iostream>
#include<fstream>
#include<string>
#include<string>
#include<iostream>
using namespace std;
class heure
{   int hour;
    int minute;
    public:
        heure(int =0, int=0);
        friend ostream& operator<<(ostream& ,heure& );
        friend istream& operator>>(istream& ,heure&);

        friend ostream& operator<<(ostream&,heure*);
        friend istream& operator>>(istream&,heure*);



        bool operator == (heure);
        bool operator<(heure);
        ~heure();
};

#endif // HEURE_H
