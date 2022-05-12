#ifndef AEROPORT_H_INCLUDED
#define AEROPORT_H_INCLUDED
#include <istream>
#include <string>
#include <iostream>
#include<fstream>
#include "vector"
#include "ville.h"

using namespace std;

class aeroport
{
    string nom;
    vector<ville> destination;
public:
    aeroport (string = " " );
    friend ostream& operator<<(ostream& , aeroport&);
    friend istream& operator>>(istream&, aeroport&);

    friend ostream& operator<<(ostream& , aeroport*);
    friend istream& operator>>(istream&, aeroport*);

    string get_nom(){ return nom;};
    ~aeroport ();
};

#endif // AEROPORT_H_INCLUDED
